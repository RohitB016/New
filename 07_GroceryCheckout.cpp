#include <bits/stdc++.h>
using namespace std;
int main()
{
  double total = 0;
  int input;
  cin >> input;
  queue<pair<int, int>> s;
  while (input)
  {
    int operation;
    cin >> operation;
    int value;
    cin >> value;
    s.push({operation, value});
    input--;
  }

  while (!s.empty())
  {
    int value = s.front().second;
    int operation = s.front().first;
    s.pop();
    total += (double)operation * value; 
  }
  
  double discount = 0.0;
  if (total < 1000)
  {
    discount = 0.0;
  }
  else if (total >= 1000 && total <= 4999)
  { 
    discount = total * 0.05;
  }
  else if (total >= 5000 && total <= 9999)
  {
    discount = total * 0.10;
  }
  else
  {
    discount = total * 0.15;
  }
  
  double tax = (total - discount) * 0.05;
  double final_amount = (total - discount) + tax;
  cout << fixed << endl;
  cout << "Subtotal: " << total << endl;
  cout << "Discount: " << discount << endl;
  cout << "Tax: " << tax << endl;
  cout << "Final Amount: " << final_amount << endl;
}
