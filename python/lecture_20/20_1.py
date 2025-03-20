while True:
    try:
        n = int(input())
        break

        lst = []
        for i in range(n):
            lst.append(int(input()))

        lst.sort()

        if n % 2 == 1:
            middle = lst[n // 2]
            count_middle = lst.count(middle)
            print(f"{middle} {count_middle} 1")
        else:
            a = lst[n // 2 - 1]
            b = lst[n // 2]
            middlex = (a + b) / 2

            if middlex.is_integer():
                print(f"{middlex} {lst.count(middlex)} 1")
            else:
                print(f"{middlex} 0 1")

    except EOFError:
        break