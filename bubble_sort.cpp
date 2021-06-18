#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{
  int k;
  for(int i=0; i<n; i++)//loop to go through n elements in array
  {
    k=0;
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        k=1;//variable changes to 1 indicates whether the swap is done or not
        swap(a[j],a[j+1]);
      }
    }
    if(k==0)//breaks if there is no swap means already order
    {
      break;
    }
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
     cin>>a[i];
  bubble_sort(a,n);
  for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}
