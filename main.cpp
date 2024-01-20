#include <iostream>

unsigned long long factorial_loop(unsigned int n) 
{
    unsigned long long result = 1;
    for (unsigned int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

unsigned long long factorial_recursive(unsigned int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() 
{
    unsigned int loop;
    std::cout << "Enter a positive integer(loop): ";
    std::cin >> loop;
    std::cout << "Factorial of " << loop << " is " << factorial_loop(loop) << std::endl;
    


    unsigned int rec;
    std::cout << "Enter a positive integer(recursive): ";
    std::cin >> rec;
    std::cout << "Factorial of " << rec << " is " << factorial_recursive(rec) << std::endl;
    return 0;
}



