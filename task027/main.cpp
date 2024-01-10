#include <iostream>
#include <vector>
#include <string>

//Функция генерации скобок
void generate(int open, int close, std::string output, std::vector<std::string>& ans){
    //Если количество открывающих и закрывающих скобок равно нулю
    if (open == 0 && close == 0){
        ans.push_back(output);                      //добавляем результат в вектор
        return;
    }
    //Если число означающее количество необходимых открывающих скобок больше нуля
    if (open > 0){
        output.push_back('(');                      //добавляем в вектор открывающую скобку
        generate(open-1, close, output, ans);       //рекурсивно вызываем функцию генерации скобок
        output.pop_back();                          //удаляем последний элемент вектора (бэктрекинг)
    }
    //Добавляем закрывающую скобку если число означающее количество необходимых закрывающих скобок больше, чем 
    //число означающее количество необходимых закрывающих скобок
    if (close > open){
        output.push_back(')');                      //добавляем в вектор закрывающую скобку
        generate(open, close-1, output, ans);       //рекурсивно вызываем функцию генерации скобок
        output.pop_back();                          //удаляем последний элемент вектора (бэктрекинг)
    }
}

//Промежуточная функция для правильного вызова функции генерации скобок
std::vector<std::string> generateParenthesis(int n) {
    std::string output = "";
    std::vector<std::string> ans;
    generate(n, n, output, ans);
    return ans;
}

int main(int, char**){
    std::vector<std::string> result = generateParenthesis(3);
    for (auto s: result){
        std::cout<<s<<" ";
    }
}
