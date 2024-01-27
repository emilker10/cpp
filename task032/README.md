# Задание с leetcode.com
## 66. Plus One

---

You are given a **large integer** represented as an integer array *digits*, where each *digits[i]* is the *i<sup>th</sup>* digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading *0*'s.

Increment the large integer by one and return the *resulting array of digits*.

---

***Example 1:***</br>
**Input:** digits = [1,2,3]</br>
**Output:** [1,2,4]</br>
**Explanation:** The array represents the integer 123.</br>
Incrementing by one gives 123 + 1 = 124.</br>
Thus, the result should be [1,2,4].</br>

---

***Example 2:***</br>
**Input:** digits = [4,3,2,1]</br>
**Output:** [4,3,2,2]</br>
**Explanation:** The array represents the integer 4321.</br>
Incrementing by one gives 4321 + 1 = 4322.</br>
Thus, the result should be [4,3,2,2].</br>

---

***Example 3:***</br>
**Input:** digits = [9]</br>
**Output:** [1,0]</br>
**Explanation:** The array represents the integer 9.</br>
Incrementing by one gives 9 + 1 = 10.</br>
Thus, the result should be [1,0].</br>

---

***Constraints:***</br>
- 1 <= digits.length <= 100</br>
- 0 <= digits[i] <= 9</br>
- digits does not contain any leading 0's.</br>
  
---

## Перевод

---

Дано большое целое число, представленное в виде массива целых чисел *digits*, каждое *digits[i]* из которых является цифрой целого числа. Цифры упорядочены от наиболее значимого к наименее значимому, слева направо. Большое целое число не содержит ведущих символов нулей.

Увеличьте большое целое число на единицу и верните *результирующий массив цифр*.