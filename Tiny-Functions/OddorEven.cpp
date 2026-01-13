#include <iostream>

void oddoreven(int n){
    if (n % 2 == 0){
        std::cout << n << " is Even Number";
    }else{
        std::cout << n << " is Odd Number";
    }
}

int main(){
    int n = 10;
    oddoreven(n);
    return 0;
}