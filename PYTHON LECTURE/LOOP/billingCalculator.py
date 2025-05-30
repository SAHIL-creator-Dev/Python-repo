sum = 0
while True:
    item_price = int(input("Enter price : "))
    if item_price!=0:
        sum = sum+item_price
    elif item_price==0:
        print(f"total_amt = {sum}")
