# write a python program using function to convert celsius to farenheit. Formula 
# (C × 9/5) + 32
def celsius_to_farenheit(c):
    return ((c*9)/5)+32

celsius = float(input("Enter temperature in celsius: "))
print(f"in farenheit : {celsius_to_farenheit(celsius)}")
