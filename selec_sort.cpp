#include<bits/stdc++.h>
using namespace std;
void selec_sort(int a[],int n)
{
  int mid;
  for(int i=0; i<n; i++)//loop to go through thr n elements in array
  {
    min=i;
    for(int j=i+1;j<n;j++)
    {
      if(a[j]<a[min])//finds the least element in the array
      {
        min=j;//takes min to the index least element in array
      }
    }
    swap(a[i],a[min]);// swaps the least with the ith element in array
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
     cin>>a[i];
  selec_sort(a,n);
  for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}
