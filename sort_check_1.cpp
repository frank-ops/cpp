#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[100],n,count=0;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0; i<n;i++)
   if(a[i]>a[i+1])
   {
     count++;
     break;
   }
  if(count==1)
   cout<<"not sorted";
  else
   cout<<"sorted";
  return 0;
}
