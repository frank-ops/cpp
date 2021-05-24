#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cus_id,MAX=0;
    map<int,int> count;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>cus_id;
        count[cus_id]+=1;
    }
    for(auto i:count)
        if(i.second>MAX)
        {
          MAX=i.second;
          cus_id=i.first;
        }  
    cout<<cus_id<<" - "<<MAX;
}