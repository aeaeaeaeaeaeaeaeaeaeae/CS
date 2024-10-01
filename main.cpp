#include "iostream"
#include "math.h"

int main()
{
    float x, y;
    std::cin >> x >> y;
    
    double R = pow(1 / sin(x/y), -1);
    double S = pow(M_E, -3 * x) + pow(y, 1/3);
    std::cout << R << " " << S << std::endl;
    double C = std::max(S, R);
    std::cout << C;
    
    return 0;
}