#include<iostream>

/* While in C++, the scope of the init-statement 
and the scope of statement are one and the same, 
in C the scope of statement is nested within 
the scope of init-statement: */

int main(int argc, char const *argv[])
{
    // simple for loop
    for(std::size_t i{0}; i<3; i++){
        std::cout << "for loop: " << i << std::endl;
    }
    // one line for loop
    for(std::size_t i{0}; i<3; i++) std::cout << "one line for loop: " << i << std::endl;
    // empty for loop
    short i = 0;
    for( ; ; ){
        if (i>5) break;
        std::cout << "empty exepressions: " << i << std::endl;
        i++;
    }

    std::cout << "========== with one expression ========" << std::endl;
    // for loop with only condition  
    for(i = 0;  ; ){
        if(i>5) break;
        std::cout << "With initialization: " << i << std::endl;
        i++;
    }
     // for loop with only condition
     i = 0;
    for( ; i<5 ; ){
        std::cout << "With condition: " << i << std::endl;
        i++;
    }
    // for loop with only increament
    i = 0;
    for( ; ; i++){
        if(i>5) break;
        std::cout << "With increment: " << i << std::endl;
    }

    return 0;
}
