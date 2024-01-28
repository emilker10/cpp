#include <iostream>
#include <string>

//Функция удаляющая слова в строке после заданного количетсва пробела
std::string truncateSentence(std::string s, int k) {
    int count = 0;                      //счетчик количество пробелов в строке
    int symb_num = 0;                   //номер символа в строке
    std::string t = "";
    while (symb_num!=s.size()){         //запускаем цикл прохода по строке пока не достигнем ее конца
        if (s[symb_num] == ' '){        //если текущий символ в строке равен пробелу, то
            count++;                    //итерируем счетчик
            if (count == k)             //если счетчик равен заданному количеству пробелов, то
                break;                  //выходим из цикла
        }
        t += s[symb_num];               //переписываем в результирующую строку текущий символ
        symb_num++;                     //итерируем номер текущего символа
    }
    return t;
}

int main(int, char**){
    std::string s = "Hello how are you Contestant";
    int k = 4;
    std::cout<<truncateSentence(s, k);
    return 0;
}
