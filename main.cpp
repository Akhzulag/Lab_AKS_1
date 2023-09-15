#include <iostream>

void print()
{
    std::cout<<"call function print\n";
}


int main() {
    //1
    int a = 13, b = 10;
    int c1 = a - b;
    int c2 = a + b;
    int c3 = a * b;
    int c4 = a / b;

    //2
    if(12 > 14)
        std::cout<<"12 > 14";

    if(3 > 2)
        std::cout<<"3 > 2\n";

    //3
    int con = 2;
    switch (con)
    {
        case 2:
            std::cout<<"2\n";
        case 4:
            std::cout<<"3\n";
    }

    //4
    int loc1 = 2, loc2 = 12;

    //5
    for(uint16_t i = 0; i < 256; ++i)
    {

    }

    //6
    print();

    //7
    int arr[] = {1, 2, 3, 4, 5, 6, 7};


    return 0;
}
