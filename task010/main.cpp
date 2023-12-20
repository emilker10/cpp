#include <iostream>
#include <vector>
#include <set>

//Функция, возвращающая пересечение двух векторов
std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::set <int> st;
    std::set <int> st2;
    std::set <int> st_res;
    std::vector<int> res;
    
    //Перепишем вектора в контейнеры set - автоматически сортирует добавляемые элементы в порядке возрастания. 
    //Но при добавлении одинаковых значений, set будет хранить только один его экземпляр.
    for (int i=0; i<nums1.size(); i++){
        st.insert(nums1[i]);
    }
    for (int j=0; j<nums2.size(); j++){
        st2.insert(nums2[j]);
    }
    
    //Пройдемся по одному из контейнеров и если его элемент не найден в другом, то формируем новый контейнер с этим значениями
    for(auto k : st2){
        if (st.find(k) != st.end()){
            st_res.insert(k);
        }
    }

    //Заполняем результирующий вектор
    for(auto z : st_res)
        res.push_back(z);
    
    return res;
}


int main ()
{
    std::vector<int> a = {4,9,5};
    std::vector<int> b = {9,4,9,8,4};
    std::vector<int> res = {};
    res = intersection(a,b);
    //Выводим на вектор на печать
    for (int i=0; i<res.size(); i++){
        std::cout<<res[i]<<" ";
    }
    return 0;
}
