def dec_to_bin(num):
    
    number = ''
    numw = int(num)
    numf = num - numw
    
    while numw > 0:
        a = str(numw % 2)
        b = int(numw / 2)
        number += a
        numw = b    
    number = number[::-1]    
    if numf != 0:
        number += '.'
    
        while numf != 0:
            if int(numf * 2) == 1:
                number += '1'
                numf = (numf * 2) - 1
            else:
                number += '0'
                numf = numf * 2
        return float(number)
    return int(number)


def bin_to_dec(num):
    
    numw = int(num) 
    numf = num - numw
    a = str(numw)
    b = a[::-1]
    number = 0
    for i in range(len(b)):
        if b[i] in ['1', '0']:
            number += int(b[i]) * 2 ** (b.index(b[i], i))
        else:
            print('Input not a binary number')
            break
    if numf != 0:
        x = str(numf)
        for i in range(len(x)):
            if x[i] in ['1', '0']:
                number += int(x[i]) * 2 ** (-(x.index(x[i], i)+1))
            else:
                print('Input not a binary number')
                break
    return number
  

ch = input('Convert binary to decimal(bd) or decimal to binary(db): ')
num = float(input('Enter the number: '))

if ch == 'bd':
    print(f'Decimal equivalent: {bin_to_dec(num)}')
elif ch == 'db':
    print(f'Binary equivalent: {dec_to_bin(num)}')
