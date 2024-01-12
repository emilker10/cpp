# Задание с leetcode.com
## 1329. Sort the Matrix Diagonally

---

A **matrix diagonal** is a diagonal line of cells starting from some cell in either the topmost row or leftmost column and going in the bottom-right direction until reaching the matrix's end. For example, the matrix diagonal starting from *mat[2][0]*, where *mat* is a *6 x 3* matrix, includes cells *mat[2][0]*, *mat[3][1]*, and *mat[4][2]*.

Given an *m x n* matrix *mat* of integers, sort each **matrix diagonal** in ascending order and return *the resulting matrix*.

---

***Example 1:***</br>
<img src="https://assets.leetcode.com/uploads/2020/01/21/1482_example_1_2.png" alt="ex1" width="500"/></br>
**Input:** mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]</br>
**Output:** [[1,1,1,1],[1,2,2,2],[1,2,3,3]]</br>

---

***Example 2:***</br>
**Input:** mat = [[11,25,66,1,69,7],[23,55,17,45,15,52],[75,31,36,44,58,8],[22,27,33,25,68,4],[84,28,14,11,5,50]]</br>
**Output:** [[5,17,4,1,52,7],[11,11,25,45,8,69],[14,23,25,44,58,15],[22,27,31,36,50,66],[84,28,75,33,55,68]]</br>

---

***Constraints:***</br>
- m == mat.length</br>
- n == mat[i].length</br>
- 1 <= m, n <= 100</br>
- 1 <= mat[i][j] <= 100</br>

---

## Перевод

---

**Диагональ матрицы** — это диагональная линия ячеек, начинающаяся с некоторой ячейки либо в самой верхней строке, либо в крайнем левом столбце и идущая в правом нижнем направлении до достижения конца матрицы. Например, **диагональ матрицы**, начинающаяся с *mat[2][0]*, где *mat* это матрица *6 x 3*, диагональ включает ячейки *mat[2][0]*, *mat[3][1]*, и *mat[4][2]*.

Дана матрица *mat* размером *m x n* целых чисел, отсортируйте каждую **диагональ матрицы** в порядке возрастания и верните *полученную матрицу*.