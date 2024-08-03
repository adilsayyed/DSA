#include <iostream>
using namespace std;

void PrintNtime(int N){
    if (N == 0)
    {
        return;
    }

    PrintNtime(N-1);
    cout << N << " ";


    
}