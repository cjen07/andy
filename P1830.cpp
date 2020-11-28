#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<vector<int>> a,b;
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for(int j = 0;j < m;j++){
            row.push_back(0);
        }
        a.push_back(row);
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for(int j = 0;j < m;j++){
            row.push_back(0);
        }
        b.push_back(row);
    }
    for(int k=0;k<x;k++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for (int i = x1-1; i < x2; i++){
            for(int j =y1-1 ;j < y2;j++){
                a[i][j]++;
                b[i][j]=k+1;
            }
        }
    }
    vector<string> output;
    for (int abc = 0; abc < y; abc++)
    {
        int gjd1,gjd2;
        cin>>gjd1>>gjd2;
        gjd1--;
        gjd2--;
        if (b[gjd1][gjd2]==0 )
        {
            output.push_back("N");
        }
        else
        {
            output.push_back("Y " + to_string(a[gjd1][gjd2]) + " " + to_string(b[gjd1][gjd2]));
        }
    }
    for (int i=0;i<output.size();i++){
        cout<<output[i]<<endl;
    }    
}
