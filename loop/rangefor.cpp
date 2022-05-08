#include <iostream>

int main(int argc, char const *argv[])
{
    short arrayelements[]{3,5,34,44,6,4,6,7};
    for(std::size_t element: arrayelements){
        std::cout << "ternary for element: " << element << std::endl;
    }

    for(short element: arrayelements) std::cout << element  << std::endl;
    return 0;
}
