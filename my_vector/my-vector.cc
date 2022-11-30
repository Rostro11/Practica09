/**
 * @author David Rostro Buide
 * @date Nov 28th 2022
 * @Nombre del programa: My vector
 * @brief Esas componentes (elementos del vector se inicializarán con valores generados aleatoriamente en el intervalo (lower, upper). Los límiter inferior y superior de ese intervalo se pasan como parámetros a la función GenerateVector().
 * alu0101544359@ull.edu.es
 */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
 
std::vector<double> GenerateVector(const double size, const double lower, const double upper) {
  std::vector<double> vector(size);
  srand((unsigned) time(NULL));
  double random_number{};
  double range{upper - lower};
  for (int i = 0; i < size; ++i) {
    random_number = lower + static_cast<double>(rand() / static_cast<double>(RAND_MAX / range));
    vector[i] = random_number;
  }
  return vector;
}

int main() {
  std::vector<double> my_vector = GenerateVector(30, 5.0, 10.0);
  for (const auto& value: my_vector) {
    std::cout << "component: " << value << std::endl;
  }
  return 0;
}
