# 製作一個計算機
# 支援加減乘除
# 先讓使用者輸入1-4
##
# 1:加法
# 2:減法
# 3:乘法
# 4:除法
##
# 再請使用者輸入兩個數字 並輸出對應的答案

import sys

print("歡迎使用小小計算機，請輸入1-4")
print("1:加法")
print("2:減法")
print("3:乘法")
print("4:除法")
choice = int(input())

if choice > 4 or choice < 1:
    print("選擇錯誤")
    sys.exit()  # 終止程式

# 接著讓使用者輸入兩個數字
num1 = float(input("請輸入第一個數字: "))
num2 = float(input("請輸入第二個數字: "))

if choice == 1:
    print(f"結果是: {num1 + num2}")
elif choice == 2:
    print(f"結果是: {num1 - num2}")
elif choice == 3:
    print(f"結果是: {num1 * num2}")
elif choice == 4:
    if num2 == 0:
        print("除數不能為0")
    else:
        print(f"結果是: {num1 / num2}")
