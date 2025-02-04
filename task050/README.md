# Задание с leetcode.com
## 164. Maximum Gap

---

Given an integer array *nums*, return the *maximum difference between two successive elements in its sorted form*. If the array contains less than two elements, return *0*.

You must write an algorithm that runs in linear time and uses linear extra space.

---

***Example 1:***</br>
**Input:** nums = [3,6,9,1]</br>
**Output:** 3</br>
**Explanation:** The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.</br>

---

***Example 2:***</br>
**Input:** nums = [10]</br>
**Output:** 0</br>
**Explanation:** The array contains less than 2 elements, therefore return 0.</br>

---

***Constraints:***</br>
- 1 <= nums.length <= 10<sup>5</sup></br>
- 0 <= nums[i] <= 10<sup>9</sup></br>
  
---

## Перевод

---

Для заданного целочисленного массива *nums* отсортировать и вернуть *максимальную разницу между двумя последовательными элементами*. Если массив содержит менее двух элементов, вернуть *0*.

Необходимо написать алгоритм, который выполняется за линейное время и использует линейное дополнительное пространство.