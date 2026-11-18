#ifndef DV_HPP
#define DV_HPP

#include <cmath>
#include <stdexcept>

inline double rocketDeltaV(double isp, double initialMass, double finalMass) {
    if (initialMass <= 0.0 || finalMass <= 0.0) {
        throw std::invalid_argument("Masses must be positive");
    }
    if (finalMass > initialMass) {
        throw std::invalid_argument("Final mass cannot exceed initial mass");
    }
    return isp * 9.81 * std::log(initialMass / finalMass);
}

#endif
