#include <unordered_set>
#include <iostream>
using namespace std;

int main() {
    unordered_set<int> us;
    us.insert(1); // 삽입
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);
    us.insert(6);

    // 순회1
    unordered_set<int>::iterator iter;
    for(iter = us.begin(); iter != us.end(); iter++) {
        cout << *iter << "\\n";
    }

    cout << "/////\\n";
    cout << us.size() << "\\n"; // 6 출력
    us.insert(1);
    cout << us.size() << "\\n"; // 6 출력
    cout << us.erase(2) << "\\n"; // 1 출력, 2는 set에 들어있었으므로 지운 후 1 출력
    cout << us.erase(7) << "\\n"; // 0 출력, 7는 set에 들어있지 않았으므로 0 출력

    // find : 값을 찾고 iterator 반환, 값이 없다면 end () 반환
    if(us.find(3) != us.end()) {
        cout << "find 3\\n";
    }
    if(us.find(2) == us.end()) {
        cout << "2 already erased\\n";
    }

    cout << us.count(1) << "\\n"; // count : 해당 원소 몇개인지 -> 중복허용 없으므로 사실상 0 아니면 1

    // 순회2
    cout << "/////\\n";
    for(auto it : us) { // range-based for loop
        cout << it << "\\n";
    }

    return 0;
}