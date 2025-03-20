---
title: Python function 介紹

---

# Python function 介紹

whyer 2024 11/10

## function 是什麼

function 中文叫做函式，可以想像成寫一段可以重複使用的程式

## function 好用的地方 

假設我們要算 $3,5,6$ 的階乘，以前我們可能會寫三個迴圈，像是：
    
```python=
# 計算 3, 5, 6 的階乘，分別用三個迴圈
factorial_3 = 1
for i in range(1, 4):
    factorial_3 *= i

factorial_5 = 1
for i in range(1, 6):
    factorial_5 *= i

factorial_6 = 1
for i in range(1, 7):
    factorial_6 *= i

print(f"3 的階乘：{factorial_3}")
print(f"5 的階乘：{factorial_5}")
print(f"6 的階乘：{factorial_6}")
    
```
但有了function我們可以這樣：
```python=
# 定義一個計算階乘的函式
def factorial(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

# 使用函式計算 3, 5, 6 的階乘
print(f"3 的階乘：{factorial(3)}")
print(f"5 的階乘：{factorial(5)}")
print(f"6 的階乘：{factorial(6)}")
```
這樣我們就不用每次算階乘的時候都寫一次迴圈，而是呼叫我們包裝好的function，這樣雖然功能是一樣的，但閱讀和程式寫起來比較舒服。

    

## 寫一個自己function的方法

在 Python 中，定義一個函式的方法很簡單。可以依照以下步驟：
	1.	使用關鍵字 def 開始定義函式。
	2.	緊接著寫函式名稱（自己取）。
	3.	後面加上小括號 ()，可以在小括號內寫參數名稱。
	4.	接著使用冒號 :，並在下一行開始編寫函式的內容（記得縮排）。
	5.	使用 return 關鍵字返回結果（如果需要）。
    
拿剛剛的程式做舉例
```python=
def fac(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result
```
首先，我們先弄清楚為什麼要fac(n)這個函式，它的用處是當我要算例如5的階乘，fan(5)就會是答案，以程式來說：
```python=
ans = 0#用來存答案
ans = fac(5) #此時ans成功的就變成fac(5)也就是120
```
所以這邊，我們就會希望fac(5)這個東西的值就是120，也就是說fac(n)的值都會是n!。

暸解上面後，我們就來細看剛剛的程式def fac(n)
而以上面的例子，我們想要fac(5)=120，那fac(n)的值是怎麼決定的呢？其實就是你return的值，你return什麼，fac(n)就會變成什麼。

所以我們再來看上面def fac(n)的程式，其實就可以想像成，你在寫一隻小程式，你要把n變成n!並回傳會去，第二到四行就是在做這件事，第五行最後，我們把這個小程式算出來的答案回傳。

接著我們看這段程式：
```python=
def fac(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result
ans = 0
ans = fac(5)
```
其實這就是把剛剛兩個程式合起來，也是平常會遇到的情況，當你執行程式時，程式實際上並不是從第一行開始執行，而是從第6行開始，這個的原因是function只有在他被用到的時候才會跑到，所以執行的順序應該是6->7(呼叫到fac)->12345->7(繼續)。
其中第七行，當你讓ans=fac(5)，電腦一開始不知道fac(5)是多少，他會上去找fac的定義，找到第一行，把n當成5帶入，最後把fac(5)設成return的值。

這裡要特別注意，你可以把function def中想像成跟你其他程式去一個格離的空間，所以function裡的變數，在外面的程式是讀不到的，也就是說：
```python=
def fac(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

print(result)
```
是錯的，我們沒辦法讀取result，result只是我們在function中要算出return值中的輔助變數而已。