#include <iostream>

int main(int argc, char const *argv[])
{
    short i = 0;
    while(i<4){
        std::cout << "hello world " << i  << std::endl;
        i++;
    }
    // one line while
    while(i<10) std::cout << "hello " << i++ << std::endl;
    return 0;
}
