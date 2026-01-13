#include <iostream>

int main(){
    int n = 256;
    int temp = n;
    int res = 0;
    while (n != 0){
        res += n%10;
        n = n/10;
    }
    std::cout << "Sum of Digits of " << temp << " is " << res;
    return 0;
}