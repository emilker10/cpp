#include <iostream>
#include <vector>
#include <algorithm>

//Функция считающая максимальную выгоду
int maxProfit(std::vector<int>& prices) {
    int profit = 0;
    int min = prices[0]; 
    for(int i=1;i<prices.size();i++){               //запускаем цикл от первого элемента до последнего
        profit = std::max(profit,prices[i]-min);    //выбираем максимальное число из имеющегося профита и разницы между текущей и минимальной ценой
        min = std::min(prices[i],min);              //выбираем минимальное число между текущей и минимальной ценой
    }
    return profit;
}

int main(int, char**){
    std::vector<int> prices = {7,1,5,3,6,4};
    std::cout << maxProfit(prices);
}
