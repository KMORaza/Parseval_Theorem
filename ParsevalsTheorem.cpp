#include "ParsevalsTheorem.h"
double ParsevalsTheorem::calculateEnergyInTimeDomain(const Signal& signal) {
    int N = signal.getSize();
    double energy = 0.0;
    for (int n = 0; n < N; ++n) {
        energy += std::pow(signal.getValue(n), 2);
    }
    return energy / static_cast<double>(N);
}
double ParsevalsTheorem::calculateEnergyInFrequencyDomain(const FourierTransform& fourierTransform) {
    int N = fourierTransform.getSize();
    double energy = 0.0;
    for (int k = 0; k < N; ++k) {
        energy += std::pow(std::abs(fourierTransform.getCoefficient(k)), 2);
    }
    return energy;
}
