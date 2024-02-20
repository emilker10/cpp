#include <iostream>
#include <vector>
#include <algorithm>

std::vector<bool> checkArithmeticSubarrays(std::vector<int>& nums, std::vector<int>& l, std::vector<int>& r){
    std::vector<bool> answer;                                          //вектор с результатми
    for (int i=0; i<l.size(); i++){                                 //запускаем цикл по векторам с границами последовательности вектора nums
        std::vector<int> s;
        //Вычленяем последовательность в вектор s
        for (int j=l[i]; j<=r[i]; j++){
            s.push_back(nums[j]);
        }
        std::sort(s.begin(), s.end(), std::greater<int>());         //сортируем элементы вектора по убыванию
        int prev = 0;                                               //предудыщая разница между элементами в последовательности  
        bool arith = true;                                          //флаг отслеживания была ли последовательность арифметической
        //Проверяем является ли последовательность аримфметической
        for (int k=0; k<s.size()-1; k++){                           //пройдемся по элементам последовательности
            if (k==0){                                              //если элемент вектора нулевой, то
                prev = s[k]-s[k+1];                                 //у него не существует предыдущего значения (он сам будет предыдущим для следующего)
            }
            else{                                                   //если элемент вектора не нулевой, то
                if (s[k]-s[k+1]!=prev){                             //если текущая разница между элементами не равна предыдущей, то
                    answer.push_back(false);                           //заносим в результрующий вектор значение false
                    arith = false;                                  //выставляем флаг в false
                    break;
                }
            }
        }
        if (arith){                                                 //если последовательность была арифметической, то
            answer.push_back(true);                                    //заносим в результрующий вектор значение true
        }
    }
    return answer;
}

int main(int, char**){
    std::vector<int> nums = {4,6,5,9,3,7};
    std::vector<int> l = {0,0,2};
    std::vector<int> r = {2,3,5};

    std::vector<bool> answer = checkArithmeticSubarrays(nums, l, r);

    for (bool n : answer){
        std::cout << n <<" ";
    }
}
