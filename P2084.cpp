#include<iostream>
#include<string>
using namespace std;

int main(){
    int M;
    string N;
    cin >> M >> N;
    int cnt = N.size();
    bool first = true;
    for (int i = 0; i < N.size(); i++){
        cnt--;
        if (N[i] == '0')
            continue;
        if (!first){
            cout << '+';
        }
        cout << N[i] << '*' << M << '^' << cnt;
        first = false;
    }
    cout << endl;
}