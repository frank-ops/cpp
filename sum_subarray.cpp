#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
int n,sum,x=0,y=0; 
cin>>n; 
int a[n]; 
for(int i=0;i<n;i++) 
    cin>>a[i]; 
cin>>sum;
for(int i=0; i<n;i++){ 
for(int j=i;j<n;j++){ 
for(int k=i;k<=j;k++){ 
  x=x+a[k];
} 
if(x==sum){
  cout<<"found";
   y=1;}
x=0;
}
}
if(y==0)
  cout<<"not found";
return 0;
}