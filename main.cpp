#include <iostream>
#include "Signal.h"
#include "FourierTransform.h"
#include "ParsevalsTheorem.h"
int main() {
    std::vector<double> signalValues = {1.0, 2.0, 3.0, 4.0, 5.0};
    Signal signal(signalValues);
    FourierTransform fourierTransform(signal);
    double energyInTimeDomain = ParsevalsTheorem::calculateEnergyInTimeDomain(signal);
    double energyInFrequencyDomain = ParsevalsTheorem::calculateEnergyInFrequencyDomain(fourierTransform);
    std::cout << "Energy in time domain: " << energyInTimeDomain << "\n";
    std::cout << "Energy in frequency domain: " << energyInFrequencyDomain << "\n";
    return 0;
}
