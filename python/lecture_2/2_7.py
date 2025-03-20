n = int(input("請輸入菱形的大小: "))

# 上半部分
for i in range(n):
    print(" " * (n - 1 - i) + "/" + " " * (2 * i) + "\\")

# 下半部分
for i in range(n):
    print(" " * (i) + "\\" + " " * (2 * (n - i - 1)) + "/")