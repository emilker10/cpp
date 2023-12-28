#include <iostream>
#include <map>
#include <string>

//Функция сопоставляющая две строки между собой
bool isIsomorphic(std::string s, std::string t) {
    if (s.size() != t.size())           //если две строки разного размера, то
        return false;                   //возвращаем false
    std::map<char, char> mp;            //контейнер, в качетсве ключа и значения символы каждой из заданных строк
    //Заполняем контейнер данными
    for (int i=0;i<s.size();i++){
        mp.insert({s[i], t[i]});
    }
    std::string test = "";              //строка, которая будет содержать результат подстановки сиволов из другой строки
    //Заполняем строку test, подставляя символам из одной строки символы из другой
    for (int j=0;j<t.size();j++){
       for (auto &k : mp) {
          if (k.second == t[j]) {
            test += k.first;
            break;
          }
       }
    }
    //Сравниваем получившуюся тестовую строку с исходной
    if (s==test)
        return true;
    else return false;
}

int main(int, char**){
  std::cout << isIsomorphic("egg", "add");
  return 0;
}