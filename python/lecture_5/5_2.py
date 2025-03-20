# 創建一個空的矩陣（列表的列表）
matrix = []

# 添加第一行
matrix.append([])  # 添加一個空行
matrix[0].append(1)  # 第一行的第一個元素
matrix[0].append(2)  # 第一行的第二個元素
matrix[0].append(3)  # 第一行的第三個元素

# 添加第二行
matrix.append([])  # 添加一個空行
matrix[1].append(4)  # 第二行的第一個元素
matrix[1].append(5)  # 第二行的第二個元素
matrix[1].append(6)  # 第二行的第三個元素

# 輸出矩陣
print("矩陣:")
for row in matrix:
    print(row)