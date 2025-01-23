#include <iostream>
<<<<<<< HEAD


//Метод для поиска самой длинной палиндромной подстроки в строке s
std::string longestPalindrome(std::string s) {
    //Если длина строки меньше или равна 1, то вся строка является палиндромом
    if (s.length() <= 1) {
        return s;
    }

    //Лямбда-функция, которая расширяет палиндром из центра
    auto expand_from_center = [&](int left, int right) {
        //Увеличиваем границы, пока символы равны и находятся в пределах строки
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;                                                         //уменьшаем левую границу
            right++;                                                        //увеличиваем правую границу
        }
        //Возвращаем найденную палиндромную подстроку
        return s.substr(left + 1, right - left - 1);
    };

    //Инициализируем переменную для хранения самой длинной найденной палиндромной подстроки
    std::string max_str = s.substr(0, 1);

    //Проходим по каждому символу в строке
    for (int i = 0; i < s.length() - 1; i++) {
        std::string odd = expand_from_center(i, i);                         //проверяем палиндром, имеющий нечетное число символов
        std::string even = expand_from_center(i, i + 1);                    //проверяем палиндром, имеющий четное число символов

        //Если найденная подстрока длинее, обновляем max_str
        if (odd.length() > max_str.length()) {
            max_str = odd;
        }
        //Проверяем для четной палиндромной подстроки
        if (even.length() > max_str.length()) {
            max_str = even;
        }
    }

    //Возвращаем найденную самую длинную палиндромную подстроку
    return max_str;
}


int main(int, char**){
    std::string str = "babad";
    std::string answer = longestPalindrome(str);
    std::cout << answer;
=======
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
>>>>>>> a6e96fad1638fce05d3d5d0889ccff2a64f7f8f5
}
