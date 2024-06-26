#include <iostream>
#include <string>

//Функция поиска пдлины последнего слова в строке
int lengthOfLastWord(std::string s) {
    //Удаляем лишние символы в конце строки:
    //находим позицию последнего элемента, не равного пробелу, символу перевода на новую строку, табуляции 
    //удаляем все начиная со следующего элемента до конца строки
    s.erase(s.find_last_not_of(" \n\r\t")+1);
    auto pos = s.find_last_of(" ");             //в получившейся строке находим позицию последнего пробела
    std::string last_word = s.substr(pos+1);    //начиная со следующего символа до конца строки переписываем в новую переменную
    return last_word.size();                    //это и будет искомое слово, возвращаем его размер
}

int main(int, char**){
    std::cout<<lengthOfLastWord("Hello, from task44!");
}
