#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер матрицы (n): ";
    cin >> n;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    cout << "Матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int max = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if ((i >= n / 4 && i <= 3 * n / 4) && (j >= n / 4 && j <= 3 * n / 4)) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }
    }

    cout << "Максимальное значение в темных зонах: " << max << endl;
}
