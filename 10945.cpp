#include <iostream>
#include<string>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
string sentence;
while(getline(cin,sentence) && sentence != "DONE"){

    string only_char = "";
    string  only_char_reverse;

    for(int i=0; i<sentence.size(); i++)
        if(isalpha(sentence[i])) only_char += tolower(sentence[i]);

    only_char_reverse = only_char;

    reverse(only_char.begin(), only_char.end());

    if(only_char == only_char_reverse) printf("You won't be eaten!\n");

    else  printf("Uh oh..\n");

    }
return 0;
}
