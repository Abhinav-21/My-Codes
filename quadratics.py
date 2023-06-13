import math as m
q = input('Do you want to obtain roots of entered equation (r) or want to obtain equation from roots (e) (r/e) :' )
if q == 'e' or q == 'E':
    i = eval(input('Enter first root :'))
    j = eval(input('Enter second root :'))
    if i.imag == 0:
        i = i.real
        if i%1 == 0:
            i = int(i)
        else:
            pass
    else:
        pass
    if j.imag == 0:
        j = j.real
        if j%1 == 0:
            j = int(j)
        else:
            pass
    else:
        pass
    p = i+j
    q = i*j
    if p.imag == 0:
        p = p.real
        if p%1 == 0:
            p = int(p)
        else:
            pass
    if q.imag == 0:
        q = q.real
        if q%1 == 0:
            q = int(q)
        else:
            pass
    if type(i) != complex or type(j) != complex:
        if p > 0 and q > 0:
            print('The required equation is :f(x) = n(x^2 + ',p,'x + ',q,') ,where n is a real number.',sep='')
        elif p < 0 and q > 0:
            print('The required equation is :f(x) = n(x^2 - ',m.fabs(p),'x + ',q,') ,where n is a real number.',sep='')
        elif p > 0 and q < 0:
            print('The required equation is :f(x) = n(x^2 + ',p,' x - ',m.fabs(q),') ,where n is a real number.',sep='')
        elif p < 0 and q < 0:
            print('The required equation is :f(x) = n(x^2 - ',m.fabs(p),'x - ',m.fabs(q),') ,where n is a real number.',sep='')
        elif p == 0 and q > 0:
            print('The required equation is :f(x) = n(x^2 + ',p,') ,where n is a real number.',sep='')
        elif p == 0 and q < 0:
            print('The required equation is :f(x) = n(x^2 - ',m.fabs(q),') ,where n is a real number.',sep='')
        elif p < 0 and q == 0:
            print('The required equation is :f(x) = n(x^2 - ',m.fabs(p),'x) ,where n is a real number.',sep='')
        elif p > 0 and q == 0:
            print('The required equation is :f(x) = n(x^2 + ',q,'x) ,where n is a real number.',sep='')
        elif p == 0 and q == 0:
            print('The required equation is :f(x) = n(x^2) ,where n is a real number.')
        else:
            print('invalid input!')
    elif type(i) == complex or type(j) == complex:
        if p == 0:
            print('The required equation is :f(x) = n(x^2 + ',q,') ,where n is a real number.',sep='')
        if q == 0:
            print('The required equation is :f(x) = n(x^2 + ',p,'x) ,where n is a real number.',sep='')
