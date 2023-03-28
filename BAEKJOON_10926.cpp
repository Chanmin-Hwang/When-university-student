#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    s = s.append("??!");
    cout << "" << s << endl;
    return 0;
}