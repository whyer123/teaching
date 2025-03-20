def celsius_to_fahrenheit(celsius):
    return celsius * 9 / 5 + 32

def fahrenheit_to_celsius(fahrenheit):
    return (fahrenheit - 32) * 5 / 9

# 讓使用者選擇轉換方向
choice = int(input("請選擇轉換方向 (1: 攝氏轉華氏, 2: 華氏轉攝氏): "))

if choice == 1:
    celsius = float(input("請輸入攝氏溫度："))
    fahrenheit = celsius_to_fahrenheit(celsius)
    print(f"{celsius}°C 轉換為華氏溫度是 {fahrenheit:.1f}°F")
elif choice == 2:
    fahrenheit = float(input("請輸入華氏溫度："))
    celsius = fahrenheit_to_celsius(fahrenheit)
    print(f"{fahrenheit}°F 轉換為攝氏溫度是 {celsius:.1f}°C")
else:
    print("無效的選擇，請輸入 1 或 2")