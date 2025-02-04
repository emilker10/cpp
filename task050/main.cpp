#include <iostream>
#include <vector>
#include <algorithm>

int maximumGap(std::vector<int>& nums) {
    int gap = 0;
    
    if (nums.size() == 0) {                     //если вектор пустой, то
        return 0;                               //возвращаем ноль
    }

    std::sort(nums.begin(), nums.end());        //сортируем вектор в порядке возрастания значений элементов
    int n = nums.size();
    //Пройдемся по вектору для поиска наибольшего разрыва между соседними элементами
    for (int i=0; i<n-1; i++) {
        int sub = nums[i + 1] - nums[i];
        if (sub > gap) {
            gap = sub;
        }
    }
    
    //Возвращаем результат, если массив содержит менее двух элементов, то gap остается равным 0.
    return gap;
}

int main(int, char**){
    std::vector<int> nums = {3,6,9,1};
    std::cout << maximumGap(nums);
}
