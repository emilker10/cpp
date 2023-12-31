#include <iostream>
#include <vector>

int main(int, char**){
    std::vector<std::string> s = {"h","e","l","l","o"}; //входная строка
    std::string buf="";                                 //буфер
    for (int i=0;i<s.size()/2;i++){                     //пройдем вектор строк до его середины
        buf = s[i];                                     //в буфер записываем текущий элемент
        s[i] = s[s.size()-1-i];                         //соответствующий элемент с конца вектора записываем на место первого
        s[s.size()-1-i] = buf;                          //на соответствующий элемент с конца вектора записываем значение из буфера
    }
    //Вывод результата на печать
    for (int j=0;j<s.size();j++){
        std::cout<<s[j]<<std::endl;
    }
    return 0;
}