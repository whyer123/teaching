while True:
    try:
        n = int(input())

        lst = []
        for _ in range(n) :
            lst.append(int(input()))
        lst.sort()

        a = 0
        a2 = 0
        count = 0
        many = 0

        size = len(lst)
        #0123
        if size % 2 == 1 :
            many = 1
            a = lst[(size-1)//2]
            for i in lst :
                if i == a :
                    count += 1
        else :
            if lst[size//2] == lst[size//2-1] :
                many = 1
                a = lst[size//2]
                for i in lst :
                    if i == a :
                        count += 1
            else :
                a = lst[size//2-1]
                b = lst[size//2]
                if a != b :
                    many = b-a+1
                else :
                    many = 1
                for i in lst :
                    if i == a or i == b :
                        count += 1
        print(f"{a} {count} {many}")
               
    except:
        break

# 1 2 9 10 
# 3 2+1+6+7 = 16
# 5 4+3+4+5 = 16