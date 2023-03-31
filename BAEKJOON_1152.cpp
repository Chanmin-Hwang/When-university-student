#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int cnt = 0;
    string :: size_type len = str.length();

    for (string :: size_type i=0;i<len;i++){
        if (str[i] == ' '){
            cnt++;
        }
    }

    if (str[0] == ' '){
        cnt--;
    }
    if (str[len-1] == ' '){
        cnt--;
    }

    cout << cnt+1 << '\n';
}