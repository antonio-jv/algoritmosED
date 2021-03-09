#include <iostream>
#include<fstream>
#include <ctime>
#include "quicksort.h"

using namespace std;
int mitad (int a[], int inicial, int fina);
void ordenar(int a[], int inicial, int fina);
int main()
{

int a[10]={1,44,3,1,9,54,5,6,4,-7};


for(int i=0;i<10;i++){



    cout<<"|"<<a[i]<<"|";

}
cout<<endl;
ordenar(a,0,9);
for(int i=0;i<10;i++){



    cout<<"|"<<a[i]<<"|";

}
    return 0;
}


