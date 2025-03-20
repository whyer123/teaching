number = input("請輸入一個五位數: ")
number = int(number)

a = number // 10000
b = number % 10000 // 1000
c = number % 10000 % 1000 // 100
d = number % 10000 % 1000 % 100 // 10
e = number % 10000 % 1000 % 100 % 10

print(a,b,c,d,e,sep="   ")
