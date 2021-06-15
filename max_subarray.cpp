#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
  int Max, sum;
  Max=a[0];
  for(int i=0;i<n;i++)
   {
     for(int j=i;j<n;j++)
     { sum=0;
       for(int k=i;k<=j;k++)
          {
            sum=sum+a[k];
            Max=max(sum,Max);
          }
     }
   }
    cout<<Max;
  }
