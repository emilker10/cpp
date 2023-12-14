#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    std::vector<std::string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};   //вектор строк
    int count = 0;                                  //счетчик
    for (int i=0;i<details.size();i++){             //для каждого элемента вектора
        std::string age_str = "";
        age_str = details[i].substr(11, 2);         //возьмем подстроку длиной 2 сивола, начиная с 11 позиции (по условию точно знаем, что это место возраста)
        int age;
        std::istringstream(age_str) >> age;         //конвертируем строку в число
        if (age>60)                                 //если возраст больше 60, то
            count++;                                //итерируем счетчик
    }    
    std::cout<<count<<std::endl; 
    return 0;
}