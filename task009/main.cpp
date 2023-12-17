#include <iostream>
#include <vector>
#include <set>

std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
    std::multiset<int> st;              //контейнер, содержащий элементы в сортированом виде, но хранит повторяющиееся элементы
    std::vector<int> res;               //вектор с результатом
    for (int i=0;i<nums.size();i++){    //пройдемся по вектору чисел
        st.insert(nums[i]);             //добавим каждый из них в контейнер
    }
    for (int j=1;j<=st.size();j++){     //пройдемся по контейнер
        if (st.find(j)==st.end()){      //проверяем наличие текущего порядкового номера в контейнере
            res.push_back(j);           //если не находим, то добавляем в результрующий вектор
            std::cout<<j<<" ";
        }
    }
    return res;
}

int main()
{
    std::vector<int> a = {4,3,2,7,8,2,3,1};
    findDisappearedNumbers(a);

    return 0;
}