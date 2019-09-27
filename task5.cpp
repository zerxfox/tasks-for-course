/*Создать программу, которая в последовательности от 0 до N, находит все числа-палиндромы (зеркальное значение равно оригинальному). Длина последовательности N вводится вручную и не должна превышать 100*/

#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
        SetConsoleOutputCP( CP_UTF8 );

        int number, i, j;
        const int N = 100;

        cout << " Числа-палиндромы: " << endl;
        for( i = 1; i <= N; i++ )
        {
                j = i; number = 0;
                while(j)

                        number = number * 10 + (j%10),
                        j /= 10;

                if( number == i ) cout << i << endl;
        }
        
        return 0;
}
