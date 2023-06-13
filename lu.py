for b in range(7):
    for a in range(7):
        if (b==0 and a>=0 and a<5) or (b==6 and a>=0 and a<5) or (a==2 and b>=0 and b<6) :
            print('I',end=' ')
        else:
            print(' ',end=' ')
    print()
print()    
print()    
print()
for b in range(7):
    for a in range(7):
        if (b==6 and a>=0 and a<5) or (a==0 and b>=0 and b<6) :
            print('L',end=' ')
        else:
            print(' ',end=' ')
    print()
print()
for b in range(6):
    for a in range(7):
        if (b==0 and a>0 and a<6 and a!=3) or b==1 or b==2 or (b==3 and a>0 and a<6) or (b==4 and a>1 and a<5) or (b==5 and a==3):
            print('♥',end=' ')
        else:
            print(' ',end=' ')
    print()   
print()
for a in range(5):
    for b in range(9):
        if (a+b==8 and b>3 )or (a-b==0 and b<=4) :
            print('V',end='')
        else:
            print(' ',end='')
    print()
print()
for a in range(7):
    for b in range(5):
        if b==0 or a==0 or a==3 or a==6 :
            print('E',end=' ')
        else:
            print(' ',end=' ')
    print()
print()
print()
print()
for a in range(7):
    for b in range(9):
        if (a+b==8 and b>3 )or (a-b==0 and b<=4) or (b==4 and a>3) :
            print('Y',end='')
        else:
            print(' ',end='')
    print()
print()
for a in range(7):
    for b in range(5):
        if (a==0 and b>0 and b<4)or (a==6 and b>0 and b<4) or (b==0 and a>0 and a<6) or (b==4 and a>0 and a<6) :
               print('O',end=' ')
        else:
            print(' ',end=' ')
    print()
print()
for a in range(6):
    for b in range(5):
        if (a==5 and b>0 and b<4) or (b==0 and a>=0 and a<5) or (b==4 and a>=0 and a<5) :
               print('U',end=' ')
        else:
            print(' ',end=' ')
    print()
print()
print('♥SAKSHI♥')

