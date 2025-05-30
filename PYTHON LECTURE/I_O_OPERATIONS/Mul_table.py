for i in range(1,20):
    for j in range(1,11):
        with open(f"E:\PYTHON\PYTHON LECTURE\STUDENT/file{i}","a") as f:
            f.write(f"{i} * {j} = {i*j}\n")
f.close()