#include <iostream>
#include <string>

void print()
{
    std::cout<<"call function print\n";
}

//4
int globalInt = 12;


int main() {
    //1
    double a[] = {4,8};

    double minus = a[1] - a[0];
    double fl = a[0] / a[1];

    //2
    bool k = false;
    std::string k1 = "abc";
    std::string k2 = "aba";

    if(k1 > k2)
        std::cout<<"abc > aba\n";

    //3
    int con = a[0];
    switch (con)
    {
        case 2:
            std::cout<<"con = "<<2<<'\n';
            break;
        case 4:
            std::cout<<"con = "<<4<<'\n';
            break;
        case 6:
            std::cout<<"con = "<<6<<'\n';
            break;
        case 8:
            std::cout<<"con = "<<8<<'\n';
            break;

    }

    //4
    globalInt = 3;
    std::cout<<"global = "<<globalInt<<'\n';

    //5
    int m = 0;
    while(m < 256)
    {
        ++m;
    }

    //6
    print();

    //7
    int arr[] = {12, 13, 14, 151, 6};

    return 0;
}
