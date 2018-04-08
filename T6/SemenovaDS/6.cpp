#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int dec, bin=0, j;
 
    cin >> dec;
    for(j=0; dec>0; j++)
    {
        bin+=(dec%2)*pow(10.0,j);
        dec/=2;
    }
 
    cout <<bin<< endl;
    system("pause");
    return 0;
}

