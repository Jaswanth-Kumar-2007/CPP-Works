#include <iostream>

void helloworld(){
    std::cout << "Hello World C++" << std::endl;
}

void happybirthday(std::string name){
    std::cout << "Happy Birthday" << " " << name << std::endl;
}
int main(){
    helloworld();
    happybirthday("kjk");
    return 0;
}