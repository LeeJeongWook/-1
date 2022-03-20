#include <iostream>
#include <cstring>

using namespace std;

int n;
bool friends[10][10];

// taken[i] = i번째 학생이 짝을 이미 찾았으면 true, 아니면 false
int countPairings(bool taken[10]){
    // 남은 학생들 중 가장 번호가 빠른 학생을 찾는다.
    int firstFree = -1;
    for(int i = 0; i < n; ++i){
        if(!taken[i]){
            firstFree = i;
            break;
        }
    }
    //기저 사례: 모든 학생이 짝을 찾았으면 한 가지 방법을 찾았으니 종료한다.
    if(firstFree == -1){
        return 1;
    }
    int ret = 0;
    // 현재 학생과 짝지을 학생을 결정한다.
    for(int pairWith = firstFree+1; pairWith < n; ++pairWith){
        if(!taken[pairWith] && friends[firstFree][pairWith]){
            taken[firstFree] = taken[pairWith] = true;
            ret += countPairings(taken);
            taken[firstFree] = taken[pairWith] = false;
        }
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    bool taken[10];
    int C, m, idx, a, b;
    
    cin >> C;
    for(int test_case = 0; test_case < C; test_case++){
        memset(friends, 0, sizeof(friends));
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            cin >> a >> b;
            friends[a][b] = friends[b][a] = 1;
        }
        memset(taken, 0, sizeof(taken));
        cout << countPairings(taken) << endl;
    }

    return 0;
}