#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  int arr[N];
  int total = 0;
  int fail = 0;
  double Avg = 0;
  for(int i = 0;i<N;i++){
    cin>>arr[i];
  }
  for(int i = 0;i<N;i++){
    if(arr[i] < 40) fail++;
    total += arr[i];
  }
  Avg = double(total / (double)N);
  cout <<"Total :"<<total<<endl;
  cout<<"Average :"<<Avg<<endl;
  cout<<"Fail :"<<fail<<endl;
  if(fail == 0 && Avg > 50) cout<<"Pass";
  cout<<"Fail";

  return 0;
  
}