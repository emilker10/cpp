# Задание с leetcode.com
## 2706. Buy Two Chocolates
---
You are given an integer array prices representing the prices of various chocolates in a store. You are also given a single integer money, which represents your initial amount of money.

You must buy exactly two chocolates in such a way that you still have some non-negative leftover money. You would like to minimize the sum of the prices of the two chocolates you buy.

Return the amount of money you will have leftover after buying the two chocolates. If there is no way for you to buy two chocolates without ending up in debt, return money. Note that the leftover must be non-negative.

---

***Example 1:***</br>
**Input:** prices = [1,2,2], money = 3</br>
**Output:** 0</br>
**Explanation:** Purchase the chocolates priced at 1 and 2 units respectively. You will have 3 - 3 = 0 units of money afterwards. Thus, we return 0.</br>

---

***Example 2:***</br>
**Input:** prices = [3,2,3], money = 3</br>
**Output:** 3</br>
**Explanation:** You cannot buy 2 chocolates without going in debt, so we return 3.</br>
 
---

***Constraints:***</br>
- 2 <= prices.length <= 50</br>
- 1 <= prices[i] <= 100</br>
- 1 <= money <= 100</br>

---

## Перевод

---

Дан целочисленный массив prices, представляющий цены на различные шоколадные конфеты в магазине. Также дается одно целое число money, которое представляет первоначальную сумму денег.

Вы должны купить ровно две шоколадные конфеты таким образом, чтобы у вас осталось немного денег (неотрицательных). Вы хотите минимизировать сумму цен двух шоколадных конфет, которых вы покупаете.

Верните сумму денег, которая останется у вас после покупки двух шоколадных конфет. Если у вас нет возможности купить две шоколадки и не оказаться в долгах, верните money. Обратите внимание, что остаток не должен быть отрицательным.