#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Функция сортировки элементов на диагонали
vector<vector<int>> diagonalSort(vector<vector<int>>& mat){
    int r = mat.size();                             //количество строк в матрице
    int c = mat[0].size();                          //количество столбцов в матрице
    int rowIndex = 0;                               //индекс строки для диагонали
    int colIndex;                                   //индекс столбца для диагонали
    int numberOfDiagonals = r+c-1;                  //количество диагонали

    for(int i=1;i<=numberOfDiagonals;++i){
        vector<int> diagonal;                       //вектор для диагональных элементов       
        
        //Подсчитываем как должны меняться индексы строк и столбцов
        if(i<=c){
            colIndex = c-i;
        }
        else{
            rowIndex++;
            colIndex = 0;
        }
        
        //Диагональные элементы матрицы перемещаем в вектор
        for(int i=rowIndex,j=colIndex;i<r && j<c;++i,++j){
            diagonal.push_back(mat[i][j]);
        }
        
        //Сортируем элементы вектора
        sort(diagonal.begin(),diagonal.end());        
    
        //Возвращаем диагональные элементы матрицы обратно из вектора
        for(int i=rowIndex,j=colIndex,k=0;i<r && j<c;++i,++j,++k){
            mat[i][j] = diagonal[k];
        }
    }
    return mat;
}

int main(int, char**){
    std::vector<std::vector<int>> mat = {{3,3,1,1},{2,2,1,2},{1,1,1,2}};

    for(int i=0; i<mat.size(); i++){
        for (int j=0; j<mat[0].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    std::vector<std::vector<int>> res;
    res = diagonalSort(mat);

    for(int i=0; i<res.size(); i++){
        for (int j=0; j<res[0].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}