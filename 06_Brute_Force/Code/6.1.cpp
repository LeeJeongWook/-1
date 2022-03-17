#include <iostream>

using namespace std;

// 필수 조건: n >= 1
// 결과: 1부터 n까지의 합을 반환한다.
int sum(int n){
    int ret = 0;
    for(int i = 1; i <= n; ++i)
        ret += i;
    return ret;
}
// 필수 조건: n >= 1
// 결과: 1부터 n까지의 합을 반환한다.
int recursiveSum(int n){
    if(n==1) return 1;  // 더 이상 쪼개지지 않을 때
    return n + recursiveSum(n-1);
}

int main(){
    int n = 10;

    cout << sum(n) << endl;
    cout << recursiveSum(n) << endl;

    return 0;
}