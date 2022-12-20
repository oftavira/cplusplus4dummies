#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  // Declare variables
  int p;
  float m, n, l;
  vector<float> result;

  // Read input
  cout << "Enter power: ";
  cin >> p;
  cout << "Enter initial value: ";
  cin >> m;
  cout << "Enter end value: ";
  cin >> n;
  cout << "Enter step: ";
  cin >> l;

  // Compute x^p for x ranging from m to n in l steps
  for (float x = m; x <= n; x += l) {
    result.push_back(pow(x, p));
  }

  // Print result
  cout << "Result: [";
  for (int i = 0; i < result.size(); i++) {
    cout << result[i];
    if (i < result.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;

  return 0;
}