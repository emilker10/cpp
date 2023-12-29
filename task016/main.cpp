#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> numbers;        //создаем неупорядоченное множество
    for (int i=0;i<nums.size();i++){        //пройдемся по вектору
        if (!numbers.count(nums[i])){       //если элемента вектора не существует еще во множестве (значит он повторяется первый раз), то
            numbers.insert(nums[i]);        //занесем его во множество
        }
        else return true;                   //если элемент вектора существует, то он повторяется не один раз, возвращаем true
    }
    return false;
}

int main(int, char**){
    std::vector<int> vec = {1,2,3,1};
    std::cout<<containsDuplicate(vec);
  return 0;
}