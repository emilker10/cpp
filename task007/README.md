# Задание с leetcode.com
## 2678. Number of Senior Citizens
---
You are given a 0-indexed array of strings details. Each element of details provides information about a given passenger compressed into a string of length 15. The system is such that:

- The first ten characters consist of the phone number of passengers.
- The next character denotes the gender of the person.
- The following two characters are used to indicate the age of the person.
- The last two characters determine the seat allotted to that person.
Return the number of passengers who are strictly more than 60 years old.

---

***Example 1:***</br>
**Input:** details = ["7868190130M7522","5303914400F9211","9273338290F4010"]</br>
**Output:** 2</br>
**Explanation:** The passengers at indices 0, 1, and 2 have ages 75, 92, and 40. Thus, there are 2 people who are over 60 years old.</br>

---

***Example 2:***</br>
**Input:** details = ["1313579440F2036","2921522980M5644"]</br>
**Output:** 0</br>
**Explanation:** None of the passengers are older than 60.</br>

---

## Перевод

---

Дан индексированный массив строк details. Каждый элемент details предоставляет информацию о пассажире, сжатую в строку длины 15. 

Система такова, что:
- Первые десять символов состоят из номеров телефонов пассажиров.
- Следующий символ обозначает пол человека.
- Следующие два символа используются для обозначения возраста человека.
- Последние два символа определяют место, отведенное этому человеку.

Верните количество пассажиров строго старше 60 лет.