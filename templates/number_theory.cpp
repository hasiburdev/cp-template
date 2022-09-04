#include <iostream>
#include <map>
using namespace std;

typedef long long int ll;

map<int, int> primeFactorize(int n);
map<int, int> primeFactorizeRootN(int n);
ll binaryExponentiation(ll base, ll power);
ll exponent(ll base, ll power);

int main() {
  // Test the functions here.
  // map<int, int> m = primeFactorize(24);
  // for(auto u:m) {
  //     cout << u.first << ": " << u.second << endl;
  // }

  clock_t start_time = clock();
  ll normal = exponent(2, 40);
  cout << normal << endl;
  clock_t end_time = clock();
  double run_time = (end_time - start_time);
  cerr << "Run Time: " << run_time << "ms" << endl;

  start_time = clock();
  ll res = binaryExponentiation(2, 40);
  cout << res << endl;
  end_time = clock();
  run_time = (end_time - start_time);
  cerr << "Run Time: " << run_time << "ms" << endl;

  return 0;
}

// bool isPrime(int number) {

// }

// vector<int> sieveOfEretosthenes(int number) {

// }

// Prime Factorization
// Complexity O(n)
map<int, int> primeFactorize(int n) {
  map<int, int> m;
  for (int i = 2; i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        m[i]++;
        n /= i;
      }
    }
  }
  return m;
}
// Prime Factorization
// Complexity O(√n)
map<int, int> primeFactorizeRootN(int n) {
  map<int, int> m;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      int count = 0;
      while (n % i == 0) {
        m[i]++;
        n /= i;
      }
    }
  }
  if (n > 1)
    m[n] = 1;
  return m;
}

// Normal Exponentiation
// Complexity O(n)
ll exponent(ll base, ll power) {
  ll result = 1;
  for (int i = 0; i < power; i++) {
    result *= base;
  }
  return result;
}

// Binary Exponentiation
// Complexity O(logn)
ll binaryExponentiation(ll base, ll power) {
  ll result = 1;
  while (power > 0) {
    if (power % 2 == 0) {
      base *= base;
      power /= 2;
    } else {
      result *= base;
      power--;
    }
  }
  return result;
}