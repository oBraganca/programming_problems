#include <iostream>

bool isFibonacci(int n) {
  int a = 0, b = 1;
  while (b < n) {
    int temp = b;
    b = a + b;
    a = temp;
  }
  return b == n;
}

int main() {
  int n = 4;

  if (isFibonacci(n)) {
    std::cout << n << " faz parte da sequência de Fibonacci." << std::endl;
  } else {
    std::cout << n << " não faz parte da sequência de Fibonacci." << std::endl;
  }

  return 0;
}
