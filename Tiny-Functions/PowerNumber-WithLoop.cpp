#include <iostream>

double power(double x,double n){
    double ans = 1;
    for (double i = 0;i < n;i++){
        ans *= x;
    }
    std::cout << "Answer is " << ans;
}

int main(){
    power(5,10);
    return 0;
}