//https://github.com/triffon/ip-2021-22/blob/master/practicum/2/04-loops/04-tasks.pdf
#include <iostream>
#include <cmath>

bool isPrime(int x);

int main(){
    unsigned int num;
    std::cin>>num;

    /* The only even prime number is 2 and (even + odd) = odd, 
    so it is an easy to solve case.*/
    bool isEven = num % 2 == 0;
    bool isAnswerYes = false;

    if(num < 5)
        std::cout << "no";
    else if(!isEven && isPrime(num - 2))
        std::cout << "yes";
    else if(isEven){
        for (int i = num - 3; !isAnswerYes && i > num / 2; --i){
            if(isPrime(i) && isPrime(num - i))
                isAnswerYes = true;
        }
        isAnswerYes ? std::cout << "yes" : std::cout << "no";
    }
    else
        std::cout << "no";
    
    return 0;
}

bool isPrime(int x){
    bool isPrime = true;
    int max = (int)sqrt(x);

    for (int i = 2; isPrime && i <= max; ++i)
        if(x % i == 0) isPrime = false;
    
    return isPrime;
}