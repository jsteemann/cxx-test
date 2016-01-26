
#include "calculator/Calculator.h"

#include <iostream>

Value* Calculator::add(Value const& v1, Value const& v2) {
  std::cout << "test" << std::endl;
  if (v1.isInt() && v2.isInt()) {
    // TODO: check for overflow
    return new ValueInt(v1.toInt() + v2.toInt());
  }

  return new ValueDouble(v1.toDouble() + v2.toDouble());
}

