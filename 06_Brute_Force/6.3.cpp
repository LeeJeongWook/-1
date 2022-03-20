#include <iostream>
#include <string>


char board[5][5] = {{'U','R','L','P','M'},
                    {'X','P','R','E','T'},
                    {'G','I','A','E','T'},
                    {'X','T','N','Z','Y'},
                    {'X','O','Q','R','S'}};
const int dx[8] = {-1,-1,-1, 1, 1, 1, 0, 0};
const int dy[8] = {-1, 0, 1,-1, 0, 1,-1, 1};

using namespace std;
// 5x5의 보글 게임 판의 해당 위치에서 주어진 단어가 시작하는지를 반환
bool hasWord(int y, int x, const string& word){
    // 기저 사례 1: 시작 위치가 범위 밖이면 무조건 실패
    if(5 <= x || 5 <= y){
        return false;
    }
    // 기저 사례 2: 첫 글자가 일치하지 않으면 실패
    if(board[y][x] != word[0]){
        return false;
    }
    // 기저 사례 3: 단어 길이가 1이면 성공
    if(word.size() == 1){
        return true;
    }
    // 인접한 여덟 칸을 검사한다.
    for(int direction = 0; direction < 8; ++direction){
        // cout << "x: " << x << ", y: " << y << endl;
        int nextY = y + dy[direction], nextX = x + dx[direction];
        // 다음 칸이 범위 안에 있는지, 첫 글자는 일치하는지 확인할 필요가 없다.
        if(hasWord(nextY, nextX, word.substr(1))){
            //cout << "x: " << x << ", y: " << y << endl;
            return true;
        }
    }
    return false;
}

int main(){
    string word1 = "PRETTY";
    string word2 = "GIRL";
    string word3 = "REPEAT";

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(hasWord(i, j, word3)){
                cout << "true" << endl;
            }
        }
    }
}