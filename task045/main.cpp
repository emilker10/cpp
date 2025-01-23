#include <iostream>

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
}
