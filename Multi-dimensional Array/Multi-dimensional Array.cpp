#include <iostream>

int main() {
  int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6} 
  }; // Declaring and initializing a 2x3 matrix

  std::cout << "Elements of the matrix are: " << std::endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
