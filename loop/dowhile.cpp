#include <iostream>

int main(int argc, char const *argv[])
{
    short i = 0; 
    do{
        std::cout << "hello world" << i << std::endl;
        i++;
    } while (i<4);

    // one line do while 
    i = 0;
    do std::cout << " hello" << i++; while (i<4);
    return 0;
}
