/*Создать программу, которая будет вычислять и выводить на экран НОК (наименьшее общее кратное) и НОД (наибольший общий делитель) двух целых чисел, введенных пользователем.
   Если пользователь некорректно введёт хотя бы одно из чисел, то сообщать об ошибке.*/

#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
        SetConsoleOutputCP( CP_UTF8 );

        double a, b;
        int i;

        cout << " Введите два целых числа: ";
        cin >> a >> b;

        bool flag = false;
        if( a == int(a)  && b == int(b) ) flag=true;
        if( flag == true )
        {
                for ( i = a; i > 0; i-- ) {
                        if ( int(a) % i == 0 && int(b) % i == 0 ) {
                                cout << endl << " НОД = " << i << endl;
                                break;
                        }
                }
                cout << " НОК = " << int(a) / i * int(b) << endl;
        } else { cout << endl << " Вы некорректно ввели числа, повторите снова. " << endl; }
        
        return 0;
}
