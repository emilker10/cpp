# Задание с leetcode.com
## 11. Container With Most Water

---

You are given an integer array *height* of length *n*. There are *n* vertical lines drawn such that the two endpoints of the *i<sup>th</sup>* line are *(i, 0)* and *(i, height[i])*.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

*Return the maximum amount of water a container can store.*

**Notice** that you may not slant the container.

---

***Example 1:***</br>
![ex1](https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg)
**Input:** height = [1,8,6,2,5,4,8,3,7]</br>
**Output:** 49</br>
**Explanation:** The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.</br>

---

***Example 2:***</br>
**Input:** height = [1,1]</br>
**Output:** 1</br>

---

***Constraints:***</br>
- n == height.length</br>
- 2 <= n <= 10<sup>5</sup></br>
- 0 <= height[i] <= 10<sup>4</sup></br>
  
---

## Перевод

---

Дан целочисленный массив *height* длины *n*. Также даны *n* вертикальных линий, нарисованные так, что двумя  концами линий расстояния *(i, 0)* и *(i, height[i])*.

Найдите две линии, которые вместе с осью X образуют контейнер, в котором содержится больше всего воды.

*Верните максимальное количество воды, которое может храниться в контейнере.*

**Обратите внимание**, что вы не можете наклонять контейнер.