#include <iostream>

void timeconverter(int n){
    int hour = n/3600;
    int temp = n%3600;
    int min = temp/60;
    int sec = temp%60;
    std::cout << hour << "H :" << min << "M :" << sec << "S";
}

int main(){
    int n = 12000;
    timeconverter(n);
    return 0;
}