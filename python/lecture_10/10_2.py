file_path = "input.txt"

with open(file_path, 'r') as file:
    content = file.read()
    print("檔案內容如下:")
    print(content)