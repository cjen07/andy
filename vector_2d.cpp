#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> board;
    for (int i = 0; i < 3; i++){
        vector<int> row;
        for (int j = 0; j < 4; j++){
            row.push_back(j);
        }
        board.push_back(row);
    }

    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}