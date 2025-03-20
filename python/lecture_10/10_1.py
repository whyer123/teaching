file_path = "input.txt"

try:
    # 嘗試打開檔案
    with open(file_path, 'r') as file:
        content = file.read()
        print("檔案內容如下:")
        print(content)
except FileNotFoundError:
    # 如果檔案不存在
    print(f"錯誤: 檔案 '{file_path}' 找不到！")