#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  int input;
  cin>>input;
  queue<pair<char,int>> s;
  while(input){
      int value;
      cin>>value;
      char operation;
      cin>>operation;
      s.push({operation,value});
      input--;
  }
  while (!s.empty())
  {
    int value = s.front().second;
    char operation = s.front().first;
    s.pop();
    if(operation == 'D'){
        N += value;
        cout<<"Deposit Succ"<<endl;
    }else if(operation == 'W'){
        if(N >= value){
          N -= value;
          cout<<"Withdrawal Succ"<<endl;
        }else{
          cout<<"Insufficent Balance"<<endl;
        }
    }else if(operation == 'B') cout<<N<<endl;
    else break;
  }
  return 0;
}