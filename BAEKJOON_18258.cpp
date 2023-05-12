#include <iostream>
#include <queue>
using namespace std;

int main(){
    int N,X;
    cin >> N;
    queue <int> q;

    cin.tie(NULL);
    ios_base :: sync_with_stdio(false);
    
    while (N > 0){
        string command;
        cin >> command;

        if (command.compare("push") == 0){
            cin >> X;
            q.push(X);
        }
        
        else if (command.compare("pop") == 0){
            if (q.size() == 0){cout << "-1\n";}

            else {
                X = q.front();
                q.pop();
                cout << X << '\n';
            }
        }
        
        else if (command.compare("size") == 0){cout << q.size() << '\n';}
        
        else if (command.compare("empty") == 0){cout << q.empty() << '\n';}
        
        else if (command.compare("front") == 0){
            if (q.size() == 0){cout << "-1\n";}

            else {cout << q.front() << '\n';}           
        }
        
        else if (command.compare("back") == 0){
            if (q.size() == 0){cout << "-1\n";}

            else {cout << q.back() << '\n';}           
        }
        N--;
    }
    return 0;
}