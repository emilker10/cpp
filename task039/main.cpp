#include <iostream>
#include <vector>

/*Функция сортирующая объекты по цветам:
* 0 - красный
* 1 - белый
* 2 - синий
*/
void sortColors(std::vector<int>& nums) {
    for (int i=0; i<nums.size()-1; i++){        //запускаем цикл от первого элемента до предпоследнего
        for (int j=i+1; j<nums.size(); j++){    //запускаем цикл от следующего от текущего элемента до последнего
            if (nums[j]<nums[i]){               //сравниваем их между собой, и если один меньше другого, то
                std::swap(nums[j], nums[i]);    //меняем их местами, не задействую дополнительной памяти
            }
        }
    }
}

int main(int, char**){
    std::vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
}
