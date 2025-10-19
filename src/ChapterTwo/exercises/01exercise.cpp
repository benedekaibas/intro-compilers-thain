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

// Stop after the **preprocessor** step:
// clang++ -E your_file.cpp -o preprocessed_output.i

// Stop after the **compiler** step (produce assembly):
// clang++ -S your_file.cpp -o your_file.s

// Stop after the **assembler** step (produce object code):
// clang++ -c your_file.cpp -o your_file.o

// Stop after the **linker** step (produce executable):
// clang++ your_file.o another_file.o -o my_program

/*
   This is the whole prcocess when we compile a C++ source code. These are the steps that happen when we run clang++ program.cpp -o program.
   If we run each step and observe the files that are the outputs then we can see what actaully happens at preprocessing, compiling, assembling,
   and linking.
*/
