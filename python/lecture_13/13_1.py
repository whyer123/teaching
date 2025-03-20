def print_triangle( n ) :

    m = 2*(n-1)
    
    for i in range(n) :
        print( ' '*(m-i*2) , '*' , sep="" , end="" )
        for j in range(i) :
            print( ' '*3 , '*' , sep="" , end=""  )
        print()

    return

while 1 :
    n = int(input("請輸入層數: "))
    if n == 0 : break
    else : print_triangle(n)


#    *  
#  *   *
#*   *   *
