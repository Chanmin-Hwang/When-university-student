#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int B,len,n=0;
    string N;
    cin >> N >> B;
    len = N.length();
    for (int i=0;i<=len;i++){
        switch(N[i]){
            case ('0'):
                n += 0*pow(B,len-i-1);
                break;
            case ('1'):
                n += 1*pow(B,len-i-1);
                break;
            case ('2'):
                n += 2*pow(B,len-i-1);
                break;
            case ('3'):
                n += 3*pow(B,len-i-1);
                break;
            case ('4'):
                n += 4*pow(B,len-i-1);
                break;
            case ('5'):
                n += 5*pow(B,len-i-1);
                break;
            case ('6'):
                n += 6*pow(B,len-i-1);
                break;
            case ('7'):
                n += 7*pow(B,len-i-1);
                break;
            case ('8'):
                n += 8*pow(B,len-i-1);
                break;
            case ('9'):
                n += 9*pow(B,len-i-1);
                break;
            case ('A'):
                n += 10*pow(B,len-i-1);
                break;
            case ('B'):
                n += 11*pow(B,len-i-1);
                break;
            case ('C'):
                n += 12*pow(B,len-i-1);
                break;
            case ('D'):
                n += 13*pow(B,len-i-1);
                break;
            case ('E'):
                n += 14*pow(B,len-i-1);
                break;
            case ('F'):
                n += 15*pow(B,len-i-1);
                break;
            case ('G'):
                n += 16*pow(B,len-i-1);
                break;
            case ('H'):
                n += 17*pow(B,len-i-1);
                break;
            case ('I'):
                n += 18*pow(B,len-i-1);
                break;
            case ('J'):
                n += 19*pow(B,len-i-1);
                break;
            case ('K'):
                n += 20*pow(B,len-i-1);
                break;
            case ('L'):
                n += 21*pow(B,len-i-1);
                break;
            case ('M'):
                n += 22*pow(B,len-i-1);
                break;
            case ('N'):
                n += 23*pow(B,len-i-1);
                break;
            case ('O'):
                n += 24*pow(B,len-i-1);
                break;
            case ('P'):
                n += 25*pow(B,len-i-1);
                break;
            case ('Q'):
                n += 26*pow(B,len-i-1);
                break;
            case ('R'):
                n += 27*pow(B,len-i-1);
                break;
            case ('S'):
                n += 28*pow(B,len-i-1);
                break;
            case ('T'):
                n += 29*pow(B,len-i-1);
                break;
            case ('U'):
                n += 30*pow(B,len-i-1);
                break;
            case ('V'):
                n += 31*pow(B,len-i-1);
                break;
            case ('W'):
                n += 32*pow(B,len-i-1);
                break;
            case ('X'):
                n += 33*pow(B,len-i-1);
                break;        
            case ('Y'):
                n += 34*pow(B,len-i-1);
                break;
            case ('Z'):
                n += 35*pow(B,len-i-1);
                break;
        }
    }
    cout << n << '\n';
    return 0;
}