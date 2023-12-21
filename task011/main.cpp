#include <iostream>
#include <vector>
#include <algorithm>

//Функция, возвращающая пересечение двух векторов
std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::vector<int> res;
        for(auto & p : nums1) {
            auto k = std::find(nums2.begin(), nums2.end(), p);  //используем функцию поиска, возвращает позицию
            if(k != nums2.end()){                               //если позиция не равна конечной
                nums2.erase(k);                                 //то удаляем текущий элемент в векторе
                res.push_back(p);                               //результирующий вектор заполним найденым элементом
            }
        }
        return res;
}

int main(int, char**){
    std::vector<int> a = {1,2,2,1};
    std::vector<int> b = {2,2};
    std::vector<int> res = {};
    res = intersection(a,b);
    //Выводим на вектор на печать
    for (int i=0; i<res.size(); i++){
        std::cout<<res[i]<<" ";
    }
    return 0;
}
