#include <iostream>
#include <stack>
using namespace std;

int main(){
    string str;
    stack <char> stck;
    cin >> str;
    int answer = 0;
    for (int i=0;i<str.length();i++){
        if ((str[i] == ')') && (str[i-1] == '(')){
            stck.pop();
            answer += stck.size();
        }
        else if ((str[i] == ')') && (stck.top() == '(')){
            answer++;
            stck.pop();
        }
        else stck.push('(');
    }
    cout << answer << '\n';
    return 0;
}