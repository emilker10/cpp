#include <iostream>
#include <vector> 
#include <algorithm>

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
    //Сортируем вектор с интервалами по началу каждого интервала
    std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];
    });

    std::vector<std::vector<int>> merged;                                       //вектор для хранения объединенных интервалов
    std::vector<int> prev = intervals[0];                                       //предыдущий интервал, начинаем с первого интервала

    for (int i = 1; i < intervals.size(); ++i) {
        std::vector<int> interval = intervals[i];
        if (interval[0] <= prev[1]) {                                           //если текущий интервал пересекается с предыдущим
            prev[1] = std::max(prev[1], interval[1]);                           //объединяем интервалы, обновляя конец предыдущего интервала
        }
        else {                                                                  //если интервалы не пересекаются, то 
            merged.push_back(prev);                                             //добавляем предыдущий интервал в результат
            prev = interval;
        }
    }

    merged.push_back(prev);                                                     //добавляем последний интервал в результат
    return merged;        
}

int main(int, char**){
    std::vector<std::vector<int>> intervals = {{1,3},{15,18},{8,10},{2,6}};
    std::vector<std::vector<int>> result;
    result = merge(intervals);

    for (auto const &row : result) {
        std::cout<<"[";
        for (auto const &col : row) {
            std::cout << col;
            if (col!=row.back())
                std::cout << ",";
        }
        std::cout<<"]";
        if (row!=result.back())
            std::cout<<", ";
    }
}
