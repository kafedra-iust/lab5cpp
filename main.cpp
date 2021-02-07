#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main ()
{
    srand(time (0)); // генерація випадкових чисел
    // динамічне створення двовимірного масиву дійсних чисел на десять елементів
    float **ptrarray = new float* [2]; // два рядки в масиві
    for (int count = 0; count <2; count ++)
        ptrarray [count] = new float [5]; // і п'ять стовпців
    // заповнення масиву
    for (int count_row = 0; count_row <2; count_row ++)
        for (int count_column = 0; count_column <5; count_column ++)
            ptrarray [count_row] [count_column] = (rand ()% 10 + 1) / float ((rand ()% 10 + 1)); // заповнення масиву випадковими числами з масштабуванням від 1 до 10
    // вивід масиву
    for (int count_row = 0; count_row <2; count_row ++)
    {
        for (int count_column = 0; count_column <5; count_column ++)
            cout << setw (5) << setprecision (2) << ptrarray [count_row] [count_column] << "";
        cout << endl;
    }
    // видалення двовимірного динамічного масиву
    for (int count = 0; count <2; count ++)
        delete [] ptrarray [count];

    return 0;
}