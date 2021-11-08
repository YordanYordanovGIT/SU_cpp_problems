#include <iostream>

int main(){
    int x, y;
    std::cin >> x >> y;

    while (y != 0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    std::cout << x;
    
    return 0;
}