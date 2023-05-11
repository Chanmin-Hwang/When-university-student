#include <iostream>
#include <list>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(){
    list <int> li;
    string p,str;
    int T,n,x,flag,R,o; // T: 테스트 케이스 , n: 원소개수,x: 원소, flag : error 여부, R: 뒤집기 여부

    
    cin >> T;
    cin.ignore();

    for (int i=0;i<T;i++){
        flag = 1;
        R = 0;

        getline(cin,p);
        cin >> n;
        cin.ignore();
        cin >> str;
        cin.ignore();
        str.erase(str.length()-1,1);
        str.erase(0,1);

        stringstream sstream(str);// 인터넷 보고 가져온 것
        string word;

        while(getline(sstream, word, ',')){ // 콤마로 구분
            n = stoi(word); // 문자열 숫자로 바꾸기
            li.push_back(n);
        }        

        for (o=0;o<p.length();o++){
            if (p[o] == 'R'){
                if (R){R=0;}
                else {R=1;}
            }

            else if(p[o] == 'D'){
                if (li.size() == 0){
                    flag = 0;
                    break;
                }

                else {
                    if (R) {li.pop_back();} // 뒤집기에 따라 분기
                    else {li.pop_front();}
                }
            }
        }

        if (flag){
            cout << '[';

            for (o=li.size();o>0;o--){
                if (R){
                    x = li.back();
                    li.pop_back();
                }
                else {
                    x = li.front();
                    li.pop_front();
                }
                cout << x;

                if (o != 1) {cout << ',';}
            }
            cout << "]\n";
        }

        else{cout << "error\n";}
    }
    return 0;
}