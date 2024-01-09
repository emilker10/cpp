#include <iostream>
#include <string>
#include <vector>

//Функция, определяющая возможные комбинации строк
std::vector<std::string> letterCombinations(std::string digits) {
    if (digits.empty())                             //если прислали пустую строку, то
        return {};                                  //возвращаем пустой вектор

    const std::vector<std::string> pad = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    //Результирующий вектор
    std::vector<std::string> result;
    result.push_back("");
    
    for(auto digit: digits) {                       //для каждого введенного числа
        std::vector<std::string> tmp;               //создаем временный вектор строк
        for(auto candidate: pad[digit - '0']) {     //для каждого числа подбираем кондидаты символов, находящихся на кнопке этого числа
            for(auto s: result) {                   //для каждого символа в результрующем векторе 
                tmp.push_back(s + candidate);       //соединяем комбинации
            }
        }
        result.swap(tmp);                           //переносим временный вектор в результирующий
    }
    return result;
}

int main(int, char**){
    std::vector<std::string> result = letterCombinations("23");
    //Результат выводим на печать
    for(auto s: result){
        std::cout<<s<<" ";
    }
}
