#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[100],n,count=0;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0; i<n;i++)
  {
    if(i==(n-i-1))
     break;
    else
     swap(a[i],a[n-i-1]);
  }
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
