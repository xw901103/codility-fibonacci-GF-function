// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#define MOD_V 1000000007

int solution(int A, int B, int N) {
    // write your code in C++14 (g++ 6.2.0)

    int front = A, back = B, temp = 0;

    if (N >= 0) {
        if (N == 0) {
          return A;
        } else if (N == 1) {
          return B;
        } else {
          for (int i = 2; i <= N; ++i) {
            temp = back;
            back = (front + back) % MOD_V;
            front = temp;
          }
          return back;
        }
    }
    return -1; // N should not be negative
}

int main() {
  std::cout << solution(3, 4, 5) << std::endl;
  return 0;
}
