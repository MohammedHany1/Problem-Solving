//leetcode.com/problems/count-primes
class Solution {
public:
int countPrimes(int n) {
    if (n <= 2)
        return 0;
    vector<bool> vec(n, false);
    int x = sqrt(n), count = 0;
    for (int i = 2; i <= x; i++) {
        if (vec[i] == false)
            for (int j = i * i; j < n; j += i) {
                vec[j] = true;
            }
    }
    for (int i = 2; i < n; i++)
        if (vec[i] == false)
            count++;
    return count;
}
};


//Another FASTER Solution but using more memory
/*
class Solution {
public:
    int countPrimes(int n) {
      if (n < 3) return 0;
      std::vector<char> primes(n / 2, 1);
      for (int i = 3; i < std::sqrt(n); i += 2) {
        if (!primes[i / 2]) continue;
        for (int j = i * i; j < n; j += 2 * i) primes[j / 2] = 0;
      }
      int ctr = 0;
      for (auto b : primes) ctr += b;
      return ctr;
    }
};
*/