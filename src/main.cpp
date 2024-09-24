#include <iostream>
#include <string>

int main(){
    std::string name;
    std::getline(std::cin, name);
    name[0] = 't';
    std::cout << "My name is: " << name << std::endl;
    std::cout << "Length of my name is: " << name.size() << std::endl;
    std::cout << "Final character is: " << (int)name[name.size() - 1] << std::endl;


    return 0;
}