#include <iostream>

bool checkprime(int n){
    if (n== 1 || n < 0){
        return false;
    }else{
        for (int i = n-1;i > 1;i--){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n = 1;
    if (checkprime(n)){
        std::cout <<"It is prime";
    }else{
        std::cout << "It is Not Prime";
    }
    return 0;
}