#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  if(n % 2 == 0) cout<<"Even"<<endl;
  else cout<<"Odd"<<endl;
  if(n > 0) cout<<"Positive"<<endl;
  else cout<<"Zero"<<endl;
  if(n % 5 == 0) cout<<"Divisible by 5 ";
  else cout<<"Not Divisible by 5 ";

  return 0;
}