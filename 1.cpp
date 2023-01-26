#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<vector<int>>v;
   for (int i = 0; i < n; i++)
   {
    vector<int>temp;
    int x;
    cin>>x;
    int a;
    for (int j = 0; j < x; j++)
    {
        cin>>a;
        temp.push_back(a);
    }
    v.push_back(temp);
    
   }
   for(auto q: v){
    for(auto it: q){
        cout<<it;
    }
    cout<<endl;
   }
   
return 0;
}


