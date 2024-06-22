#include <iostream> // for using cout<<
#include <stdio.h>  // for using printf()

int main()
{
    std::cout << "Hello world!\n";

    int a = 100;
    long long int b = 100000000000000;
    float c = 1.50;
    double d = 100.504545;
    char cc = 'A';

    // printf("%d", a); // in c
    // c++ e format specifier korte hoi na
    std::cout << a << "\n";

    // printf("my favourite number is %d", a);
    std::cout << "my favourite number is " << a << "\n";
    std::cout << "my " << a << " favourite number is \n";
    std::cout << a << std::endl
              << b << std::endl;
    return 0;
}