#include <iostream>
#include <list>

using namespace std;

int main()
{
    //Имеется два списка
    list <int> l1 = {2, 4, 3};
    list <int> l2 = {5, 6, 4};
    
    //Пройдем с конца списка в начало, при этом составляем первое число из каждого элемента списка
    int res1 = 0;
    for (auto it = l1.rbegin(); it != l1.rend(); ++it){
        res1 = res1*10+*it;
    }
    cout<<res1<<endl;
    
    //Пройдем с конца списка в начало, при этом составляем второе число из каждого элемента списка
    int res2 = 0;
    for (auto it = l2.rbegin(); it != l2.rend(); ++it){
        res2 = res2*10+*it;
    }
    cout<<res2<<endl;
    
    int res3 = res1 + res2;         //третье число получаем путем сложения первых двух
    cout<<res3<<endl;

    int ost = 0;                    //остаток от деления
    list <int> l3;                  //результирующий список
    int count = 1;                  //счетчик количества цифр в переменной

    //Цикл, в котором переворачиваем число и записываем его в результрующий список
    while(res3)
    {
        ost = ost*10+res3%10;       //считаем остаток
        int res = 0;
        if (count != 1)             //если это не первая цифра, то
            res = ost%10;           //остаток делим на 10, чтобы в результат записать остаток от деления
        else res = ost;             //иначе сразу записываем остаток от деления
        l3.push_back(res);          //заносим результат в список
        res3 /= 10;
        count++;
    }

    //Вывод списка на печать
    for (auto el: l3)
        std::cout << el << " ";

    return 0;
}