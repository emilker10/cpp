#include <iostream>
#include <vector>

int buyChoco(std::vector<int>& prices, int money) {
    int ost = 0;
    bool isCalc = false;
    for (int i=0; i<prices.size()-1; i++){                  //пройдемся по каждому элементу вектора начиная с 1го до предпоследнего
        for (int j=i+1; j<prices.size(); j++){              //пройдемся по каждому элементу вектора начиная с 2го до последнего
            if (prices[i]+prices[j]<=money){                //если сумма стоимости двух шоколадок меньше имеющихся денего (можем купить 2 штуки), то
                if ((money-(prices[i]+prices[j]))>=ost){    //сравнить их остаток от покупки с прошлым остатком (нужно выбрать так, чтобы больше сэкономить)
                    ost = money-(prices[i]+prices[j]);      //если получилось сэкономить, то перезаписать новый остаток
                    isCalc = true;                          //ставим флаг, сообщающий о том, что вычисления были проведены, покупка состоялась
                }
            }
        }
    }
    if (isCalc)                                             //если покупка состоялась
        return ost;                                         //у нас есть наибольший остаток
    else return money;                                      //иначе у нас осталась первоначальная сумма денег
}

int main(){
    std::vector<int> prices = {3,2,3};                      //вектор цен на шоколадки
    std::cout<<buyChoco(prices, 3);
    return 0;
}
