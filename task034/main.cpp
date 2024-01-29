#include <iostream>

//Функция, проверяющая является ли число "уродливым"
bool isUgly(int n) {
    if(n==1)                    //проверяем, равно ли число 1
        return true;
    if(n<=0)                    //если число меньше их или равно 0
        return false;
    //Если число нацело делится на 2, 3 и 5, то рекурсивно вызываем функцию isUgly    
    if(n%2==0)
        return isUgly(n/2);
    else if(n%3==0) 
        return isUgly(n/3);
    else if(n%5==0) 
        return isUgly(n/5);
    else
        return false;
}

int main(int, char**){
    std::cout<<isUgly(10); ;
}
