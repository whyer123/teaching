n = int(input())

check = 0

for i in range(1,n) :
    for j in range(i,n) :
        if i*i+j*j == n :
            print("為兩數平方和")
            check = 1
            break
#回圈結束後
if check == 0 :
    print("不兩數平方和")










check = 0
#if 遇到偶數 check=1

1 3 2 5 7 9 

#if chekc=0 印沒有偶數