#include<bits/stdc++.h>
using namespace std;
int main()
{
  double n;
  cin>>n;
  auto f1=(1+sqrt(5))/2;
  auto f2=(1-sqrt(5))/2;
  auto f3=(pow(f1,n-1)-pow(f2,n-1))/sqrt(5);
  cout<<"the "<<n<<" fibnocci number is: "<<f3;
}
