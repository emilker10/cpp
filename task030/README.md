# Задание с leetcode.com
## 36. Valid Sudoku

---

Determine if a *9 x 9* Sudoku board is valid. Only the filled cells need to be validated **according to the following rules**:

1. Each row must contain the digits *1-9* without repetition.
2. Each column must contain the digits *1-9* without repetition.
3. Each of the nine *3 x 3* sub-boxes of the grid must contain the digits *1-9* without repetition.</br>

**Note:**

- A Sudoku board (partially filled) could be valid but is not necessarily solvable.
- Only the filled cells need to be validated according to the mentioned rules.

---

***Example 1:***</br>
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Sudoku-by-L2G-20050714.svg/250px-Sudoku-by-L2G-20050714.svg.png" alt="ex1" width="300"/></br>
**Input:** board = </br>
[["5","3",".",".","7",".",".",".","."]</br>
,["6",".",".","1","9","5",".",".","."]</br>
,[".","9","8",".",".",".",".","6","."]</br>
,["8",".",".",".","6",".",".",".","3"]</br>
,["4",".",".","8",".","3",".",".","1"]</br>
,["7",".",".",".","2",".",".",".","6"]</br>
,[".","6",".",".",".",".","2","8","."]</br>
,[".",".",".","4","1","9",".",".","5"]</br>
,[".",".",".",".","8",".",".","7","9"]]</br>
**Output:** true</br>

---

***Example 2:***</br>
**Input:** board = </br>
[["8","3",".",".","7",".",".",".","."]</br>
,["6",".",".","1","9","5",".",".","."]</br>
,[".","9","8",".",".",".",".","6","."]</br>
,["8",".",".",".","6",".",".",".","3"]</br>
,["4",".",".","8",".","3",".",".","1"]</br>
,["7",".",".",".","2",".",".",".","6"]</br>
,[".","6",".",".",".",".","2","8","."]</br>
,[".",".",".","4","1","9",".",".","5"]</br>
,[".",".",".",".","8",".",".","7","9"]]</br>
**Output:** false</br>
**Explanation:** Same as Example 1, except with the **5** in the top left corner being modified to **8**. Since there are two 8's in the top left 3x3 sub-box, it is invalid.</br>

---

***Constraints:***</br>
- board.length == 9</br>
- board[i].length == 9</br>
- board[i][j] is a digit 1-9 or '.'.</br>
  
---

## Перевод

---

Определите,  действительна ли доска судоку *9 x 9*. Только заполненные ячейки должны быть проверены  **в соответствии со следующими правилами**:

1. Каждая строка должна содержать цифры  *1-9* без повторений.
2. Каждый столбец должен содержать цифры  *1-9* без повторений.
3. Каждый из девяти подполей сетки *3 x 3* должен содержать цифры  *1-9* без повторений.</br>

**Примечание:**

- Доска судоку (частично заполненная) может быть допустимой, но не обязательно решаемой.
- Только заполненные ячейки должны быть проверены в соответствии с указанными правилами.