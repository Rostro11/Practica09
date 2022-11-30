/**
 * @author David Rostro Buide
 * @date Nov 30th 2022
 * @file it is a palindrome?
 * @brief Write a function that tells if s is a palindrome or not. Remember that a word is a palindrome if it reads the same from left to right than from right to left. In this exercise, s can be rather large; this is why it is passed by reference.
 * alu0101544359@ull.edu.es
 * @see https://jutge.org/problems/P50497_en
 */
 
#include <iostream>
#include <string>

/**
 * @param la función recoge el parámetro s, esta es una string.
 * @return la función devuelve true o false dependiendo de si el parámetro s es una palabra palindroma o no.
 */

bool is_palindrome(const std::string& s) {
  for (int i = 0; i < s.size() / 2; ++i) {
    if (s[i] != s[s.size() - i - 1]) {
      return false;
    }
  }
  return true;
}

int main () {
  std::string s;
  while(std::cin >> s) {
    std::cout << is_palindrome(s) << std::endl;
  }
  return 0;
}

