#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n < 3) {
    return 1;
  }
  return fibonacci(n - 2) + fibonacci(n - 1);
}