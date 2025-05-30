def fun(name,age):
    print(f"name : {name}\nage : {age}")


# write a program using function to find greatest of 3 numbers.
def greatest_num(a,b,c):
    if a>b and a>c:
        return a
    elif b>a and b>c:
        return b
    else:
        return c
