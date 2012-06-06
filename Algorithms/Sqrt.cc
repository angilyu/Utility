#include <cmath>
using namespace std;

namespace wenjing{
namespace util{

static const double MARGIN = 0.001;
static double sqrt0(double number, double lowBound, double upBound, double guess) {
    cout<<guess<<endl;
    double delta = guess * guess - number;
    if (abs(delta) <= MARGIN) {
        return guess; 
    }
    return delta > 0 ? lowBound == -1 ? sqrt0(number, lowBound, guess, guess / 2) :
                                        sqrt0(number, lowBound, guess, (lowBound + guess) / 2)
                    :
                    upBound == -1 ? sqrt0(number, guess, upBound, guess * 2) :
                                    sqrt0(number, guess, upBound, (guess + upBound) / 2);
}
double sqrt0(double number) {
    return sqrt0(number, -1, -1, 2);
}
static double sqrt(double number, double lowBound, double upBound) {
    double guess = (lowBound + upBound) / 2;
    double delta = guess * guess - number;

    return  abs(delta) <= MARGIN ? guess :
            delta > 0 ? sqrt(number, lowBound, guess) :
            sqrt(number, guess, upBound);
}


double sqrt(double number) {
    if (number < 0)
        return -1;
    return number == 0 ? 0 :
           number >= 1 ? sqrt(number, 1, number) : 
           1 / sqrt(1 / number);
}

} // end util namespace
} // end wenjing namespace

