/*
 * Presented by Shilpa Dodeja for CppIndia - User Group(18-07-2020)
 * Use case - Capture By Value
 * Link - https://godbolt.org/z/Y43sET
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v{1, 2, 3, 4, 5, 6};
  int increment;
  cin >> increment;
  for_each(v.begin(), v.end(), [increment](const int& x) { cout << x + increment << endl; });
}