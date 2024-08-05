#include <iostream>
using namespace std;

int char_occur(string a, char ch){
    int count = 0;
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ch)
        {
            count++;
        }
        
    }
    return count;
    

}