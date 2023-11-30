#include <iostream>
#include <wau_integer.hpp>

int main(int argc, char** argv)
{
    std::cout << "hello, waui" << std::endl;
    waui::test_printer();
    return std::cout.badbit;
}
