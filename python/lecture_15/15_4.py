def my_print( a , b ) :

    for i in range(a) :
        for j in range(b) :
            print('*',end='')
        print()

    return 




a = int(input("請輸入長: "))
b = int(input("請輸入高: "))

my_print(a,b)