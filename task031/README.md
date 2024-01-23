# Задание с leetcode.com
## 316. Remove Duplicate Letters
## 1081. Smallest Subsequence of Distinct Characters (The same task)


---

Given a string *s*, return the ***lexicographically smallest subsequence*** of *s* that contains all the distinct characters of *s* exactly once.

> ***Lexicographically smallest subsequence*** - A string *a* is lexicographically smaller than *a* string *b* if in the first position where *a* and *b* differ, string *a* has a letter that appears earlier in the alphabet than the corresponding letter in *b*.
If the first *min(a.length, b.length)* characters do not differ, then the shorter string is the lexicographically smaller one.

---

***Example 1:***</br>
**Input:** s = "bcabc"</br>
**Output:** "abc"</br>

---

***Example 2:***</br>
**Input:** s = "cbacdcbc"</br>
**Output:** "acdb"</br>

---

***Constraints:***</br>
- 1 <= s.length <= 1000</br>
- *s* consists of lowercase English letters.</br>
  
---

## Перевод

---

Дана строка *s*, верните лексикографически наименьшую последовательность из *s*, которая содержит все отдельные символы *s* ровно один раз.

> ***Лексикографически наименьшая последовательность*** - Строка *a* лексикографически меньше строки *b*, если в первой позиции, где *a* и *b* различаются, строка *a* содержит букву, которая появляется в алфавите раньше, чем соответствующая буква в *b*.
Если первые символы *min(a.length, b.length)* не отличаются, то более короткая строка является лексикографически меньшей.