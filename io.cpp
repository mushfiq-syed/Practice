#include <iostream>

int readNumber ()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}
void writeAnswer (int x)
{
    std::cout << "The sum is " << (x) << '\n';
}
