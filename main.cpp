#include <iostream>

// test little/big endian

int main(int argc, char* argv[])
{
    union endian4
    {
        int liczba;
        char znaki[4];
    };
    struct withendian
    {
        endian4 e;
        int lend;
    };  

    // test
    withendian test;    
    test.e.liczba = 0x41424344;
    test.lend = 0;

    std::cout << test.e.znaki << std::endl;

    // test za pomocą castingu
    int liczba2 = 0x31323334;
    int l3 = 0;
    char* znaki2 = (char *)&liczba2;

    std::cout << znaki2 << std::endl;

}
