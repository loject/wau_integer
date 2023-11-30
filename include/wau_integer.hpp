#pragma once

#include <iostream>

namespace waui
{
    template<typename T>
    class wint
    {
        wint() = delete;
    };
    template<typename T>
    class uint
    {
        uint() = delete;
    };
    int test_printer()
    {
        std::cout << "hello from waui" << std::endl;
        return 0;
    }
} // namespace waui
