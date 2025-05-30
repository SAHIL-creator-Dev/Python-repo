sub_1 = int(input("Enter first sub marks : "))
sub_2 = int(input("Enter second sub marks : "))
sub_3 = int(input("Enter third sub marks : "))

avg = (sub_1+sub_2+sub_3)/3

if(avg>=40 and sub_1>=33 and sub_2>=33 and sub_3>=33):
    print("You are pass!")
else:
    print("you are fail!")