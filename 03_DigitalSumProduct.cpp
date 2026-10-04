#include<bits/stdc++.h>
using namespace std;
int main(){

  int N;
  cin>>N;
  int sum = 0;
  int product = 1;
  while(N>0){
      sum += N%10;
      product = product * (N%10);
      N = N/10;
  }
  cout<<sum<<endl;
  cout<<product<<endl;
  if(sum % 3 == 0) cout<<"Divisible by 3: Yes ";
  else cout<<"Divisible by 3: NO ";
  return 0;
}