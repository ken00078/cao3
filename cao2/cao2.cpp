//cao.cpp﻿
#include <iostream>

// 遞迴方式計算階乘
int factorial_recursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

// 非遞迴方式計算階乘
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cout << "請輸入一個非負整數: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "請輸入一個非負整數。\n";
        return 1;
    }

    std::cout << "遞迴方式計算的階乘: " << factorial_recursive(n) << "\n";
    std::cout << "非遞迴方式計算的階乘: " << factorial_iterative(n) << "\n";

    return 0;
}