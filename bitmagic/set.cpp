 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int pos,n;
     cin>>n;
     cin>>pos;
     n=n|(1<<(pos-1));
     cout<<n;
 }