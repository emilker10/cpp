#include <iostream>
#include <vector>

//Функция, используюзщая вычисление количества уникальных путей
int uniquePaths(int m, int n) {
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    matrix[0][0] = 1;                                                   //начальная позиция (0, 0) имеет только один способ достижения - оставаться на месте
    //Проходим по всем элементам матрицы
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (i - 1 >= 0) {                                           //если текущая строка не является первой строкой, то
                matrix[i][j] += matrix[i - 1][j];                       //добавляем значение из ячейки выше
            }
            if (j - 1 >= 0) {                                           //если текущий столбец не является первым столбцом, то
                matrix[i][j] += matrix[i][j - 1];                       //добавляем значение из ячейки слева
            }
        }
    }
    //Возвращаем количество уникальных путей до правого нижнего угла матрицы
    return matrix[m - 1][n - 1];
}

//Функция, используюзщая формулу для вычисления количества уникальных путей
//𝐶(𝑚+𝑛−2,𝑚-1)=((𝑚+𝑛−2)!)/(((𝑚−1)!)((𝑛−1)!))
int uniquePaths2(int m, int n) {
    long result = 1;
    for (int i = 1; i <= m - 1; i++) {
        result = result * (n + i - 1) / i;
    }
    return (int) result;
}


int main(int, char**){
    std::cout << "Первый способ: " << uniquePaths(3,7)<<std::endl;
    std::cout << "Второй способ: " << uniquePaths2(3,7);
}
