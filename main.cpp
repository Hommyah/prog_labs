#include <iostream>

using namespace std;

//int Sum(int i, int j, int summ[i], int num[i][j]) {
//    return (summ[i] += num[i][j]);
//}

int main() {

    int Matr[3][4];
    int i, j;
    int Mas[3] = {0};


    cout << "Введите элементы матрицы" << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            cin >> Matr[i][j];

    cout << "Матрица: " << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            cout << Matr[i][j] << " ";
        cout << "\n";
    }

//    for (i=0; i<3; i++) {
//        for (j=0;j<4;j++)
//            Sum(i,j,Mas[i],Matr[i][j]);
//    }
    for (i=0; i<3; i++) {
        for (j=0;j<4;j++)
            Mas[i] += Matr[i][j];
    }

    cout << "Массив: ";
    for (i=0; i<3; i++)
    cout << Mas[i] << " ";

    return 0;
}