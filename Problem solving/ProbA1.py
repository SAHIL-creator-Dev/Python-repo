# find average of n numbers
no = int(input("Enter the number of elements: "))
# l = []
# for i in range(no):
#     l.append(int(input(f"Enter number{i+1}: ")))
# avg = sum(l) / no
# print(f"The average of the numbers is: {avg}")
sum =0
for i in range(no):
    num = int(input(f"Enter number {i + 1}: "))
    sum += num
avg = sum / no
print(f"The average of the numbers is: {avg}")
    