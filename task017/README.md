# Задание с leetcode.com
## 219. Contains Duplicate II

---

Given an integer array *nums* and an integer *k*, return *true* if there are two ***distinct indices*** *i* and *j* in the array such that *nums[i] == nums[j]* and *abs(i - j) <= k*.

---

***Example 1:***</br>
**Input:** nums = [1,2,3,1], k = 3</br>
**Output:** true</br>

---

***Example 2:***</br>
**Input:** nums = [1,0,1,1], k = 1</br>
**Output:** true</br>

---

***Example 3:***</br>
**Input:** nums = [1,2,3,1,2,3], k = 2</br>
**Output:** false</br>

---

***Constraints:***</br>
- 1 <= nums.length <= 10<sup>5</sup></br>
- -10<sup>9</sup> <= nums[i] <= 10<sup>9</sup>
- 0 <= k <= 10<sup>5</sup>

---

## Перевод

---

Дан целочисленный массив *nums* и целое число *k*, верните *true*, если есть ***два различных*** индекса *i* и *j* в массиве такие, что *nums[i] == nums[j]* и *abs(i - j) <= k*.