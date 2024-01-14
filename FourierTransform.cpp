#include "FourierTransform.h"
FourierTransform::FourierTransform(const Signal& signal) {
    int N = signal.getSize();
    coefficients.resize(N, 0.0);
    for (int k = 0; k < N; ++k) {
        std::complex<double> sum(0.0, 0.0);
        for (int n = 0; n < N; ++n) {
            double angle = -2.0 * M_PI * static_cast<double>(k * n) / static_cast<double>(N);
            sum += signal.getValue(n) * std::polar(1.0, angle);
        }
        coefficients[k] = sum / static_cast<double>(N);
    }
}
std::complex<double> FourierTransform::getCoefficient(int index) const {
    return coefficients[index];
}
int FourierTransform::getSize() const {
    return static_cast<int>(coefficients.size());
}
