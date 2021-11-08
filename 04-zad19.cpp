#include <iostream>
#include <cmath>
#include <cstring>

#define MAX_DIGITS 100
char num[MAX_DIGITS + 1];

int main(){
    unsigned int res = 0;
    std::cin.getline(num, MAX_DIGITS, '\n');
    unsigned int numLength = std::strlen(num);

    for (int i = 0; i < numLength; ++i){
        res += (num[numLength - 1 - i] - '0');
    }
    std::cout<<res;
    
    return 0;
}