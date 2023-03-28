#include <iostream>
using namespace std;

int main(){
    int a,b,x,y,z;
    cin >> a >> b;
    x = b%10;
    b /= 10;
    y = b%10;
    b /= 10;
    z = b%10;
    b /= 10;
    cout << a*x << endl << a*y << endl << a*z << endl << a*x+a*y*10+a*z*100 << endl;
    return 0;
}