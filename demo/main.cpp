// Copyright 2021 vasilyevvs

#include "example.hpp"

int main() {
  struct shared {
    int a;
    int b;
  };
  shared one = { 1, 2 };
  shared two = { 2, 1 };
  SharedPtr<shared> a(&one);
  SharedPtr<shared> b(&two);
  b.swapPtr(a);
  std::cout << a.use_count() << std::endl;
}
