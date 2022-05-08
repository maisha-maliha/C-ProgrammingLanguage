#include <iostream>

int main(){
    std::cout << "========= short ==========" << std::endl;
    short short_var{ 333};
    short int short_int{344};
    signed short signed_short{-334};
    unsigned short unsigned_short{223};
    signed short int ssint{-333};
    unsigned short int usint{555};

    std::cout << "short: " << short_var<< " - " << sizeof(short_var) << " bytes" << std::endl;
    std::cout << "short int: " << short_int<< " - " << sizeof(short_int) << " bytes" <<std::endl;
    std::cout << "signed short: " << signed_short<< " - " << sizeof(signed_short) << " bytes" << std::endl;
    std::cout << "unsigned short: " << unsigned_short<< " - " << sizeof(unsigned_short) << " bytes" <<std::endl;
    std::cout << "signed short int: " << ssint<< " - " << sizeof(ssint) << " bytes" <<std::endl;
    std::cout << "unsigned short int: " << usint<< " - " << sizeof(usint) << " bytes" <<std::endl;

    std::cout << "======== int ========" << std::endl;
    int integer {11};
    signed singed_number{33};
    unsigned unsigned_number{22};
    signed int sint{-44};
    unsigned int unint{55};

    std::cout <<  "int: " << integer << " - " << sizeof(integer) << std::endl;
    std::cout << "signed: " << singed_number << " - " << sizeof(singed_number) << std::endl;
    std::cout << "unsigned: " << unsigned_number << " - " << sizeof(unsigned_number) << std::endl;
    std::cout << "sint: " << sint << " - " << sizeof(sint) << std::endl;
    std::cout << "unint: " << unint << " - " << sizeof(unint) << std::endl;

    std::cout << "======== long ========" << std::endl;

    long long_var{111};
    long int long_int {333};
    signed long slong {444};
    unsigned long ulong {555};
    signed long int slongint {666};
    unsigned long int ulongint {777};
     
    return 0;
}