#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int flag = 1;
    cin >> str;
    int j = str.length()-1,i = 0;
    while (i < j){
        if (str[i++] != str[j--]){
            flag = 0;
            cout << flag <<'\n';
            break;
        }
    }
    if (flag){
        cout << flag << '\n';
    }
    return 0;
}
