#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cus_id=0,max=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int *MAX=max_element(ar,ar +n);
    int freq[*MAX+1]={0};
    for(int i=0;i<=*MAX;i++)
    {
        freq[ar[i]]++;
    }
    for(int i=0;i<=*MAX;i++)
    {
      if(max<freq[i])
     {
        cus_id++;
       max=freq[i];
      }
    }
    cout<<cus_id<<" - "<<max;
}