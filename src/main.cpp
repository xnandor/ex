
#include <stdio.h>
#include <iostream>
#include "ex.hpp"

int main(int argc, char* argv[]) {
  vec<double> u(0, 3, -7, 0);
  vec<double> v(2, 3, 1, 0);
  double w = u * v;
  printf("---------------------------------------------------------------------\n");
  printf("value: %f", w);
  //printf("vec: <%f, %f, %f, %f>", w.x, w.y, w.z, w.w);
  //std::cout << "Vec: " +  + "\n";
  getchar();
  printf("\n");
  return 0;
}

