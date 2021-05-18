 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int pos,n;
     cin>>n;
     cin>>pos;
     if(n&(1<<(pos-1)))
        cout<<"set bit";
     else
        cout<<"not a set bit";
 }