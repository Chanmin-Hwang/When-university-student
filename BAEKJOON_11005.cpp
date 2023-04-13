#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int B,N,k;
    cin >> N >> B;
    string str;
    while (N > 0){
        k = N%B;
        switch(k){
            case (10) :
                str.append("A");
                break;
            case (11) :
                str.append("B");
                break;
            case (12) :
                str.append("C");
                break;
            case (13) :
                str.append("D");
                break;
            case (14) :
                str.append("E");
                break;
            case (15) :
                str.append("F");
                break;
            case (16) :
                str.append("G");
                break;
            case (17) :
                str.append("H");
                break;
            case (18) :
                str.append("I");
                break;
            case (19) :
                str.append("J");
                break;
            case (20) :
                str.append("K");
                break;
            case (21) :
                str.append("L");
                break;
            case (22) :
                str.append("M");
                break;
            case (23) :
                str.append("N");
                break;
            case (24) :
                str.append("O");
                break;
            case (25) :
                str.append("P");
                break;
            case (26) :
                str.append("Q");
                break;
            case (27) :
                str.append("R");
                break;
            case (28) :
                str.append("S");
                break;
            case (29) :
                str.append("T");
                break;
            case (30) :
                str.append("U");
                break;
            case (31) :
                str.append("V");
                break;
            case (32) :
                str.append("W");
                break;
            case (33) :
                str.append("X");
                break;
            case (34) :
                str.append("Y");
                break;
            case (35) :
                str.append("Z");
                break;
            default :
                str += (k+'0');
                break;
        }
        N /= B;
    }
    reverse(str.begin(),str.end());
    cout << str+"\n";
    return 0;
}