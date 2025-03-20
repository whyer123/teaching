n = int(input('input n:'))
if n <= 0:
    print('invalid')
else:
    k = 1
    while k <= n:
        if n % k == 0:
            print(k, end=' ')
        k += 1

#輸入一個數字n
#判斷這個數字是否為正數
#從1開始嘗試到n 如果整除就印出來