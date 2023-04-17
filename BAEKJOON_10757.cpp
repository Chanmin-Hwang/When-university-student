#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string A,B;
    cin >> A >> B;

    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());

    if (A.length() > B.length()){
        
        for (int i=0;i<A.length();i++){
            if (i<B.length())
                A[i] += B[i]-'0';
        }

        for (int i=0;i<A.length()-1;i++){
            if (A[i]>'9'){
                A[i+1]++;
                A[i] -= 10;
            }
        }

        if (A[A.length()-1]>'9'){
            A[A.length()-1] -= 10;
            A += "1";
        }
        
        reverse(A.begin(),A.end());
        cout << A+'\n';       
    }

    else {
        
        for (int i=0;i<B.length();i++){
            if (i < A.length())
                B[i] += A[i]-'0';
        }
        
        for (int i=0;i<B.length()-1;i++){
            if (B[i]>'9'){
                B[i+1]++;
                B[i] -= 10;
            }
        }
        
        if (B[B.length()-1]>'9'){
            B[B.length()-1] -= 10;
            B += "1";
        }
        
        reverse(B.begin(),B.end());
        cout << B+'\n';       
    }
    return 0;
}