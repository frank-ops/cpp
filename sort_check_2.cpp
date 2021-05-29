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
    for(int j=i+1; i<n;i++)
    {
      if(a[i]>a[j])
       count++;
       break;
    }
  }
  if(count!=0)
   cout<<"not sorted";
  else
   cout<<"sorted";
   return 0;
 }
