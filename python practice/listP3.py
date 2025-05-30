# WAP to check if a list contains a palindrom of elements.

list = [1, 2, 1, 1]
copy_list = list.copy()
copy_list.reverse()
if list == copy_list :
    print("palindrom")
else :
    print("not palindrom")