// Copyright (c) 2023 Programmers, All Rights Reserved.
// Authors : yemerge

#ifndef YEMERGE__MATH_UTILS_HPP_
#define YEMERGE__MATH_UTILS_HPP_

namespace yemerge::math {
  auto Add(double lhs, double rhs) -> double;
  auto Subtract(double lhs, double rhs) -> double;
  auto Multiply(double lhs, double rhs) -> double;
  auto Divide(double lhs, double rhs) -> double;

  auto IsEqual(double lhs, double rhs) -> bool;
  auto IsEqual(float lhs, float rhs) -> bool;

}  // namespace yemerge::math

#endif  // YEMERGE__MATH_UTILS_HPP_
