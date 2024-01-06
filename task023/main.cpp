#include <iostream>
#include <vector>
#include <algorithm>  

//Функция поиска контайнера с максимальным количеством воды
int maxArea(std::vector<int>& height) {
    int _max = INT_MIN;                                     //максимальная область
    int start = 0;                                          //начало области
    int end = height.size() - 1;                            //конец области
    while(start < end){                                     //пока начало меньше конца
        int indDif = end - start;                           //считаем разницу между концом и началом области поиска
        int _min = std::min(height[start], height[end]);    //найдем наименьшее из двух значений
        _max = std::max(_max, (indDif * _min));             //посчитаем площадь
        if(height[start] < height[end])                     //корректируем значения
            start++;
        else
            end--;
    }
    return _max;
}

int main(int, char**){
    std::vector<int> height = {1,8,6,2,5,4,8,3,7};
    std::cout << maxArea(height);
}
