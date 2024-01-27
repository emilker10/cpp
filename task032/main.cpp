#include <stdio.h>
#include <vector>
#include <iostream>

//Функция добавления +1 к числу, находящемуся в векторе
std::vector<int> plusOne(std::vector<int>& digits) {
    if (digits[digits.size()-1]!=9){                                //если последнее число не девять, то
        digits[digits.size()-1] = digits[digits.size()-1]+1;        //добавляем к нему 1
    }
    else{                                                           //если последнее число равно девяти, то
        for (int i=digits.size()-1; i>=0; i--){                     //запускаем цикл от конца вектора к началу
            if (i!=0){                                              //если текущий элемент, не последний (то бишь первый, т.к. с конца), то
                if (digits[i-1]!=9){                                //проверяем число перед ним: если оно тоже не девять, то
                    digits[i-1] = digits[i-1]+1;                    //добавляем к нему 1
                    for (int j=i; j<digits.size(); j++){            //запускаем цикл от текущего элемента в конец вектора
                        digits[j] = 0;                              //обнуляем элементы вектора
                    }
                    break;                                          //выходим из цикла
                }
            }
            else{                                                   //если текущий элемент последний, то
                if (digits[i]==9){                                  //и если он равен девяти, то
                    digits[i]=1;                                    //приравниваем его к 1
                    digits.push_back(0);                            //добавляем нулевой элемент в конец вектора
                    for (int j=i+1; j<digits.size(); j++){          //запускаем цикл от следующего элемента до конца вектора и
                        digits[j] = 0;                              //обнуляем элементы вектора
                    }
                    break;                                          //выходим из цикла
                }
            }
        }
    }
    return digits;
}

int main(int, char**){
    std::vector<int> dig = {1, 2, 3};
    std::vector<int> res = plusOne(dig);
    //Выводим результат на печать
    for (auto i: res){
        std::cout<<i<<" ";
    }
    return 0;
}
