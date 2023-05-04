#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int *arr = new int[9];
    int k,sum = 0,idx=0;
    int *answer = new int[7];
   
    for (int i=0;i<9;i++){
        cin >> k;
        arr[i] = k;
        sum += k;
    }

    for (int i=0;i<9;i++){
        for (int o=i+1;o<9;o++){
                if (sum - 100 == arr[i]+arr[o]){
                    for (int t=0;t<9;t++){
                        if ((t!=i)&&(t!=o)){
                            answer[idx++] = arr[t];
                        }
                    }
                }
            }
        }
    
    sort(answer,answer+7);
    for (int i=0;i<7;i++){
        cout << answer[i] << '\n';
    }
    return 0;
}