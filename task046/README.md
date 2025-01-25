# Задание с leetcode.com
## 29. Divide Two Integers

---

Given two integers *dividend* and *divisor*, divide two integers **without** using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return ***the quotient** after dividing dividend by divisor*.

**Note:** Assume we are dealing with an environment that could only store integers within the **32-bit** signed integer range: [−2<sup>31</sup>, 2<sup>31 − 1</sup>]. For this problem, if the quotient is **strictly greater than** 2<sup>31 - 1</sup>, then return 2<sup>31 - 1</sup>, and if the quotient is **strictly less than** -2<sup>31</sup>, then return -2<sup>31</sup>.

---

***Example 1:***</br>

**Input:** dividend = 10, divisor = 3</br>
**Output:** 3</br>
**Explanation:** 
10/3 = 3.33333.. which is truncated to 3.</br>

---

***Example 2:***</br>
**Input:** dividend = 7, divisor = -3</br>
**Output:** -2</br>
**Explanation:** 
7/-3 = -2.33333.. which is truncated to -2.</br>

---

***Constraints:***</br>
- −2<sup>31</sup> <= dividend, divisor <= 2<sup>31 − 1</sup>
- divisor != 0


---

## Перевод

---

Даны два целых числа *dividend* и *divisor*. Разделите два целых числа **без** использования умножения, деления и оператора mod.

Целочисленное деление должно округляться в сторону нуля, что означает потерю дробной части. Например, 8.345 будет округлено до 8, а -2.7335б удет округлено до -2.

Верните **частное** после деления *dividend* на *divisor* .

**Примечание:** Предположим, что мы имеем дело со средой, которая может хранить только целые числа в диапазоне 32-битных знаковых целых чисел: [−2<sup>31</sup>, 2<sup>31 − 1</sup>]. Для этой задачи, если частное **строго больше** 2<sup>31 - 1</sup>, то возвращаем 2<sup>31 - 1</sup>, а если частное **строго меньше** -2<sup>31</sup>, то возвращаем -2<sup>31</sup>.