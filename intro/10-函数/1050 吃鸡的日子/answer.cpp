#include <iostream>

using namespace std;

bool isRunNian(int y)
{
  return (y %
              ((y % 100 == 0) ? 400 : 4) ==
          0);
}

bool dayue(int m)
{
  return m % 2 == (m <= 7 ? 1 : 0);
}

bool last(int y, int m, int d)
{
  if (m == 2)
  {
    return isRunNian(y) ? (d == 29) : (d == 28);
  }
  else if (dayue(m))
  {
    return d == 31;
  }
  else
  {
    return d == 30;
  }
}

int main()
{
  int y, m, d;
  cin >> y >> m >> d;
  cout << (last(y, m, d) ? "Yes" : "No");
}