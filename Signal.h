#ifndef SIGNAL_H
#define SIGNAL_H
#include <vector>
class Signal {
private:
    std::vector<double> values;
public:
    Signal(const std::vector<double>& values);
    double getValue(int index) const;
    int getSize() const;
};
#endif
