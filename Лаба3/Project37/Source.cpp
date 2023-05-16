#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "windows.h"
using namespace std;

int main()
{
    int A=2;
    int B=21;
    int D;
    int arr[100];
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 101;
        cout << arr[i] << " ";
    }
    cout << endl;

   
    //-------------------------------------------
    int* barr = new int[B - A + 1];
    for (int i = 0; i < B - A + 1; i++)
    {
        int x = arr[A + i];
        if (x > 0) barr[i] = pow(x, 2);
        else if (x >= -1) barr[i] = x;
        else barr[i] = 2 * sqrt(abs(x - 6));
    }
    //-------------------------------------------
    for (int i = A; i <= B; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < B - A + 1; i++)
    {
        cout << barr[i] << " ";
    }
    cout << endl << endl;


    return 0;
}