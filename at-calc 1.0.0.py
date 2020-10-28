#At-Calculator Version 1.0.0

import math

a = "fat"
while a == "fat":
    a == "on"
    print("AT-Calculator Version 1.0.0\nWrite first number.")
    x = float(input())
    print("Write second number.")
    y = float(input())
    print("Write which operation of those numbers you want to be performed\n(note that for mathematical operations which do not follow commutative law take it first to second number)\nor type IDK.")
    z = input()
    if z == "IDK":
        print("Addition\nSubtraction\nMultiplication\nDivision\nHypotenuse\nPower\nRoot\nLogarithm\nEnter one to reenter.")
        r = input()
        if r == "1":
            a = "fat"
        else:
            qan = "qut"
            while qan == "qut":
                print("Wrong Input!!!\nEnter 1 to reenter.")
                g = input()
                if g == 1:
                    qan = "and"
                else:
                    print("Wrong input again!!!\n")
                    qan = "qut"
    elif z == "Addition":
        print(x + y)
    elif z == "Subtraction":
        print(x - y)
    elif z == "Multiplication":
        print(x * y)
    elif z == "Division":
        print(x / y)
    elif z == "Power":
        print(x ** y)
    elif z == "Hypotenuse":
        print(math.hypot(x, y))
    elif z == "Root":
        q = 1 / y
        print(x ** q)
    elif z == "Logarithm":
        print(math.log(x, y))
    else:
        znat = "nat"
        while znat == "nat":
            print("Wrong Input\nEnter 1 to reenter.")
            sea = input()
            if sea == "1":
                znat = "q"
            else:
                print("Wrong input again!!!")
                znat == "nat"