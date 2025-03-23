#include <iostream>
#include <cstring>
using namespace std;

char word[100];
char newWord[100];
int main()
{
    cin >> word;
    int len = strlen(word);
    for (int i = len - 1; i >= 0; i--)
    {
        newWord[len - i - 1] = word[i];
    }
    cout << newWord;
}