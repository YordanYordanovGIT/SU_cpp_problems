#include <iostream>

int main(){
    //max:12!
    unsigned int n, fact = 1;
    std::cin>>n;

    while(n > 1){
        fact*=n;
        n--;
    }
    std::cout<<fact;

    return 0;
}