#ifndef FOURIER_TRANSFORM_H
#define FOURIER_TRANSFORM_H
#include <complex>
#include <vector>
#include <cmath>
#include "Signal.h"
class FourierTransform {
private:
    std::vector<std::complex<double>> coefficients;
public:
    FourierTransform(const Signal& signal);
    std::complex<double> getCoefficient(int index) const;
    int getSize() const;
};
#endif
