#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if ((a == b) && (b == c)){
        cout << 10000+a*1000 << endl;
    }
    else if ((a == b) && (a != c)){
        cout << 1000+b*100 << endl;
    }
    else if ((b == c) && (b != a)){
        cout << 1000+c*100 << endl;
    }
    else if ((a == c) && (a != b)){
        cout << 1000+c*100 << endl;
    }
    else {
        int max = 0;
        if (max < a){
            max = a;
        }
        if (max < b){
            max = b;
        }
        if (max < c){
            max = c;
        }
        cout << 100*max << endl;
    }
    return 0;
}