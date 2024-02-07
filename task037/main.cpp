#include <iostream>
#include <string>

//Фунеция преобразовывающая строку в код по условию
int titleToNumber(std::string columnTitle) {
    int res = 0;
    for (int i=0; i<columnTitle.size(); i++){       //пройдемся по исходной строке
        int sumb_code = columnTitle[i] - 'A' + 1;   //текущий символ конвертируем в число (columnTitle[i] - 'A') и добавляем 1, т.к. алфавит начинаем считать с 1, а не с 0        
        res = res*26 + sumb_code;                   //т.к. в алфавите 26 символов, то число умножаем на его позицию начилая с конца и с 0
    }
    return res;
}

int main(int, char**){
    std::cout << titleToNumber("ZY");
}
