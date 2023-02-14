#include <iostream>
using namespace std;

int main() {
  int d, m, y;
  cout << "Enter day, month, and year: ";
  cin >> d>> m >> y;
  int a = (14-m)/12;
  y = y - (14-m)/12;
  m = m + 12*a-2;

 int dayOfWeek = (d+y+y/4-y/100+y/400+(31*m)/12)%7;
  switch(dayOfWeek) {
    case 0:
      cout << "Sunday\n";
      break;
    case 1:
      cout << "Monday\n";
      break;
    case 2:
      cout << "Tuesday\n";
      break;
    case 3:
      cout << "Wednesday\n";
      break;
    case 4:
      cout << "Thursday\n";
      break;
    case 5:
      cout << "Friday\n";
      break;
    case 6:
      cout << "Saturday\n";
      break;
    default:
      cout << "Invalid day of week\n";
      break;
  }

  return 0;
}