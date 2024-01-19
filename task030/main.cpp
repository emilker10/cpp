#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
        //Проверяем правильность строк
        for (int row = 0; row < 9; row++){                      //пройдемся по каждой строке
            unordered_set<char> check_row;                      //создадим неупорядочное множество
            for (int col = 0; col < 9; col++){                  //пройдемся по каждому стобцу
                if (board[row][col] != '.' && check_row.find(board[row][col]) != check_row.end()){  //если значение не равно точке и при этом имеется во множестве, то
                    return false;                               //возвращаем false
                }
                check_row.insert(board[row][col]);              //добавляем значение во множество
            }
        }

        //Проверяем правильность столбцов
        for (int col = 0; col < 9; col++){                      //пройдемся по каждому стобцу
            unordered_set<char> check_col;                      //создадим неупорядочное множество
            for (int row = 0; row < 9; row++){                  //пройдемся по каждой строке
                if (board[row][col] != '.' && check_col.find(board[row][col]) != check_col.end()){  //если значение не равно точке и при этом имеется во множестве, то
                    return false;                               //возвращаем false
                }
                check_col.insert(board[row][col]);              //добавляем значение во множество
            }
        }

        //Проверим правильность подполей 3x3
        vector<unordered_set<char>> check_subbox(9);            //создадим вектор из 9 неупорядочных множеств для каждого подполя
        for (int row = 0; row < 9; row++){                      //пройдемся по каждой строке
            for (int col = 0; col < 9; col++){                  //пройдемся по каждому стобцу
                int loc = (row / 3) * 3 + col / 3;              //по формуле вычислим в какое подполе попадает текущий квадрат судоку
                if (board[row][col] != '.' && check_subbox[loc].find(board[row][col]) != check_subbox[loc].end()){ //если значение не равно точке и при этом имеется во множестве, то
                    return false;                               //возвращаем false
                }
                check_subbox[loc].insert(board[row][col]);      //добавляем значение во множество
            }
        }
        return true;
}

int main(int, char**){
    vector<vector<char>> board =  {{'5','3','.','.','7','.','.','.','.'}
                                  ,{'6','.','.','1','9','5','.','.','.'}
                                  ,{'.','9','8','.','.','.','.','6','.'}
                                  ,{'8','.','.','.','6','.','.','.','3'}
                                  ,{'4','.','.','8','.','3','.','.','1'}
                                  ,{'7','.','.','.','2','.','.','.','6'}
                                  ,{'.','6','.','.','.','.','2','8','.'}
                                  ,{'.','.','.','4','1','9','.','.','5'}
                                  ,{'.','.','.','.','8','.','.','7','9'}};
    
    cout<<isValidSudoku(board);
}
