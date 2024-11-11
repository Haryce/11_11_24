#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int array[3][4] = {
  {1, 2, 0, 4},
  {5, 0, 7, 8},
  {0, 9, 10, 11}
    };
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] == 0) {
                count++;
            }
        }
    }
    cout << "Количество нулей в массиве: " << count << endl;

    return 0;
}
