/**
 * @author David Rostro Buide
 * @date Nov 28th 2022
 * @Name del programa: Reduce Sum.
 * @brief Desarrolle un programa que incluya una función cuyo nombre sea ReduceSum que tome como parámetro un vector de números en punto flotante y devuelva como resultado la suma de todos los valores almacenados en el vector.
 * alu0101544359@ull.edu.es
 */

#include <iostream>
#include <vector>

int main() {
  std::cout << "Introduzca el tamaño del vector." << std::endl;
  int size;
  std::cin >> size;
  std::vector<double> vector(size);
  for (int i = size; i > 0; --i) {
    double value;
    std::cin >> value;
    vector.emplace_back(value);
  }
  double suma;
  for (int j = size; j > 0; --j) {
    suma = suma + vector[j];
  }
  std::cout << suma << std::endl;
  return 0;
}
