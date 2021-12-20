#include <iostream>

using namespace std;

int Sum(const int matrix_str[], const int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += matrix_str[i];
    }
    return sum;
}

int main() {
    const int str_cnt = 3, col_cnt = 4;
    int Matr[str_cnt][col_cnt];
    int i, j;
    int Mas[str_cnt] = {};

    cout << "Введите элементы матрицы" << endl;
    for (i = 0; i < str_cnt; i++)
        for (j = 0; j < col_cnt; j++)
            cin >> Matr[i][j];

    cout << "Матрица: " << endl;
    for (i = 0; i < str_cnt; i++) {
        for (j = 0; j < col_cnt; j++)
            cout << Matr[i][j] << " ";
        cout << "\n";
    }


    for (i = 0; i < str_cnt; i++) {
        Mas[i] = Sum(Matr[i], col_cnt);
    }

    cout << "Массив: ";
    for (i = 0; i < str_cnt; i++)
        cout << Mas[i] << " ";

    return 0;
}