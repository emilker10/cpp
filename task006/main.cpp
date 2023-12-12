#include <iostream>
#include <vector>
#include <unordered_set>

//Функция, определяющая единожды повторяющуюся цифру в векторе
int singleNumber(std::vector<int>& nums) {
    std::unordered_set<int> numbers;        //создаем неупорядоченное множество
    for (int i=0;i<nums.size();i++){        //пройдемся по вектору
        if (!numbers.count(nums[i])){       //если элемента вектора не существует еще во множестве (значит он повторяется первый раз), то
            numbers.insert(nums[i]);        //занесем его во множество
        }
        else numbers.erase(nums[i]);        //иначе удалим его из множества
    }
    return *numbers.begin();                //мы знаем, что у нас всего 1 такой элемент, который повторяется единожды, поэтому можем обращаться к началу множества
}

int main(int, char**){
    std::vector<int> vec = {1,2,3,2,3};
    std::cout<<"answer: "<<singleNumber(vec);
}
