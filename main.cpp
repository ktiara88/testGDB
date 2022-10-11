#include <iostream>

using namespace std;

// forward declaration
int fibonacci(int n);

// fact(n) = n * fact(n - 1)
int factorial(int n) {
  cout << "Enter factorial: " << n << endl;
  if (n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  cout << factorial(10) << endl;

  for (int i = 1; i < 10; i++) {
    cout << "fibonacci i: " << i << " == " << fibonacci(i) << endl;
  }
  return 0;
}