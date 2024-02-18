#include <iostream>
#include <vector>

//Функция перестановки элементов массива по знаку
std::vector<int> rearrangeArray(std::vector<int>& nums) {
    std::vector<int> plus;                          //вектор, который будет содержать положительные элементы исходного вектора nums
    std::vector<int> minus;                         //вектор, который будет содержать отрицательные элементы исходного вектора nums
    //Заполняем массивы minus и plus
    for (int el: nums){
        if (el>0)
            plus.push_back(el);
        else if (el<0)
            minus.push_back(el);
    }
    int size = nums.size();                         //длина вектора nums
    nums.clear();                                   //очищаем исходный массив (не требуется, но мы его переиспользуем для экономии памяти)
    int count_p = 0;                                //счетчик положительных элементов для вектора plus
    int count_m = 0;                                //счетчик отрицательных элементов для вектора minus
    for (int i=0; i<size; i++){                     //переберем числа с нуля до длины вектора nums
        if (i%2 == 0){                              //если текущее число четное, то 
            nums.push_back(plus[count_p]);          //добавим его в вектор nums
            count_p++;                              //итерируем счетчик положительных элементов
        }
        else{                                       //если текущее число нечетное, то 
            nums.push_back(minus[count_m]);         //добавим его в вектор nums
            count_m++;                              //итерируем счетчик отрицательных элементов
        }
    }
    return nums;
}

int main(int, char**){
    std::vector<int> nums = {3,1,-2,-5,2,-4};
    std::vector<int> res = rearrangeArray(nums);
    for (int n: res){
        std::cout<<n<<" ";
    }

}
