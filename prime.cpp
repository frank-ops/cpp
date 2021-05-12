#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,k=0;
    cout<<"enter the number\n";
    cin>>n;
    p=sqrt(n);
    for(int i=2;i<p+1;i++)
      {
        if(n%i==0)
        {
            k=1;
            cout<<"not a prime";
            break;
            }
    }
    if(k==0)
        cout<<"prime";
}