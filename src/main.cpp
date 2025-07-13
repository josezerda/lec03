#include <iostream>

int main()
{
    std::cout << "Please enter your name and surname:\n";
    std::string first_name;
    std::string last_name;
    std::string name;
    double age = -1; // integer variable (-1 means "don’t know the age")
    std::cin >> first_name >> last_name;
    name = first_name + ' ' + last_name;
    std::cout << "Nombre: " << first_name << std::endl;
    std::cout << "Apellido: " << last_name << std::endl;  
    std::cout << "Hello, " << name << std::endl;
    return 0;
}


