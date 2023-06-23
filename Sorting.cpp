template <class E, class K>
int SeqSearch(E *a, const int n, const K& k)
{ // a[1:n]을 왼쪽에서 오른쪽으로 탐색한다.
// a[i]의 키 값이 k와 같은 가장 작은 i를 반환한다.
// 그런 i가 없으면, 0을 반환한다.
int i;
for (i = 1; i <= n && a[i] != k; i++);
if (i > n) return 0;
return i;
}