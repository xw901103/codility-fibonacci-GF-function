# codility-fibonacci-GF-function

Codility question used in Rakuten interview

A function GF is defined as follows

    GF(A, B, 0) = A;
    GF(A, B, 1) = B;
    GF(A, B, N) = GF(A, B, N-1) + GF(A, B, N-2); Where N > 1.
Write a function

java class Solution { public int solution(int A, int B, int N); }
that given 3 non-negative integers A, B and N returns the remainder from the division of GF(A, B, N) by 1,000,000,007

For example

given A = 3, B = 4 and N = 5, the function should return 29 because

    GF(3,4,0) = 3 mod 1,000,000,007 = 3;
    GF(3,4,1) = 4 mod 1,000,000,007 = 4;
    GF(3,4,2) = (GF(3,4,1) GF(3,4,0)) mod 1,000,000,007 = 7;
    GF(3,4,3) = (GF(3,4,2) GF(3,4,1)) mod 1,000,000,007 = 11;
    GF(3,4,4) = (GF(3,4,3) GF(3,4,2)) mod 1,000,000,007 = 18;
    GF(3,4,5) = (GF(3,4,4) GF(3,4,3)) mod 1,000,000,007 = 29;
Assume that

A and B are integers within the range [0..2,147,483,647].
N is an integer within the range [0..1,000,000,000].

Complexity

expected worst-case time complexity is O(log(N)).
expected worst-case space complexity is O(1).
