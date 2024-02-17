#include <iostream>
#include <vector>
#include <algorithm>

//Функция обработки очередей
std::vector<int> processQueries(std::vector<int>& queries, int m) {
    std::vector<int> p;
    //Заполняем вектор p от 1 до m
    for (int i=1; i<=m; i++){
        p.push_back(i);
    }
    std::vector<int>::iterator it;
    for (int j=0; j<queries.size(); j++){                   //пройдемся по вектору queries
        int el = queries[j];                                //запоминаем текущий элемент вектора queries
        it = std::find(p.begin(), p.end(), el);             //найдем элемент вектора queries в векторе p
        if (it != p.end()){                                 //если нашли, то
            int idx = it - p.begin();                       //посчитаем индекс элемента в векторе p
            queries[j] = idx;                               //запишем его в вектор queries на место искомого элемента
            p.erase(it);                                    //удалим искомый элемент из вектора p
            p.insert(p.begin(), el);                        //запишем текущий элемент вектора queries в начало вектора p
        }
    }
    return queries;
}

int main(int, char**){
    std::vector<int> queries = {3,1,2,1};
    std::vector<int> res; 
    int m = 5;
    res = processQueries(queries, m);
    for (auto n : res){
        std::cout << n <<" ";
    }
}