/*Создать программу, которая будет сообщать, является ли целое число, введенное пользователем, чётным или нечётным, простым или составным.  Если пользователь введёт не целое число, то сообщать ему об ошибке.*/

#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
        SetConsoleOutputCP( CP_UTF8 );

        int l, b;
        double n;
        bool flag = false;

        cout << " Введите число N: ";
        cin >> n;

        if( n == int(n) ) flag = true;
        if ( flag == true ) {
                if ( (int(n)%2)==0 )
                        cout << " Число чётное, ";
                else
                        cout << " Число нечётное, ";

                for( l = 2; l <= n / 2; l++ )
                        if( int(n)%l == 0 ) break;
                if( l > n /2 )
                        cout << " простое.";
                else
                        cout << " составное.";
        } else { cout << " Ошибка: Число не целое."; }
        
        return 0;
}
