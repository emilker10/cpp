#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

bool equalFrequency(std::string word) {
    std::unordered_map<char, int> mp1;              //создаем мапу - в качестве ключа символ (буква), в качестве значения - его частота
    std::map<int, int> mp2;                         //создаем мапу - в качестве ключа частота, в качестве значения - сколько раз встречались буквы с такой частотой
    //Пробегаемся по слову и заносим данные в мапу
    for (char c : word)
        mp1[c]++;

    //Пробегаемся по первой мапе, чтобы заполнить вторую и узнать с какой частотой встречаются буквы с определенной частотой
    for (auto &x : mp1)
        mp2[x.second]++;

    if (mp2.size() > 2)                             //если количество букв с разной частотой больше 2, то
        return false;                               //такое слово нам не подходит
    //Создаем два итератора, устанавливаем их на начало второй мапы
    std::map<int, int>::iterator it1 = mp2.begin(); 
    std::map<int, int>::iterator it2 = mp2.begin();
    it2++;                                          //сдвигаем второй итератор на 1 элемент

    int f1 = it1->first;                            //ключ - первая значение частоты
    int n1 = it1->second;                           //значение - сколько раз встречалось второе значение
    int f2 = it2->first;                            //ключ - первая значение частоты
    int n2 = it2->second;                           //значение - сколько раз встречалось второе значение

    if (mp2.size() == 1){
        if (mp1.size() == 1 || f1 == 1)
            return true;
        return false;
    }

    if (f1 == 1 && n1 == 1)
        return true;
    if ((f1 == f2 - 1) && n2 == 1)
        return true;
    return false;
}

int main(int, char**){
    equalFrequency("ddacc") ? std::cout<<"true" : std::cout<<"false";
}
