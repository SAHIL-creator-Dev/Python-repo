food_sum = 0
electronics_sum = 0
cloth_sum = 0
while True:
    p_type= input("Enter product type :\n1. Food\n2. Electronics\n3. Cloth \n4. Exit\nChoice : ")
    if p_type=='1':
        while True:
            item_name = input("Enter Food name : ")
            item_price = input("Enter Food price : ")
            if item_price.isnumeric():
                item_price=float(item_price)
                print(f"{item_name} : {item_price}")
                food_sum = food_sum+item_price
                gst = food_sum*28/100
                print("--If all food items have been entered, Enter 'none' in food name and food price--")
            elif item_price.upper()=='NONE':
                print(f"----> Total cost of Food (with gst : {gst} (28%)) = {food_sum+gst}\n")
                break
            else:
                print("-----Please Enter valid price-----")
    elif p_type=='2':
        while True:
            item_name = input("Enter Electronic item name : ")
            item_price = input("Enter Electronic item price : ")
            if item_price.isnumeric():
                item_price = float(item_price)
                print(f"{item_name} : {item_price}")
                electronics_sum = electronics_sum+item_price
                gst = electronics_sum*27/100
                print("--If all Electronic items have been entered, Enter 'none' in Electronic item name and price--")
            elif item_price.upper()=='NONE':
                print(f"----> total cost of Electronics items (with gst : {gst} (27%)) = {electronics_sum+gst}\n")
                break
            else:
                print("-----Please Enter valid price-----")
    elif p_type=='3':
        while True:
            item_name = input("Enter cloth name : ")
            item_price = input("Enter cloth price : ")
            if item_price.isnumeric():
                item_price = float(item_price)
                print(f"{item_name} : {item_price}")
                cloth_sum = cloth_sum+item_price
                gst = cloth_sum*12/100
                print("--If all cloths have been entered, Enter 'none' in cloth name and cloth price--")
            elif item_price.upper()=='NONE':
                print(f"total cost of cloths (with gst : {gst} (12%)) = {cloth_sum+gst}\n")
                break
            else:
                print("-----Please Enter valid price-----")
    elif p_type=='4':
        print(f"total amount = {food_sum+electronics_sum+cloth_sum}")
        print("-----Thank You-----")
        break
    else:
        print("---------Please Enter valid product type!--------------\n")
        continue