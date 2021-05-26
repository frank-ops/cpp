#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,loc,i;
    cout<<"enter the length"<<" ";
    cin>>n;
    if(100<n)
      cout<<"change is not possible";
else{
   cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"enter the location to insert"<<" ";
    cin>>loc;
    loc=loc-1;
    for(i=n-1;i>=loc;i--)
    {
      arr[i+1]=arr[i];
    }
    cout<<"enter the element"<<" ";
    cin>>arr[i+1];
    cout<<"array after altering"<<"\n";
    for(i=0;i<n+1;i++)
    {
      cout <<arr[i]<<" ";
    }
  }
    return 0;
}
