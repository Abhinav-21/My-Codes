p=float(input('Enter the principal amount :'))
r=float(input('Enter the interest rate :'))
q=str(input('What would you like to calculate? [interest(i) or amount(a)] :'))
if q=='a' or q=='A':
    w=str(input('What amount you want to calculate?[simple(s) or compound(c)]  :'))
    if w=='s' or w=='S':
     t=float(input('Enter the time period :'))
     print('The amount is',p+(p*r*t)/100)
    elif w=='c' or w=='C':
     n=float(input('Enter the number of times the interest is to be applied per unit time(t) :'))   
     print('The amount is',p+p*(1+r/n)**n)
    else:
     print('invalid input!')
elif q=='i' or q=='I':
      w=str(input('What interest you want to calculate?[simple(s) or compound(c)]  :'))
      if w=='s' or w=='S':
       t=float(input('Enter the time period :'))
       print('The interest is',(p*r*t)/100)
      elif w=='c' or w=='C':
       n=float(input('Enter the number of times the interest is to be applied per unit time(t) :'))
       print('The interest is',p*(1+r/n)**n)
      else:
       print('invalid input!')
else:
     print('invalid input!')
    
    
    
