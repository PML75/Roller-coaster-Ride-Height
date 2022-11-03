#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int tHeight;
  const int tReqHeight = 55;
  cout << "Please enter your height in inches: ";
  cin >> tHeight;

  if (tHeight >= 55) {
    cout << "Congratulations! You are tall enough to ride!" << endl;
  } 
  else 
  {
    cout << "Safety is our first priority.\nUnfortunately, we can't let you ride yet." << endl;
  }
}
