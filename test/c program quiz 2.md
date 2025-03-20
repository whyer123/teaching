---
title: c program quiz 2

---

# c program quiz 2

whyer 2025-03-19

## 說明
總共兩題，盡量完成，但要確保程式無error，完成後程式碼貼到hackmd後繳交。

## 第1題

請實作一個程式，讓使用者輸入一個數字n後，從0開始，相隔0.01，一直印到數字n，如果無法剛好印到n，先將n四捨五入到小數第二位，再列印到該數。
範例：
    
    #1
    Please enter a number: 0.03
    0.01
    0.02
    0.03
    
    #2
    Please enter a number: 0.035
    0.01
    0.02
    0.03
    0.04
    
## 第2題

在這題中，請寫一個骰子的遊戲，能讓我和電腦玩骰骰子，看誰點數比較大，以分出勝負。分為兩個部分實作：

### 2.1
請實作一個函式`dice_roll`，能公正的骰出骰子(隨機生成整數1-6)
```c
int dice_roll();
```

### 2.2

請寫一個遊戲，利用剛剛實作的`dice_roll`，詳細規則如下：
1. 玩家輸入 `1` 開始遊戲，輸入 `0` 退出遊戲。
2.  每輪：
   - **玩家** 擲一次骰子 (`dice_roll()`)
   - **電腦** 也擲一次骰子 (`dice_roll()`)
   - 顯示雙方擲出的點數
   - **比較點數大小**：
     - 玩家點數 **>** 電腦點數 → `"You win!"`
     - 玩家點數 **<** 電腦點數 → `"You lose!"`
     - 玩家點數 **==** 電腦點數 → `"It's a draw!"`
3. 每個遊戲中間用`------------------` 隔開
4. 遊戲結束時，輸出 `"Bye!"` 並結束程式。
    
## 

範例：

    (1) to play, 
    (0) to exit.
    Please Enter...
    1
    your rolled: 5
    computer rolled : 6
    You lose!
    ------------------
    (1) to play, 
    (0) to exit.
    Please Enter...
    1
    your rolled: 3
    computer rolled : 1
    You win!
    ------------------
    (1) to play, 
    (0) to exit.
    Please Enter...
    0
    Bye!

    


    

    