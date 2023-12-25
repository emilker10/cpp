#include <iostream>

//Функция определения возможности создания одной строки с помощью символов из другой
bool canConstruct(std::string ransomNote, std::string magazine) {
    for (int i=0;i<ransomNote.size();i++){                          //для каждого символа из строки ransomNote
        if (magazine.find(ransomNote[i]) != std::string::npos){     //если найдется такой символ в строке magazine, то
            magazine.erase(magazine.find(ransomNote[i]),1);         //удалить его из строки magazine
        }
        else return false;                                          //если не нашлось, то вернуть false
    }
    return true;                                                    //вернуть true если прошли всю строку ransomNote до конца
}

int main()
{
    std::cout<<canConstruct("aa", "aab");
    return 0;
}