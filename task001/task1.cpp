#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int a[3][3] = {{9,5,3},{0,7,-1},{-5,2,9}};                  //начальная матрица с данными
    int b[3][3];                                                //конечная матрица с результатом
    for (int i=0;i<3;i++){                                      //пройдемся по элементам матрицы
        for (int k=0;k<3;k++){
            sum = 0;
            if (i==0){                                          //шагая по строкам,
                for (int j=0;j<3;j++){                          //мы будем еще раз проходить по столбцам матрицы,
                    if (j==k)                                   //чтобы суммировать только те элементы столбцов, которые равны текущему элементу,
                        sum = sum+a[i+1][j]+a[i+2][j];          //проще говоря, суммируем все горизонтальные и вертикальные элементы,
                    else                                        //находящиеся на текущем элементе матрицы, кроме него самого
                        sum = sum+a[i][j];
                }
            }
            if (i==1){
                for (int j=0;j<3;j++){
                    if (j==k)
                        sum = sum+a[i-1][j]+a[i+1][j];
                    else
                        sum = sum+a[i][j];
                }
            }
            if (i==2){
                for (int j=0;j<3;j++){
                    if (j==k)
                        sum = sum+a[i-1][j]+a[i-2][j];
                    else
                        sum = sum+a[i][j];
                }
            }
            b[i][k] = sum;                                      //вставим результат суммы на текущие координаты считаемого элемента, но в новыой матрице 
        }
    }
    //Вывод результирующей матрицы на печать
    for (int i=0;i<3;i++){
        for (int k=0;k<3;k++){
            std::cout<<b[i][k]<<" ";
            if (k==2)
                std::cout<<std::endl;
        }
    }
    return 0;
}