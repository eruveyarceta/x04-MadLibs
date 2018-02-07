//Authors:Eruvey 
#include <iostream>
#include <string>

int main()
{
    std::string City;
    std::string Object;
    int number;
    char letter;

    std::cout<<"City\n";
    std::cin>> City;
    std::cout<<"Object\n";
    std::cin>> Object;
    std::cout<<"Number\n";
    std::cin>> number;
    std::cout<<"Letter\n";
    std::cin>> letter;

        std::cout<<"There once was a man from " << City;
        std::cout<<".\nHe thought he was eating his " << Object;
        std::cout<<".\nThis crazy " << number;
        std::cout<<"year old man got done eating,\n and got a big "<< letter;
        std::cout<<" stamped on his forehead forever.\n";

    return 0;
}
