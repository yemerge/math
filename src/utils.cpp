// Copyright (c) 2023 Programmers, All Rights Reserved.
// Authors : yemerge
#include "math/utils.hpp"

#include <cmath>
#include <stdexcept>

namespace yemerge::math {
auto Add(double lhs, double rhs)->double {
  if(std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs)) {
    throw std::invalid_argument("lhs or rhs is nan or inf");
  }
  return lhs + rhs;
}

auto Subtract(double lhs, double rhs) -> double {
  if(std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs)) {
    throw std::invalid_argument("lhs or rhs is nan or inf");
  }
  return lhs - rhs;
}

auto Multiply(double lhs, double rhs) -> double {
  if(std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs)) {
    throw std::invalid_argument("lhs or rhs is nan or inf");
  }
  return lhs * rhs;
}

auto Divide(double lhs, double rhs) -> double {
  if(std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs) || rhs == 0) {
    throw std::invalid_argument("lhs or rhs is nan, inf, or rhs is zero");
  }
  return lhs / rhs;
}

auto IsEqual(double lhs, double rhs) -> bool {
  // double : 16 decimal places
  // float : 7 decimal places
  return (std::abs(lhs - rhs) < std::numeric_limits<double>::epsilon());
}

auto IsEqual(float lhs, float rhs) -> bool {
  // double : 16 decimal places
  // float : 7 decimal places
  return (std::abs(lhs - rhs) < std::numeric_limits<float>::epsilon());
}

}
