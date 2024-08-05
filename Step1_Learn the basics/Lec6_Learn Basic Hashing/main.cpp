#include <iostream>
#include "Character_Hashing.cpp"
using namespace std;

int main(){
    string a;
    char ch;
    cin >> a;
    cin >> ch;
    cout << char_occur(a, ch);

    return 0;
}