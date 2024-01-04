#include <iostream>
#include <string>
#include <unordered_set>

//Функция, ищущая самую длинную подстраку без повторения символов
int lengthOfLongestSubstring(std::string s) {
    int left=0;
    int right =0;
    std::unordered_set<char> stt;           //контейнер - неупорядоченное множество символов
    int len =0;
    while(right!=s.size()){                 //пока не достигли конца строки
        char temp =s[right];
        char temp2= s[left];
        if(stt.find(temp)==stt.end()){      //ищем символ во множестве, и если его нет, то
            stt.insert(temp);               //добавляем символ во множество
            right++;
        }
        else{                               //если символ есть во множестве          
            stt.erase(temp2);               //удаляем его оттуда
            left++;
        }
        len=std::max(len,right-left);       //поиск наиболее длинной подстрочки
    }
    return len;
}

int main(int, char**){
    std::string s = "abcabcbb";
    std::cout<<lengthOfLongestSubstring(s);
}
