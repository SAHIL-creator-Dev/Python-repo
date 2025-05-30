def rec(list,idx):
    if idx<0:
        return
    else:
        rec(list,idx-1)
    print(list[idx])
list = [45,78,89,12]
rec(list,len(list)-1)