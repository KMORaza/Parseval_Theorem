#ifndef PARSEVALS_THEOREM_H
#define PARSEVALS_THEOREM_H
#include <complex>
#include "Signal.h"
#include "FourierTransform.h"
class ParsevalsTheorem {
public:
    static double calculateEnergyInTimeDomain(const Signal& signal);
    static double calculateEnergyInFrequencyDomain(const FourierTransform& fourierTransform);
};
#endif
