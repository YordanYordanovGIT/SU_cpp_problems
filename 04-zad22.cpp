#include <iostream>
#include <cmath>

int getDigitAt(int index, int digits, unsigned long long num);

int main(){
    bool isPalindrome = true;
    unsigned int digCount;
    unsigned long long num;
    std::cin>>num;
    
    //cheating the system
    if(num > 1000000000){
        unsigned int tempNum = num / 1000000000;
        digCount = 10 + (int)log10(tempNum);
    }
    else 
        digCount = (int)log10(num) + 1;

    for (int i = 0; isPalindrome && i < digCount / 2; ++i){
        if(getDigitAt(i, digCount, num) != getDigitAt(digCount - 1 - i, digCount, num))
            isPalindrome = false;
    }

    if(isPalindrome)
        std::cout<<"Palindrome";
    else
        std::cout<<"Not a palindrome";
    
    return 0;
}

int getDigitAt(int index, int digits, unsigned long long num){
    return (num / (unsigned long long)pow(10, digits - index - 1)) % 10;
}