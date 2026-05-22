// Функция должна вернуть пару из индексов максимального элемента в матрице. 
// Если максимальных элементов несколько, то нужно вернуть наименьшую такую пару.
// Формат ввода
// В первой строке двумя числами n и k задан размер матрицы. В последующих n строках вводится числовая матрица в k столбцов.
// Формат вывода
// Индекс строки и столбца максимального элемента в матрице.

#include <bits/stdc++.h>
using namespace std;

pair<size_t, size_t> MatrixArgMax(const vector<vector<int>>& matrix) {
    if (matrix.empty()||matrix[0].empty()) return {0,0};
    size_t max_row = 0;
    size_t max_col = 0;
    int max = matrix[0][0];
    for (size_t i = 0;i<matrix.size();i++) {
        for (size_t j = 0;j<matrix[i].size();j++) {
            if (matrix [i][j]>max) {
                max = matrix [i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    return {max_row,max_col};
}