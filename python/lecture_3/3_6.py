n = int(input("請輸入菱形大小"))

for i in range(n) :
    for j in range(n-1-i) :
        print(" ",end="")
    print("/",end="")
    for j in range(2*i) :
        print(" ",end="")
    print("\\")


# /\
#/  \
#\  /
# \/
