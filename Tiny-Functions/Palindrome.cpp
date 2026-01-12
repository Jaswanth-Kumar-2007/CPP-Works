#include <iostream>

void palindrome(std::string n){
    int s = n.length();
    std::string p;
    for (int i = 0;i<s;i++){
        p += n[s-i-1];
    }
    if (n == p){
        std::cout << n << " is a palindrome\n";
    }
}

int main(){
    for (int j = 100;j < 10000;j++){
        std::string tempo = std::to_string(j);
        palindrome(tempo);
    }
    return 0;
}