#include <iostream>
#include <limits.h>

//Функция для переворота числа
int reverse(int x) {
    int ost = 0;            //остаток от деления числа на 10
    long int new_x = 0;     //новое, получаемое число (увеличен тип данных)
    //Вычисляем новое значение
    while (x!=0){
        ost = x % 10;
        x = x / 10;
        new_x = new_x*10+ost;
        if (new_x>INT_MAX || new_x<INT_MIN) //если новое число вышло за пределы типа данных int, то
            return 0;                       //возвращаем 0
    }
    return new_x;
}

int main(int, char**){
    std::cout<<reverse(-12);
    return 0;
}
