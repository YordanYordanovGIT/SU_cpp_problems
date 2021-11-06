#include <iostream>
#include <cmath>

int main(){
    bool running = true;
    unsigned int num;
    unsigned int res = 0;
    unsigned int currIndex = 0;
    std::cin>>num;

    while(running){
        if(num == 0)
            running = false;
        res += (num % 8) * (int)pow(10, currIndex);
        num = num / 8;
        ++currIndex;
    }
    std::cout<<res;

    return 0;
}