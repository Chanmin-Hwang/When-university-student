#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  double d;
  cout<<fixed;
  cout.precision(6);
  double sum1 = 0,sum2 = 0;
  for (int i=0;i<20;i++){
    cin >> str >> d >> str;
    if (str.compare("P") != 0){
      sum1 += d;
    }
    if (str.compare("A+") == 0){
      sum2 += 4.5*d;
    }
    if (str.compare("A0") == 0){
      sum2 += 4.0*d;
    }
    if (str.compare("B+") == 0){
      sum2 += 3.5*d;
    }
    if (str.compare("B0") == 0){
      sum2 += 3.0*d;
    }
    if (str.compare("C+") == 0){
      sum2 += 2.5*d;
    }
    if (str.compare("C0") == 0){
      sum2 += 2.0*d;
    }
    if (str.compare("D+") == 0){
      sum2 += 1.5*d;
    }
    if (str.compare("D0") == 0){
      sum2 += 1.0*d;
    }
    if (str.compare("F") == 0){
      sum2 += 0.0*d;
    }
  }
  cout << sum2/sum1 << '\n';
  return 0;
}
