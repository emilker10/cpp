#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdlib>

//Функция, считающая разницы индексов между двумя равными значениями вектора
bool containsNearbyDuplicate(std::vector<int>& nums, int k){
    std::unordered_map<int, int> mp;            //контейнер, ключ - элемент вектора, значение - индекс элемента
    for(int i = 0; i < nums.size(); i++) {      //пройдемся по вектору
        if(mp.count(nums[i])){                  //если в контейнере уже имеется текущее значение, то
            int diff = abs(mp[nums[i]] - i);    //считаем разницу между индексами элементов
            if (diff <= k)                      //если она меньше, чем заданное число, то
                return true;                    //возвращаем true
        }
        mp[nums[i]] = i;                        //заполняем контейнер данными
    }
    return false;
}

int main(int, char**){
    std::vector<int> vec = {1,2,3,1};
    std::cout<<containsNearbyDuplicate(vec, 3);
  return 0;
}