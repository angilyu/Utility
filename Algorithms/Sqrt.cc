#include <cmath>
using namespace std;

namespace wenjing{
namespace util{

static const double MARGIN = 0.001;
static double sqrt(double number, double lowBound, double upBound) {
    if (abs(lowBound - upBound) < MARGIN)
        return lowBound;

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

} // end wenjing namespace
} // end util namespace

