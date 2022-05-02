#include <cassert>

int main() {
    double sensorReading = 65537;
    unsigned short storedValue = sensorReading;

    assert(storedValue == sensorReading);

    return 0;
}