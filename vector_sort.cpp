#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> a; // create a vector
    a.push_back(4); // add values
    a.push_back(2);
    a.push_back(3);
    a.push_back(1);
    for (int i = 0; i < a.size(); i++){ // iterate all values
        cout << a[i] << ' ';
    }
    cout << endl;
    sort(a.begin(), a.end()); // sort
    for (int i = 0; i < a.size(); i++){ // see sorted values
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}