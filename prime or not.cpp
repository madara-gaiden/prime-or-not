#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  bool f = false;
  cout << "Enter a number: ";
  cin >> n;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << n << " is not a prime number, and divisible by " << i << endl;
      f = true;
    }
  }
  if (f == false) {
    cout << n << " is a prime number";
  }
}