#include <bits/stdc++.h>
using namespace std;
int main()
{
  int total = 0;
  int input;
  cin >> input;
  queue<pair<char, int>> s;
  while (input)
  {
    char operation;
    cin >> operation;
    int value;
    cin >> value;
    s.push({operation, value});
    input--;
  }
  while (!s.empty())
  {
    int value = s.front().second;
    char operation = s.front().first;
    s.pop();
    if (operation == 'C')
    {
      if (value > 2)
      {
        total += 60 + (value - 2) * 20;
      }
      else
        total += value * 30;
    }
    else if (operation == 'T')
    {
      if (value > 2)
      {
        total += 100 + (value - 2) * 40;
      }
      else
        total += value * 50;
    }
    else if (operation == 'B')
    {
      if (value > 2)
      {
        total += 30 + (value - 2) * 10;
      }
      else
        total += value * 15;
    }
  }
  cout << total;
  return 0;
}