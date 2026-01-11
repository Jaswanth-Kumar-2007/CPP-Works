#include <iostream>

void FizzBuzz(int n){
    if (n%3 == 0 && n%5 == 0){
        std::cout << "FizzBuzz";
    }else if (n%3 == 0){
        std::cout << "Fizz";
    }else if (n%5 == 0){
        std::cout << "Buzz";
    }else{
        std::cout << n << " is not divisible by 3 or 5";
    }
}

int main(){
    int n = 15;
    FizzBuzz(n);
    return 0;
}