#pragma once

class Calculator {
private:
    int a, b;
public:
    Calculator() : a(0), b(0) {}
    Primitive(int _a, int _b) : a(_a), b(_b) {}

    int sum(int a, int b);
    int sum();
};
