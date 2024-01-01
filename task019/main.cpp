#include <iostream>
#include <vector>

//API функция, которая возращает 1 из трех вариантов ответа
int guess(int num){
    int pick = 6;                       //загаданное число
    if (num>pick)
        return -1;
    else if (num<pick)
        return 1;
    else return 0;
}

//Функция, пытается угадать загаданное число
int guessNumber(int n) {
    int i=0; 
    int j = n;
    while (i<=j){
        int attempt = i+(j-i)/2;        //рассчитываем следующее число, чтобы сделать очередную попытку угадать
        if (guess(attempt) == 0){       //если угадали число
            std::cout << attempt << std::endl;
            return attempt;
        }
        if (guess(attempt) == -1)       //если число оказалось выше
            j = attempt-1;              //сдвигаем верхнюю границу
        else i = attempt+1;             //если число оказалось ниже, то сдвигаем нижнюю границу
    }
    return i;
}


int main(int, char**){
    guessNumber(10);
    return 0;
}