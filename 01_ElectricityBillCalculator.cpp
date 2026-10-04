#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans = 0;
  if(n > 400){
    ans = 100 * 5 + 100 * 7 + 200 * 10 + (n - 400) * 15;
  }else if(n > 200){
      ans = 100 * 5 + 100 * 7 + (n - 200) * 10;
  }else if(n > 100){
      ans = 100 * 5 + (n - 100) * 7;
  }else  ans = n * 5;
  cout<<ans;
  return 0;
}
