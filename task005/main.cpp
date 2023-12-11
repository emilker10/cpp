#include <iostream>
#include <string>

using namespace std;

string largestOddNumber(string num) {
    if (num.back() % 2 == 1) {              //проверяем последний символ на четность
        return num;                         //если нечетный, то возвращаем само число
    }
    int i = num.length() - 1;               //определяем длину строки (числа)
    while (i >= 0) {                        //проходим по числу в обратную сторону
        if (num[i] % 2 == 1) {              //если текущий символ нечетный, то
            return num.substr(0, i+1);      //подстрока от начала до текущего символа и будет являться самым большим числом
        }
        i--;
    }
    return ""; 
}

int main()
{
    cout<<largestOddNumber("239537672423884969653287102");

    return 0;
}
