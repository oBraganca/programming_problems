#include <iostream>

using namespace std;
string reverse(string s) {
  string r="";
  for (int i = s.size() - 1; i >= 0; i--) {
    r += s[i];
  }
  return r;
}

int main() {
  string s = "string acabou";

  std::cout << reverse(s) << std::endl;

  return 0;
}
