#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,item,count=0;
  cout<<"enter the length"<<" ";
  cin>>n;
  int arr[n];
  cout<<"enter the elements"<<" ";
  for(i=0;i<n;i++)
     cin>>arr[i];
  cout<<"enter the element to delete"<<" ";
  cin>>item;
  for(i=0;i<n;i++)
   {
     if(arr[i]==item)
     {
       count++;
       break;
     }
   }
  if(count)
  {
    for(int j=i;j<n-1;j++)
      arr[j]=arr[j+1];
    cout<<"array after deleting"<<"\n";
    for(i=0;i<n-1;i++)
      cout <<arr[i]<<" ";
  }
   else
     cout<<"no such element to delete";
}
