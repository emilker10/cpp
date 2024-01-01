# Задание с leetcode.com
## 374. Guess Number Higher or Lower

---

We are playing the Guess Game. The game is as follows:

I pick a number from 1 to *n*. You have to guess which number I picked.

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API *int guess(int num)*, which returns three possible results:

- *-1*: Your guess is higher than the number I picked (i.e. *num > pick*).</br>
- *1*: Your guess is lower than the number I picked (i.e. *num < pick*).</br>
- *0*: your guess is equal to the number I picked (i.e. *num == pick*).</br>
  
Return the number that I picked.

---

***Example 1:***</br>
**Input:** n = 10, pick = 6</br>
**Output:** 6</br>

---

***Example 2:***</br>
**Input:** n = 1, pick = 1</br>
**Output:** 1</br>

---

***Example 3:***</br>
**Input:** n = 2, pick = 1</br>
**Output:** 1</br>

---

***Constraints:***</br>
- 1 <= n <= 2<sup>31</sup>-1</br>
- 1 <= pick <= n</br>

---

## Перевод

---

Мы играем в игру «Угадай». Игра заключается в следующем:

Я загадываю номер от 1до *n*. Вы должны угадать, какой номер я загадал.

Каждый раз, когда вы угадаете неправильно, я скажу вам, больше или меньше загаданное мной число, чем ваше предположение.

Вы вызываете предопределенный API *int guess(int num)*, который возвращает три возможных результата:

- *-1*: Ваша догадка выше, чем загаданное мной число (т. е. *num > pick*).</br>
- *1*: Ваша догадка меньше, чем загаданное мной число (т. е. *num < pick*).</br>
- *0*: ваша догадка равна числу, которое я загадал (т. е. *num == pick*).</br>
  
Верните число, который я загадал.