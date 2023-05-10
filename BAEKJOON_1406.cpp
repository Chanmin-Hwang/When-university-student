#include <iostream>
#include <list>
using namespace std;

int main(){
    list <char> li;
    string str;
    cin >> str;

    int cnt;
    cin >> cnt;
    cin.ignore();

    for (int i=0;i<str.length();i++){
        li.push_back(str[i]);
    }
    list <char> :: iterator it = li.end();

    for (int i=0;i<cnt;i++){
        str = "";
        getline(cin,str);
        if ((str[0] == 'L') && (it != li.begin())){it--;}

        else if ((str[0] == 'D') && (it != li.end())){it++;}

        else if ((str[0] == 'B') && (it != li.begin())){
            it--;
            it = li.erase(it);    
        }

        else if (str[0] == 'P'){li.insert(it,str[2]);}
    }

    for (it = li.begin();it != li.end();it++){cout << *it;}

    cout << '\n';

    return 0;
}