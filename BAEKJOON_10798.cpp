#include <iostream>
using namespace std;

char word[5][16]; 

int main(){
  for(int i=0; i<5; i++)  
    cin >> word[i];
  
  for(int k=0; k<15; k++)  
  {
    for(int i=0; i<5; i++)  
    {
      if(word[i][k] != '\0')  
        cout << word[i][k];
    }
  }
  return 0;
}