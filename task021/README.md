# Задание с leetcode.com
## 392. Is Subsequence

---

Given two strings *s* and *t*, return *true* if *s* is a subsequence of *t*, or *false* otherwise.

A **subsequence** of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., *"ace"* is a subsequence of *"<ins>a</ins>b<ins>c</ins>d<ins>e</ins>"* while *"aec"* is not).

---

***Example 1:***</br>
**Input:** s = "abc", t = "ahbgdc"</br>
**Output:** true</br>

---

***Example 2:***</br>
**Input:** s = "axc", t = "ahbgdc</br>
**Output:** false</br>

---

***Constraints:***</br>
- 0 <= s.length <= 100</br>
- 0 <= t.length <= 10<sup>4</sup></br>
- *s* and *t* consist only of lowercase English letters.</br>

---

## Перевод

---

Даны две строки *s* и *t*, верните *true* если *s* является подпоследовательностью *t*, или *false* в противном случае .

**Подпоследовательность** строки — это новая строка, которая формируется из исходной строки путем удаления некоторых (может быть ни одного) символов без нарушения относительного положения остальных символов. (т. е. *"ace"* является подпоследовательностью *"<ins>a</ins>b<ins>c</ins>d<ins>e</ins>"* в то время, как *"aec"* нет).