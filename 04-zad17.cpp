#include <iostream>

int main(){
    unsigned int n, res = 1, lastRes = 1;
    std::cin>>n;

    if(n == 1 || n == 2)
        std::cout << 1;
    else if(n > 2){
        n -= 2;
        for (int i = 0; i < n; ++i)
        {
            int temp = res;
            res = res + lastRes;
            lastRes = temp;
        }
        std::cout << res;
    }
    
    return 0;
}