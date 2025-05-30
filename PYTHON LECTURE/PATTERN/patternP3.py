'''
****
*  *
*  *
****
'''

r = int(input("Enter no of rows: "))
c = int(input("Enter no of column: "))
for i in range(1,r+1):
    for j in range(1,c+1):
        if i==1 or j==1 or i==r or j==c:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()
