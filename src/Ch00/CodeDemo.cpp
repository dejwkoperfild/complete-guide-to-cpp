// Complete Guide to C++ Programming Foundations
// Exercise 00_03
// Using the Exercise Files in GitHub Codespaces, by Eduardo Corpeño 
float sum(float num_1, float num_2) { return num_1 + num_2; }

#include <iostream>

int main(){
    float num_1, num_2, result;

    std::cout << "Wprowadz numer 1: " << std::flush;
    std::cin >> num_1;
    std::cout << "Wprowadz numer 2: " << std::flush;
    std::cin >> num_2;
    
    std::cout << "Wynik dodawania to:  " << sum(num_1, num_2) << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
