#include <iostream>

//Функция определяющая является ли число степенью двойки
bool isPowerOfTwo(int n){
    bool res = false;
    //Для чисел 1 и 0 отдельные условия
    if (n==1)
        return true;
    if (n==0)
        return false;
    //Для остальных чисел выполняем цикл
    while (true){
        if (n%2!=0)         //проверяем остаток от деления, если он не 0, то
            break;          //число n - нечетное
        if (n!=1){          //если n не равно 1, то 
            n = n/2;        //его можно снова делить на 2
        }
        if (n==1){          //если n достигло 1, то
            res = true;     //результат получен, число n - степень двойки
            break;
        } 
    }
    return res;
}


int main()
{
    std::cout<<isPowerOfTwo(16);
    return 0;
}
