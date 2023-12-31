#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;                                 //вводим число для обозначения матрицы nxn
    int m, x, n0,m0;
    x = m = n;                              //для удобства сдвига сторон будем использовать m и n, а x - запомнит какое число было введено
    n0 = m0 = 0;                            //для удобства сдвига сторон будем использовать m0 и n0 - обозначают начало сдвига сторон матрицы
    int count = 1;                          //счетчик
    int a[n][m];                            //инициализация матрицы
    while(count<=x*x){                      //пока счетчик не достиг значения n в квадрате, будем шагать отдельно по каждой из 4 сторон матрицы и сдвигать их
        for (int j=m0; j<m; j++){           //пройдемся по верхней стороне матрицы слева-направо
            a[n0][j] = count;
            count++;
        }
        for (int i=n0+1; i<n; i++){         //пройдемся по правой стороне матрицы сверху вниз, но уже начиная со 2го элемента в столбце
            a[i][m-1] = count;
            count++;
        }
        m--;                                //сдвигаем правую сторону 
        for (int j=m-1; j>=m0; j--){        //пройдемся по нижне стороне матрицы справа-налево
            a[n-1][j] = count;
            count++;
        }
        n--;                                //сдвигаем нижнюю сторону
        for (int i=n-1; i>n0; i--){         //пройдемся по левой стороне снизу-вверх
            a[i][m0] = count;
            count++;
        }
        n0++;                               //сдвигаем левую сторону
        m0++;                               //сдвигаем верхнуюю сторону
    }
    //Вывод результирующей матрицы на печать
    for (int i=0;i<x;i++){
        for (int j=0;j<x;j++){
            cout<<a[i][j]<<" ";
            if (j==x-1)
                cout<<endl;
        }
    }
    
    return 0;
}