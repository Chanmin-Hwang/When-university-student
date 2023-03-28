#include <iostream>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    cout<<fixed;
    cout.precision(10);
    cout << A/(long double)B << endl;
    return 0;
}