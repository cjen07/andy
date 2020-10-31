#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int m;
        cin >> m;
        a.push_back(m);
    }
    
    int sum = 0;
    bool flag = true;
    while(flag){
        flag = false;
        for (int i = 0; i < n - 1; i++){
            if (a[i] > a[i+1]){
                sum += 1;
                flag = true;
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    cout << sum << endl;
}