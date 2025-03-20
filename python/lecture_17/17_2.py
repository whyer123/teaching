# f(0) = 1, f(1) = 1
# f(n) = n*f(n-1)
def f(n) :

    if n<0 :
        return -1
    #初始條件
    if n==0 or n==1:
        return 1
    #遞迴關係
    else :
        return n*f(n-1)

#main()
number = int(input("Enter a number, 我幫你算階乘: "))
print(f"答案是{f(number)}")