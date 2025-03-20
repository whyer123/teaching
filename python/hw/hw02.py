sec = input("請輸入秒數: ")
sec = int(sec)

day = 0
hour = 0
min = 0

day = sec // 86400
sec = sec % 86400

hour = sec // 3600
sec = sec % 3600

min = sec // 60
sec = sec % 60

print(f"{day} day(s), {hour} hour(s), {min} minute(s), and {sec} seconds(s)")