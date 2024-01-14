#include "Signal.h"
Signal::Signal(const std::vector<double>& values) : values(values) {}
double Signal::getValue(int index) const {
    return values[index];
}
int Signal::getSize() const {
    return static_cast<int>(values.size());
}
