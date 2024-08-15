# 🚀 Fibonacci Series using Dynamic Programming in C++

This project implements the Fibonacci series using dynamic programming in C++. The approach ensures optimal time complexity by avoiding redundant calculations, making it efficient for generating large Fibonacci numbers.

## 📚 Table of Contents

- [Introduction](#-introduction)
- [Algorithm Explanation](#-algorithm-explanation)
- [Code Implementation](#-code-implementation)

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
#include<bits/stdc++.h>
using namespace std;

int fibDP(int n, vector<int> &dp) {
    if(n <= 1) {
        return n;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    dp[n] = fibDP(n-1, dp) + fibDP(n-2, dp);
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    
    vector<int> dp(n+1, -1);
    cout << fibDP(n, dp) << endl;

    return 0;
}
