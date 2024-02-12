# Задание с leetcode.com
## 75. Sort Colors

---

Given an array *nums* with *n* objects colored red, white, or blue, sort them [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers *0*, *1*, and *2* to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

---

***Example 1:***</br>
**Input:** nums = [2,0,2,1,1,0]</br>
**Output:** [0,0,1,1,2,2]</br>

---

***Example 2:***</br>
**Input:** nums = [2,0,1]</br>
**Output:** [0,1,2]</br>

---

***Constraints:***</br>
- n == nums.length</br>
- 1 <= n <= 300</br>
- nums[i] is either 0, 1, or 2.</br>

---

## Перевод

---

Дан массив *nums* с *n* объектами красного, белого или синего цвета. Отсортируйте их с помощью [алгоритма на месте](https://translated.turbopages.org/proxy_u/en-ru.ru.071897a4-65ca7123-babf6d24-74722d776562/https/en.wikipedia.org/wiki/In-place_algorithm) так, чтобы объекты одного цвета располагались рядом, а цвета располагались в порядке красного, белого и синего.

Мы будем использовать целые числа 0, 1 и 2 для обозначения красного, белого и синего цветов соответственно.

Решите задачу, не используя функцию сортировки библиотеки.