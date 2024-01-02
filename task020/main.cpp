#include <iostream>
#include <string>
#include <set>

//Функция поиска различия между двумя строками
char findTheDifference(std::string s, std::string t) {
    if (t.size()==1)                        //если строка t содержит всего один символ, то
        return t[0];                        //возвращаем его
    char res;
    std::multiset<char> ss;                 //контейнер-множество, которое содержит повторяющиеся элементы в отсортированном порядке

    //Заполняет контейнер символами из строки s
    for (int k=0;k<s.size();k++){
        ss.insert(s[k]);
    }

    for (int i=0;i<t.size();i++){           //пройдем по элементам строки t
        if (ss.find(t[i]) == ss.end()){     //если текущего символа нет в контейнере, то
            res = t[i];                     //добавляем его во множество
            break;                          
        }
        else ss.erase(ss.find(t[i]));       //если символ найдет в контейнере, то удаляем его
            
    }
    return res;
}

int main(int, char**){
    std::string s = "abcd";
    std::string t = "abcde";
    
    std::cout<<findTheDifference(s,t);

    return 0;
}