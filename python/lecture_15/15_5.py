def print_tree( n ) :
    for i in range(n) :
        print(' '*(n-i-1),'*'*(2*i+1),sep='')
    if n < 3 :
        print(' '*(n-1),'|',sep='')
    else :
        for i in range(round(n/4)) :
            print(' '*(n-2),'| |',sep='')
    print("聖誕節快樂！")
    return int((1+(2*n-1))*n/2)



# def print_tree(n):
#     for i in range(1,n+1):
#         print(" "*(n-i),"*"*(2*i-1),sep="")
#     print(" "*(n-2),"| |",sep="")
#         #3層印1空白
#         #4層印2空白
#         #5層印3空白
#     print("聖誕節快樂!")
#     return



while 1 :
    a = int(input("請輸入數的高度(輸入0結束): "))
    if a == 0 : 
        break
    else : 
        c = print_tree(a)
        print(f"總共使用了{c}顆星星")
