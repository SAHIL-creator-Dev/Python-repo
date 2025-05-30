import os
# creating directory 'OS_Module'
os.mkdir("OS_Module")
# change directory 'OS_Module'
os.chdir("OS_Module")
i = 1
while i<=10:
    os.mkdir(f"folder{i}")
    i+=1