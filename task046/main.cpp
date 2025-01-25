#include <iostream>
#include <climits>
#include <string>

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;       //проверка на переполнение при делении INT_MIN на -1
    if (dividend == INT_MIN && divisor == 1) return INT_MIN;        //проверка на деление INT_MIN на 1

    //Определяем, будет ли результат отрицательным
    bool negative = (dividend < 0) ^ (divisor < 0);

    //Преобразуем делимое и делитель в положительные значения типа long long (используем модуль)
    long long absDividend = abs((long long)dividend);
    long long absDivisor = abs((long long)divisor);

    int quotient = 0;

    while (absDividend >= absDivisor) {
        long long tempDivisor = absDivisor, multiple = 1;
        //Удваиваем делитель и множитель, пока удвоенный делитель меньше делимого
        while (absDividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }
        absDividend -= tempDivisor;
        quotient += multiple;
    }

    return negative ? -quotient : quotient;
}


int main(int, char**){
    std::string dividend_str;   int dividend;
    std::string divisor_str;    int divisor;
    std::cout << "Введите делимое: ";
    std::getline(std::cin, dividend_str);
    dividend = std::stoi(dividend_str);
    std::cout << "Введите делитель: ";
    std::getline(std::cin, divisor_str);
    divisor = std::stoi(divisor_str);

    int result;
    result = divide(dividend, divisor);
    std::cout << "Результат: "<<result;
}
