/*Создать программу, которая подсчитывает сколько раз употребляется слово в тексте (без учета регистра).
Текст и слово вводится вручную.*/

#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
        SetConsoleOutputCP( CP_UTF8 );

        int count = 0, i;
        string text, j, word;

        cout << " Введите текст (ENG): " << endl;
        getline(cin, text);

        while ( cout << " Введите слово: " && getline(cin, word) && !word.empty() ) {
                text += ' ';

                for ( i = 0; i < text.length(); i++ )
                {
                        j += text[i];
                        if ( !(isalpha(text[i])) )
                        {
                                j.pop_back();
                                if ( j != "" )
                                        if ( j == word ) count++;
                                j = "";
                        }
                }
                cout << " Слово  " << word << "  употребляется " << count << " раз" << endl;
                count = 0;
        }

        return 0;
}
