#include <iostream>
#include <cstdlib>
using namespace std;

int compare(const void *p,const void *q){return *(int *)p-*(int *)q;}

int main(){
    int *abc = new int[3];
    for (int i=0;i<3;i++)cin >> abc[i];
    qsort(abc,3,4,compare);
    cout << abc[1] << '\n';
    return 0;
}