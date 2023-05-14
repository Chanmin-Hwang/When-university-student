#include<iostream>
#include<queue>
#include<cmath>

using namespace std;

struct cmp {
	bool operator()(int first, int second) {
		if (abs(first) > abs(second)) return true;  
		else if (abs(first) == abs(second)) {
			if (first > second) return true; 
			else return false;
		}
		else return false;
	}
};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	priority_queue<int, vector<int>, cmp> pq;

    int N,x;
    cin >> N;

    for (int i=0;i<N;i++){
        cin >> x;
        if (x != 0){pq.push(x);}

        else {
            if (pq.size() == 0){cout << "0\n";}

            else {
                cout << pq.top() << '\n';
                pq.pop();    
            }
        }
    }


	return 0;
}