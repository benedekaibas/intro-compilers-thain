#include <iostream>

/*
   Determine how to invoke the preprocessor, compiler, assembler, and linker manually in your local computing environment.
   Compile a small complete program that computes a simple experssion, and examine the output at each stage. Are you able
   to follow the flow of the program in each form?
*/

int expression(int numOne, int numTwo) {
  return numOne * numTwo;
}

int main() {
  int x = 10;
  int y = 15;
  std::cout << expression(x, y);
}


