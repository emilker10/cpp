# Задание с leetcode.com
## 1409. Queries on a Permutation With Key

---

Given the array *queries* of positive integers between *1* and *m*, you have to process all *queries[i]* (from *i=0* to *i=queries.length-1*) according to the following rules:
- In the beginning, you have the permutation *P=[1,2,3,...,m]*.</br>
- For the current *i*, find the position of *queries[i]* in the permutation *P* (**indexing from 0**) and then move this at the beginning of the permutation *P*. Notice that the position of *queries[i]* in *P* is the result for *queries[i]*.</br>

Return an array containing the result for the given *queries*.

---

***Example 1:***</br>
**Input:** queries = [3,1,2,1], m = 5</br>
**Output:** [2,1,2,1]</br>
**Explanation:** The queries are processed as follow: 
For i=0: queries[i]=3, P=[1,2,3,4,5], position of 3 in P is 2, then we move 3 to the beginning of P resulting in P=[3,1,2,4,5]. </br>
For i=1: queries[i]=1, P=[3,1,2,4,5], position of 1 in P is 1, then we move 1 to the beginning of P resulting in P=[1,3,2,4,5]. </br>
For i=2: queries[i]=2, P=[1,3,2,4,5], position of 2 in P is 2, then we move 2 to the beginning of P resulting in P=[2,1,3,4,5]. </br>
For i=3: queries[i]=1, P=[2,1,3,4,5], position of 1 in P is 1, then we move 1 to the beginning of P resulting in P=[1,2,3,4,5]. </br>
Therefore, the array containing the result is [2,1,2,1].</br>

---

***Example 2:***</br>
**Input:** queries = [4,1,2,2], m = 4</br>
**Output:** [3,1,2,0]</br>

---

***Example 3:***</br>
**Input:** queries = [7,5,5,8,3], m = 8</br>
**Output:** [6,5,0,7,5]</br>

---

***Constraints:***</br>
- 1 <= m <= 10<sup>3</sup></br>
- 1 <= queries.length <= m</br>
- 1 <= queries[i] <= m</br>

---

## Перевод

---

Дан массив *queries* положительных целых чисел с *1* по *m*, необходимо обработать *все queries[i]* (от *i=0* до *i=queries.length-1*) в соответствии со следующими правилами:
- Вначале у вас есть перестановка *P=[1,2,3,...,m]*.</br>
- Для текущего *i*-го элемента в *queries[i]* найдите его позицию в перестановке *P* (**индексация от 0**), а затем переместите ее в начало перестановки *P*. Обратите внимание, что позиция *queries[i]* в *P* является результатом для *queries[i]*.

Верните массив, содержащий результат для данного *queries*.