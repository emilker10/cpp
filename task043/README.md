# Задание с leetcode.com
## 1630. Arithmetic Subarrays

---

A sequence of numbers is called **arithmetic** if it consists of at least two elements, and the difference between every two consecutive elements is the same. More formally, a sequence *s* is arithmetic if and only if *s[i+1] - s[i] == s[1] - s[0]* for all valid *i*.

For example, these are **arithmetic** sequences:

>1, 3, 5, 7, 9</br>
7, 7, 7, 7</br>
3, -1, -5, -9</br>

The following sequence is not **arithmetic**:</br>

>1, 1, 2, 5, 7</br>

You are given an array of *n* integers, *nums*, and two arrays of *m* integers each, *l* and *r*, representing the *m* range queries, where the *i<sup>th</sup>* query is the range *[l[i], r[i]]*. All the arrays are **0-indexed**.

Return a *list of boolean elements answer, where answer[i] is true if the subarray nums[l[i]], nums[l[i]+1], ... , nums[r[i]] can be **rearranged** to form an **arithmetic** sequence, and false otherwise*.

---

***Example 1:***</br>
**Input:** nums = [4,6,5,9,3,7], l = [0,0,2], r = [2,3,5]</br>
**Output:** [true,false,true]</br>
**Explanation:** </br>
In the 0th query, the subarray is [4,6,5]. This can be rearranged as [6,5,4], which is an arithmetic sequence.</br>
In the 1st query, the subarray is [4,6,5,9]. This cannot be rearranged as an arithmetic sequence.</br>
In the 2nd query, the subarray is [5,9,3,7]. This can be rearranged as [3,5,7,9], which is an arithmetic sequence.</br>

---

***Example 2:***</br>
**Input:** nums = [-12,-9,-3,-12,-6,15,20,-25,-20,-15,-10], l = [0,1,6,4,8,7], r = [4,4,9,7,9,10]</br>
**Output:** [false,true,false,false,true,true]</br>

---

***Constraints:***</br>
- n == nums.length
- m == l.length
- m == r.length
- 2 <= n <= 500
- 1 <= m <= 500
- 0 <= l[i] < r[i] < n
- 10<sup>5</sup> <= nums[i] <= 10<sup>5</sup>

---

## Перевод

---

Последовательность чисел называется **арифметической**, если она состоит как минимум из двух элементов и разница между всеми двумя последовательными элементами одинакова. Более формально, последовательность *s* является арифметической тогда и только тогда, когда *s[i+1] - s[i] == s[1] - s[0]* для всех допустимых значений *i*.

Например, это *арифметические* последовательности:

>1, 3, 5, 7, 9</br>
7, 7, 7, 7</br>
3, -1, -5, -9</br>

Следующая последовательность не является **арифметической**:

>1, 1, 2, 5, 7</br>

Дан массив *nums* из *n* целых чисел, и по два массива длинной *m* целых чисел каждый - *l* и *r*, представляющие *m* запросы диапазона, где *i-ым* запросом является диапазон *[l[i], r[i]]*. Все массивы имеют **нулевой индекс**.

Верните *список boolean элементов answer, где в answer[i] заполняется true, если подмассив nums[l[i]], nums[l[i]+1], ... , nums[r[i]] можно **переупорядочить** так, чтобы сформировать **арифметическую** последовательность, и false в противном случае*.