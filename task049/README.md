# Задание с leetcode.com
## 134. Gas Station

---

There are *n* gas stations along a circular route, where the amount of gas at the *i<sup>th</sup>* station is *gas[i]*.

You have a car with an unlimited gas tank and it costs *cost[i]* of gas to travel from the  *i<sup>th</sup>* station to its next *(i + 1)<sup>th</sup>* station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays *gas* and *cost*, return *the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1*. If there exists a solution, it is **guaranteed** to be **unique**.

---

***Example 1:***</br>
**Input:** gas = [1,2,3,4,5], cost = [3,4,5,1,2]</br>
**Output:** 3</br>
**Explanation:** Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4</br>
Travel to station 4. Your tank = 4 - 1 + 5 = 8</br>
Travel to station 0. Your tank = 8 - 2 + 1 = 7</br>
Travel to station 1. Your tank = 7 - 3 + 2 = 6</br>
Travel to station 2. Your tank = 6 - 4 + 3 = 5</br>
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.</br>
Therefore, return 3 as the starting index.</br>

---

***Example 2:***</br>
**Input:** gas = [2,3,4], cost = [3,4,3]</br>
**Output:** -1</br>
**Explanation:** You can't start at station 0 or 1, as there is not enough gas to travel to the next station.</br>
Let's start at station 2 and fill up with 4 unit of gas. Your tank = 0 + 4 = 4</br>
Travel to station 0. Your tank = 4 - 3 + 2 = 3</br>
Travel to station 1. Your tank = 3 - 3 + 3 = 3</br>
You cannot travel back to station 2, as it requires 4 unit of gas but you only have 3.</br>
Therefore, you can't travel around the circuit once no matter where you start.</br>

---

***Constraints:***</br>
- n == gas.length == cost.length</br>
- 1 <= n <= 10<sup>5</sup></br>
- 0 <= gas[i], cost[i] <= 10</br>
  
---

## Перевод

---

Вдоль кольцевого маршрута расположены *n* заправочных станций, где количество бензина на *i<sup>ой</sup>* станции составляет *gas[i]*.

У вас есть автомобиль с неограниченным топливным баком, и стоимость поездки *cost[i]* от *i<sup>ой</sup>* заправки до *(i + 1)<sup>ой</sup>*. Вы начинаете поездку с пустым баком на одной из заправок.

Даны два целочисленных массива *gas* и *cost*, необходимо вернуть *индекс начальной заправочной станции, если вы можете объехать весь маршрут один раз по часовой стрелке, в противном случае вернуть -1*. Если решение существует, оно **гарантированно уникально**.