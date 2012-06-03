#include <iostream>
using namespace std;
double sqrt(double current, double lowBound, double upBound, int number) {
    if (current * current - number <= 0.01 && current * current - number >= -0.01) 
    {
        return current;
    }
    if (current * current - number > 0.01) {
        upBound = current;
        if (lowBound == -1) {
            current = current / 2;
        } else {
            current = (current + lowBound) / 2;
        }
        return sqrt(current, lowBound, upBound, number);
    }
    if (current * current - number < -0.01) {
        lowBound = current;
        if (upBound == -1) {
            current = current * 2;
        } else {
            current = (current + upBound) / 2;
        }
        return sqrt(current, lowBound, upBound, number);
    }
}
int main(int argc, char** argv) {
    sqrt(2, -1, -1, 95);
}
