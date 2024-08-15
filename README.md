# 🚀 Fibonacci Series using Dynamic Programming in C++

This project implements the Fibonacci series using dynamic programming in C++. The approach ensures optimal time complexity by avoiding redundant calculations, making it efficient for generating large Fibonacci numbers.

## 📚 Table of Contents

- [Introduction](#-introduction)
- [Algorithm Explanation](#-algorithm-explanation)
- [Code Implementation](#-code-implementation)
- [How to Run](#-how-to-run)
- [Complexity Analysis](#-complexity-analysis)
- [Contributing](#-contributing)
- [License](#-license)

## 🌟 Introduction

The Fibonacci series is a sequence where each number is the sum of the two preceding ones, typically starting with 0 and 1. This project showcases a C++ implementation of the Fibonacci series using the dynamic programming technique to improve efficiency.

## 🧠 Algorithm Explanation

Dynamic programming is used here to store the results of subproblems in a table, avoiding the need to recompute them. This reduces the time complexity from exponential (in a naive recursive approach) to linear.

### Fibonacci Formula:
\[ F(n) = F(n-1) + F(n-2) \]
- **Base cases**: \( F(0) = 0 \), \( F(1) = 1 \)

## 💻 Code Implementation

Here's the C++ code implementing the Fibonacci series using dynamic programming:

```cpp
#include <iostream>
#include <vector>

using namespace std;

// Function to calculate Fibonacci numbers using Dynamic Programming
int fibonacci(int n) {
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;

    // DP array to store Fibonacci numbers
    vector<int> dp(n + 1);

    // Initialize the first two Fibonacci numbers
    dp[0] = 0;
    dp[1] = 1;

    // Fill the DP array using the bottom-up approach
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // Return the nth Fibonacci number
    return dp[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci number F(" << n << ") is " << fibonacci(n) << endl;

    return 0;
}
