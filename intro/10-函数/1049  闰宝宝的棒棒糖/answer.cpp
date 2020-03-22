#include <iostream>
using namespace std;

// 请你在这里创建一个函数！
bool isRunNian(int y)
{
  return (y %
              ((y % 100 == 0) ? 400 : 4) ==
          0);
}

int main()
{
  int year;
  cin >> year;
  if (isRunNian(year))
  {
    cout << "   🍭\n欢迎闰宝宝";
  }
  else
  {
    cout << "      😜\n调皮鬼又来骗糖吃啦";
  }
}