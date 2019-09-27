/*Имеется набор вещей, которые необходимо поместить в рюкзак. Рюкзак обладает заданной грузоподъемностью. Вещи в свою очередь обладают двумя параметрами — весом и стоимостью. Цель задачи заполнить рюкзак не превысив его грузоподъемность и максимизировать суммарную ценность груза.*/

#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
        SetConsoleOutputCP( CP_UTF8 );

        int carrying; // грузоподъемность рюкзака
        int i, j, k, temp;
        const int s = 5; // количество вещей
        int weight [s] = {5, 10, 6, 5, 7 }; // вес вещи [5]
        int cost [s] = {3, 5, 4, 2, 6}; // ценность вещи [5]
        int pay = 0; // суммарная стоимость вещей
        int coef [4][s]; // коэффициент
        int sweight = 0; // суммарный вес вещей

        cout << " Введите грузоподъемность рюкзака: ";
        cin >> carrying;

        for ( i = 0; i<s; i++ ) //подсчет коэффициентов
        {
                coef[0][i] = (cost[i] / weight[i]);
                coef[1][i] = weight[i];
                coef[2][i] = cost[i];
                coef[3][i] = i + 1;

        }

        for ( i = 0; i<s; i++ ) //сортировка
        {
                for ( j = 0; j<s; j++ )
                {
                        if ( coef[0][i] > coef[0][j] )
                        {
                                for ( k = 0; k < 4; k++ )
                                {
                                        temp = coef[k][i];
                                        coef[k][i] = coef[k][j];
                                        coef[k][j] = temp;
                                }

                        }
                }
        }

        cout << " Вещи, которые вместились: ";
        for ( i = 0; i<s; i++ )
        {
                sweight += coef[1][i];
                if ( sweight <= carrying )
                {
                        cout << coef[3][i] << " ";
                        pay += coef[2][i];
                }
                else sweight -= coef[1][i];
        }

        cout << endl << " Общий вес: " << sweight << endl << " Суммарная ценность вещей: " << pay << endl;

        return 0;
}
