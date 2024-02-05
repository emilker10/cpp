#include <iostream>
#include <vector>
#include <unordered_map>

//Функция поиска элемента повторяющегося более, чем n/2 раза
int majorityElement(std::vector<int>& nums){
    if (nums.size()==1){                    //если вектор состоит из одного элемента, то
        return nums[0];                     //возвращаем его
    }
    int max_freq = nums.size() / 2;         //считаем максимальную частоту появления числа (по условию) в зависимости от размера вектора
    int res = 0;
    std::unordered_map<int, int> mp;        //контейнер ключ которого - число в векторе, а значение - частота его встречаемости в нем
    for (int i=0; i<nums.size(); i++){      //пройдемся по вектору
        if (mp.count(nums[i])==0){          //если текущий элемент еще не встречался, то
            mp[nums[i]] = 1;                //добавляем его в контейнер со значением 1
        }
        else{                               //если текущий элемент уже встречался, то
            mp[nums[i]] = mp[nums[i]]+1;    //увеличиваем его частоту встречаемости
            if (mp[nums[i]]>max_freq){      //если частота встречаемости числа больше требуемого, то
                res = nums[i];              //возвращаем его
                break;                      //выходим из цикла
            }
        }
    }
    return res;
}

int main(int, char**){
    std::vector<int> nums = {2};
    std::cout << majorityElement(nums);
}
