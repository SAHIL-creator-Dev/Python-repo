l = ["12","5","6","8","9"]
l2= [int(i) for i in l if int(i)%2==0]
# l2 = [int(i) if int(i)%2==0 else i for i in l]

print(l2)