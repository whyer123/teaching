try:
    while True:
        # 等待用戶輸入
        user_input = input()
        # 輸出用戶的輸入
        print(f"你輸入的是: {user_input}")
except EOFError:
    # 當用戶輸入 EOF 時結束
    print("輸入結束，程式退出")

