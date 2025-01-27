# Задание с leetcode.com
## 56. Merge Intervals

---

Given an array of *intervals* where *intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]*, merge all overlapping intervals, and return *an array of the non-overlapping intervals that cover all the intervals in the input*.

---

***Example 1:***</br>

**Input:** intervals = [[1,3],[2,6],[8,10],[15,18]]</br>
**Output:** [[1,6],[8,10],[15,18]]</br>
**Explanation:** 
Since intervals [1,3] and [2,6] overlap, merge them into [1,6].</br>

---

***Example 2:***</br>
**Input:** intervals = [[1,4],[4,5]]</br>
**Output:** [[1,5]]</br>
**Explanation:** 
Intervals [1,4] and [4,5] are considered overlapping.</br>

---

***Constraints:***</br>
- 1 <= intervals.length <= 10<sup>4</sup>
- intervals[i].length == 2
- 0 <= start<sub>i</sub> <= end<sub>i</sub> <= 10<sup>4</sup>


---

## Перевод

---

Дан массив интервалов, где *intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]*, объединить все перекрывающиеся интервалы и вернуть *массив неперекрывающихся интервалов, которые покрывают все интервалы во входных данных*.