#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<vector<int>> a;
    int n,m,k;
    cin>>n>>m>>k;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for(int j = 0; j < n;j++){
            row.push_back(0);
        }
        a.push_back(row);
    }
    for (int i = 0; i < m; i++)
    {
        int xi,yi;
        cin>>xi>>yi;
        xi--;
        yi--;
        for (int j = -2; j <= 2; j++){
            for (int k = -2; k <= 2; k++){
                if (abs(j) + abs(k) <= 2){
                    int nxi = xi + j;
                    int nyi = yi + k;
                    if (nxi >= 0 && nxi < n && nyi >= 0 && nyi < n){
                        a[nxi][nyi] = 1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        int xi,yi;
        cin>>xi>>yi;
        xi--;
        yi--;
        for (int j = -2; j <= 2; j++){
            for (int k = -2; k <= 2; k++){
                int nxi = xi + j;
                int nyi = yi + k;
                if (nxi >= 0 && nxi < n && nyi >= 0 && nyi < n){
                    a[nxi][nyi] = 1;
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] == 0){
                cnt += 1;
            }   
        }
    }
    cout << cnt << endl;
}
