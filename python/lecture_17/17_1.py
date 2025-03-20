# 階乘定義: 
# f(0) = 1, f(1) = 1
# f(n) = n*f(n-1)

number = int(input("Enter a number, 我幫你算階乘: "))
ans = 1
while number > 1 :
    ans = ans * number
    number = number - 1
print(f"答案是{ans}")