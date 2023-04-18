#include <iostream>
using namespace std;

int main(){
    int first = 1,second = 1;
    while (1){
        cin >> first >> second;
        
        if ((first == 0) && (second == 0)){
            break;
        }
        
        if (second % first == 0){
            cout << "factor";
        }
        
        else if (first % second == 0){
            cout << "multiple";
        }
        
        else {
            cout << "neither";
        }
        cout << '\n';
    }

    return 0;
}