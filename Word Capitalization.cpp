// first character is upper case
/*
input :ApPa ,kpm
output:ApPa, Kpm


*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin >> word;
    word[0] = toupper(word[0]);
    for (int i = 1; i < word.length(); i++)
    {
        word[i];
    }
    cout << word << endl;
    return 0;
}
