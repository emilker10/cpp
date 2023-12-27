#include <iostream>
#include <set>
#include <string>
#include <vector>

//Функция, определяющая первый неповторяющийся символ в строке
int firstUniqChar(std::string s){
    std::set<char> st;                      //контейнер - множество
    std::vector<char> res;                  //вектор, содержащий неповторяющиеся символы
    int index;                              //индекс первого неповторяющегося символа
    for (int i = 0; i < s.size(); i++){     //пройдем по каждому сиволу строки
        if(st.find(s[i])==st.end()){        //если не найдем его во множестве, то
            st.insert(s[i]);                //добавим символ во множество
            res.push_back(s[i]);            //добавим символ в вектор
        }
        else{                               //если символ уже существует во множестве
            for (auto it = res.begin(); it != res.end(); ++it){     //пройдем по вектору
                if (*it==s[i]){             //найдем символ в нем
                    res.erase(it);          //и удалим его из вектора
                    break;
                }
            }
        }
    }
    //Если размер вектора равен нулю, то значит все символы повторялись по несколько раз
    if (res.size() == 0)
        return -1;
    //Найдем индекс первого неповторяющегося символа в строке
    for (int i = 0; i < s.size(); i++){
        if (s[i]==res[0]){                  //сравниваем с первым элементов вектора
            index = i;
            break;
        }
    }
    return index;
}

int main(int, char**){
  std::cout << firstUniqChar("leetcode");
}
