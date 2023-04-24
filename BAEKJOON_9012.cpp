#include <iostream>
#include <stack>
using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();
    for (int i=0;i<T;i++){
        char ch = cin.get();
        stack <char> stack;
        while(ch != '\n'){
            if ((ch == ')') && (!stack.empty()) && (stack.top() == '(')) stack.pop();
            else stack.push(ch);
            ch = cin.get();
        }
        if(stack.empty()) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}