/**
 * Date: 13/06/2024/
 * Autor: Nuno Figueira
 * Email: ekumbi48172@hotmail.com
 * Project: IT job Code Challenge
 * Video CV:  https://www.youtube.com/watch?v=liOPojIVjH4
 * LinkedInd: https://www.linkedin.com/in/nuno-figueira-2aa2785b/
 *
 * Editor Sublime
 * Programming language Cpp version 11
 * Operation System Linux Ubuntu 20.04 LTS
 * Command line execution: ./main "input frase" or without input parameters
 * ./main
 */

#include <iostream>
#include <string>

/**
 * This method receive as input a string and generated the reverse.
 * @param string.
 */
void reverseString(std::string originalStr) {
  for (size_t i{originalStr.length()}; i != -1; --i) {
    std::cout << originalStr[i];
  }
  std::cout << "\n" << std::endl;
}

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "Program run with default string." << std::endl;
    std::cout << "Original String: Este es un TEXTO de prueba." << std::endl;
    std::cout << "Reverse  String:";
    reverseString("Este es un TEXTO de prueba.");
  } else
    reverseString(argv[1]);

  return 0;
}
