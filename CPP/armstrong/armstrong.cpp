#include <iostream>
#include <math.h>
int main()
{
    int num;
    std::cout<<"Enter NO: ";
    std::cin>>num;         // i/p the number
    int OGnum = num; // for calculations

    int remainder;
    int n = 0;      // to count the number of digits
    int result = 0; // to store the final result

    // count the number of digits
    while (OGnum != 0)
    {
        OGnum /= 10;
        n++;
    }
    // now n= number of digits
    OGnum = num; // reset the OGnum
    while (OGnum != 0)
    {
        remainder = OGnum % 10;
        result = result + pow(remainder, n);
        OGnum /= 10;
    }
    if (result == num){
        std::cout<< num << " is an Armstrong number." << std::endl;
    }
    else
        std::cout << num << " is not an Armstrong number." << std::endl;
    return 0;
}