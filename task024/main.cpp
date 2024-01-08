#include <iostream>
#include <string>
#include <set>

//Функция, проверяющая является ли строка анаграммой
bool isAnagram(std::string s, std::string t) {
    std::multiset<char> ms;                 //создаем контейнер - множество  
    if (s.size()!=t.size())                 //если размеры строк не совпадают, то
        return false;                       //возвращаем false
    for (int i=0;i<s.size();i++){           //пройдемся по элементам строки s
        ms.insert(s[i]);                    //добавляем их во множество
    }
    for (int j=0;j<t.size();j++){           //пройдемся по элементам строки t
        if (ms.find(t[j]) == ms.end()){     //если во множестве не имеется текущая буква, то
            break;                          //прерываем цикл
        }
        else{                               //если имеется, то
            ms.erase(ms.find(t[j]));        //удаляем ее из множества
        }
    }
    if (ms.empty())                         //проверяем множество на пустоту
        return true;
    else return false;
}

int main(int, char**){
    std::string s = "anagram";
    std::string t = "nagaram";
    std::cout << isAnagram(s, t);
}
