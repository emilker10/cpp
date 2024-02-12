#include <iostream>

//Функция, считающая квадратный корень числа х
int mySqrt(int x) {
    if (x==0)
        return 0;
    long int count = 0;
    while (true){               //запускаем цикл до тех пор, пока
        if (count*count>x){     //произведения счетчика самого на себя не будет больше требуемого значения
            break;              //выходим из цикла
        }
        else{                   //иначе
            count++;            //итерируем счетчик
        }
    }
    return count-1;
}

int main(int, char**){
    std::cout << mySqrt(8);
}
