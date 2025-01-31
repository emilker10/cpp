# Задание с leetcode.com
## 62. Unique Paths

---

There is a robot on an *m x n* grid. The robot is initially located at the **top-left corner** (i.e., *grid[0][0]*). The robot tries to move to the **bottom-right corner** (i.e., *grid[m - 1][n - 1]*). The robot can only move either down or right at any point in time.

Given the two integers *m* and *n*, return *the number of possible unique paths that the robot can take to reach the bottom-right corner*.

The test cases are generated so that the answer will be less than or equal to 2 * 10<sup>9</sup>.

---

***Example 1:***</br>
<img src="https://assets.leetcode.com/uploads/2018/10/22/robot_maze.png" alt="description" width="500"/></br>
**Input:** m = 3, n = 7</br>
**Output:** 28</br>

---

***Example 2:***</br>
**Input:** m = 3, n = 2</br>
**Output:** 3</br>
**Explanation:** From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:</br>
1. Right -> Down -> Down</br>
2. Down -> Down -> Right</br>
3. Down -> Right -> Down</br>

---

***Constraints:***</br>
- 1 <= m, n <= 100</br>
  
---

## Перевод

---

На сетке находится робот *m x n*. Изначально робот находится в **верхнем левом углу** (т.е. *grid[0][0]*). Робот пытается переместиться в **нижний правый угол** (т.е. *grid[m - 1][n - 1]*). В любой момент времени робот может двигаться только вниз или вправо.

Даны два целых числа *m* и *n*, верните *количество возможных уникальных путей, по которым робот может добраться до нижнего правого угла*.

Тестовые случаи генерируются таким образом, чтобы ответ был меньше или равен 2 * 10<sup>9</sup>.