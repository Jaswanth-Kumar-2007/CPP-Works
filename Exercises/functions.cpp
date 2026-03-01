#include <iostream>

void helloworld(){
    std::cout << "Hello World C++" << std::endl;
}

void happybirthday(std::string name){
    std::cout << "Happy Birthday" << " " << name << std::endl;
}

int square(int n){
    return n*n;
}

//OverLoaded functions
/*
int main(){
    helloworld();
    happybirthday("kjk");
    int ans = square(2);
    std::cout << ans;
    return 0;
}
    */

int myNum = 3;
void printNum();

int main(){
    int myNum = 1;
    printNum();
    std::cout << ::myNum << std::endl; //::myNum means Global --> 3
    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum << std::endl;
}