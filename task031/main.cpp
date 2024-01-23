#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <stack>

using namespace std;

string removeDuplicateLetters(string s){
    unordered_map<char, int> lastIdx;           //контейнер в котором ключ - символ строки, а значение - индекс символа
    unordered_map<char, bool> visited;          //контейнер в котором ключ - символ строки, а значение - true/false
    stack<char> st;                             //контейнер - стек first in - last out
    string ans = "";
    
    //Заполняем контейнер с последним индексом
    for(int i = 0; i < s.size(); i++)
        lastIdx[s[i]] = i;
    
    //Формируем строку
    for(int i = 0; i < s.size(); i++){          //пройдемся по строке
        char ch = s[i];                         //текущий символ строки
        if (visited[ch])                        //если значение текущего символа true, то
            continue;                           //переходим в конец итерации

        //Удаляем символ из стека, если он меньше (лексиграфически), чем текущий символ
        while(!st.empty() && ch < st.top() && i < lastIdx[st.top()]){
            visited[st.top()] = false;
            st.pop();
        }
        st.push(ch);                            //добавляем текущий символ в стек
        visited[ch] = true;
    }

    while(!st.empty()){                         //пока стек не пустой
        ans += st.top();                        //дополняем в результирующую строку верхний элемент стека
        st.pop();                               //удаляем верхний элемент стека
    }
    reverse(ans.begin(), ans.end());            //переворачиваем строку
    return ans;
}

int main()
{
    string s = "cbacdcbc";
    cout<<removeDuplicateLetters(s);
    return 0;
}