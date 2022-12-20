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
  cout << "Enter p: ";
  cin >> p;
  cout << "Enter m: ";
  cin >> m;
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter l: ";
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