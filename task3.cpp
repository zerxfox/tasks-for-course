/*Создать программу, которая будет:
- подсчитывать количество слов в предложении

- выводить их в отсортированном виде
Комментарий: не даны условия сортировки.

- делать первую букву каждого слова заглавной.

Предложение вводится вручную. (Разделитель пробел (“ ”)).*/

#include <iostream>
#include <windows.h>
#include <cctype>

using namespace std;

int main(int argc, char** argv)
{
        SetConsoleOutputCP( CP_UTF8 );

        int count = 1, i, j, g=0;
        char input[256];
        char iinput[256];
        char tmp;
        char k;
        cout << " Введите предложение(ENG): " << endl;
        cin.getline(input, 256);

        for ( i = 0; i<strlen (input); i++ ) {
                iinput[i] = input[i];
                if ( input[i] == ' ' ) count++;
        }
        cout << " В предложении " << count << " слов." << endl;


        for ( i = 0; i < strlen (input); i++ )
        {
                input [i] = toupper(input[i]);
                while ( input[i]!=' ' && i < strlen (input) ) i++;
        }
        cout << " Заглавия первых букв каждого слова: "<< input << endl;

        return 0;
}