elif q=='r' or q=='R':
    a=complex(input('Enter the coefficient of x^2, [a] :'))
    b=complex(input('Enter the coefficient of x, [b] :'))
    c=complex(input('Enter the constant, [c] :'))
    if a.imag == 0:
        a = int(a.real)
    else:
        pass
    if b.imag == 0:
        b = int(b.real)
    else:
        pass
    if c.imag == 0:
        c = int(c.real)   
    else:
        pass
    if a!=0  and type(a) == complex:
        if type(b) == complex or type(c) == complex:
            if c.imag == 0:
                if type(b) == complex and c.real < 0:
                    print('The required equation is :f(x) = ',a,'x^2 + ',(b),' x - ',m.fabs(c.real),sep='')
                elif type(b) == complex and c.real > 0:
                    print('The required equation is :f(x) = ',a,'x^2 + ',b,'x + ',m.fabs(c.real),sep='')
                else:
                    print('Wrong Input')
            elif b.imag == 0:   
                if b.real < 0 and type(c) == complex:
                    print('The required equation is :f(x) = ',a,'x^2 - ',(m.fabs(b.real)),'x + ',(c),sep='')
                elif b.real > 0 and type(c) == complex:
                    print('The required equation is :f(x) = ',a,'x^2 + ',b.real,'x + ',c,sep='')
                else:
                    print('Wrong Input')
            elif type(b) == complex and type(c) == complex:
                print('The required equation is :f(x) = ',a,'x^2 - ',(m.fabs(b)),'x + ',(c),sep='')
            else:
                print('Wrong Input')
        elif type(b) != complex and type(c) != complex:
            if b > 0 and c > 0:
                print('The required equation is :f(x) = ',a,'x^2 + ',b,'x + ',c,sep='')
            elif b < 0 and c > 0:
                print('The required equation is :f(x) = ',a,'x^2 - ',(m.fabs(b)),'x + ',(c),sep='')
            elif b > 0 and c < 0:
                print('The required equation is :f(x) = ',a,'x^2 + ',(b),' x - ',m.fabs(c),sep='')
            elif b < 0 and c < 0:
                print('The required equation is :f(x) = ',a,'x^2 - ',(m.fabs(b)),'x - ',m.fabs(c),sep='')
            elif b == 0 and c > 0:
                print('The required equation is :f(x) = ',a,'x^2 + ',(c),sep='')
            elif b == 0 and c < 0:
                print('The required equation is :f(x) = ',a,'x^2 - ',m.fabs(c),sep='')
            elif b < 0 and c == 0:
                print('The required equation is :f(x) = ',a,'x^2 - ',m.fabs(b),'x',sep='')
            elif b > 0 and c == 0:
                print('The required equation is :f(x) = ',a,'x^2 + ',(b),'x',sep='')
            elif b == 0 and c == 0:
                print('The required equation is :f(x) = ',a,'x^2)',sep='')
        else:
            print('invalid input!')
        q=str(input('Do you want the solutions of this equation? (y/n) :'))
        if q=='y' or q=='Y':
            u = (-b+(b*b-4*a*c)**(1/2))/2*a
            v = (-b-(b*b-4*a*c)**(1/2))/2*a
            if type(u) == int or type(u) == float:
                if u%1 == 0:
                    u = int(u)
                else:
                    pass
            if type(v) == int or type(v) == float:    
                if v%1 == 0:
                    v = int(v)
                else:
                    pass
            print('The solutions of this equation are,',u,',',v)
            print('Thank you!')
        elif q=='n' or q=='N':
            print('Thank you!')
        else:
            print('Sorry! wrong input.')
    elif a!=0  and type(a) != complex:
        if type(b) == complex or type(c) == complex:
            if c.imag == 0:
                if c.real < 0:
                    print('The required equation is :f(x) = ',a.real,'x^2 + ',(b),' x - ',m.fabs(c.real),sep='')
                if c.real > 0:
                    print('The required equation is :f(x) = ',a.real,'x^2 + ',b,'x + ',c.real,sep='')
                else:
                    print('Wrong Input')    
            elif b.imag == 0:   
                if b.real < 0:
                    print('The required equation is :f(x) = ',a.real,'x^2 - ',(m.fabs(b.real)),'x + ',(c),sep='')
                elif b.real > 0:
                    print('The required equation is :f(x) = ',a.real,'x^2 + ',b.real,'x + ',c,sep='')
                else:
                    print('Wrong Input')
            elif type(b) == complex and type(c) == complex:
                print('The required equation is :f(x) = ',a.real,'x^2 - ',(m.fabs(b)),'x + ',(c),sep='')
            else:
                print('Wrong input')
        elif type(b) != complex and type(c) != complex:
            if b > 0 and c > 0:
                print('The required equation is :f(x) = ',a,'x^2 + ',b,'x + ',c,sep='')
            elif b < 0 and c > 0:
                print('The required equation is :f(x) = ',a,'x^2 - ',(m.fabs(b)),'x + ',(c),sep='')
            elif b > 0 and c < 0:
                print('The required equation is :f(x) = ',a,'x^2 + ',(b),' x - ',m.fabs(c),sep='')
            elif b < 0 and c < 0:
                print('The required equation is :f(x) = ',a,'x^2 - ',(m.fabs(b)),'x - ',m.fabs(c),sep='')
            elif b == 0 and c > 0:
                print('The required equation is :f(x) = ',a,'x^2 + ',(c),sep='')
            elif b == 0 and c < 0:
                print('The required equation is :f(x) = ',a,'x^2 - ',m.fabs(c),sep='')
            elif b < 0 and c == 0:
                print('The required equation is :f(x) = ',a,'x^2 - ',m.fabs(b),'x',sep='')
            elif b > 0 and c == 0:
                print('The required equation is :f(x) = ',a,'x^2 + ',(b),'x',sep='')
            elif b == 0 and c == 0:
                print('The required equation is :f(x) = ',a,'x^2) ')
        else:
            print('invalid input!')
        q=str(input('Do you want the solutions of this equation? (y/n) :'))
        if q=='y' or q=='Y':
            u = (-b+(b*b-4*a*c)**(1/2))/2*a
            v = (-b-(b*b-4*a*c)**(1/2))/2*a
            if type(u) == int or type(u) == float:
                if u%1 == 0:
                    u = int(u)
                else:
                    pass
            if type(v) == int or type(v) == float:    
                if v%1 == 0:
                    v = int(v)
                else:
                    pass
            print('The solutions of this equation are,',u,',',v)
            print('Thank you!')
        elif q=='n' or q=='N':
            print('Thank you!')
        else:
            print('Sorry! wrong input.')
    elif a == 0:
       x = input("a = 0, this is a linear equation, do you want solutions? (y/n) :")
       if x == 'y' or x == 'Y':
           print('Equation :f(x) = ',b,'x + ',c,' has a solution = ',-c/b,sep='')
       else:
           pass
    else:
        print('wrong input')
else:
    print('Invalid input!')
