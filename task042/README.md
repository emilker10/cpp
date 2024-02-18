# Задание с leetcode.com
## 2149. Rearrange Array Elements by Sign

---

You are given a **0-indexed** integer array *nums* of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

1. Every **consecutive pair** of integers have **opposite signs**.
2. For all integers with the same sign, the order in which they were present in *nums* is **preserved**.
3. he rearranged array begins with a positive integer.

Return *the modified array after rearranging the elements to satisfy the aforementioned conditions*.

---

***Example 1:***</br>
**Input:** nums = [3,1,-2,-5,2,-4]</br>
**Output:** [3,-2,1,-5,2,-4]</br>
**Explanation:** The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].</br>
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].</br>
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions. </br>

---

***Example 2:***</br>
**Input:** nums = [-1,1]</br>
**Output:** [1,-1]</br>
**Explanation:** 1 is the only positive integer and -1 the only negative integer in nums.</br>
So nums is rearranged to [1,-1]. </br>

---

***Constraints:***</br>
- 1 <= nums.length <= 2*10<sup>5</sup></br>
- nums.length is **even**</br>
- 0 <= |nums[i]| <= 10<sup>5</sup></br>
- nums consists of **equal** number of positive and negative integers.</br>

It is not required to do the modifications in-place.
  
---

## Перевод

---

Дан целочисленный массив nums **четной** длины с **нулевым индексом**, состоящий из **равного** количества положительных и отрицательных целых чисел.

Вернуть массив чисел так, чтобы он соответствовал заданным условиям:

1. Каждая **последовательная пара** целых чисел имеет **противоположные знаки**.
2. Для всех целых чисел с одинаковым знаком сохраняется **порядок**, в котором они **присутствовали** в *nums*.
3. Переставленный массив начинается с положительного целого числа.

Верните *измененный массив после перестановки элементов для удовлетворения вышеупомянутых условий*.