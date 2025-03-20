while True:
    try:
        my_dict = {}
        index = 0

        # 建立字元對應數值
        for i in range(ord("0"), ord("9") + 1):
            my_dict[chr(i)] = index
            index += 1

        for j in range(ord("A"), ord("Z") + 1):
            my_dict[chr(j)] = index
            index += 1

        for k in range(ord("a"), ord("z") + 1):
            my_dict[chr(k)] = index
            index += 1

        s = input()

        # **用一般的 for 迴圈找 max_number**
        max_number = -1
        for i in s:
            if i in my_dict:
                if my_dict[i] > max_number:
                    max_number = my_dict[i]
        max_number += 1  # 進制必須大於最大字元值

        # **用一般的 for 迴圈計算 sumx**
        sumx = 0
        for i in s:
            if i in my_dict:
                sumx += my_dict[i]

        if max_number <= 1:
            print(2)
        else:
            while max_number <= 62:
                if sumx % (max_number - 1) == 0:
                    print(max_number)
                    break
                max_number += 1
            else:
                print("such number is impossible!")

    except EOFError:
        break