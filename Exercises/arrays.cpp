#include <iostream>

/*
int main(){
    std::string fruits[] = {"apple","banana","grapes"};
    fruits[0] = "guava";
    std::cout << fruits[0];
    for(int i = 0;i < sizeof(fruits)/sizeof(fruits[0]);i++){
        std::cout << fruits[i] << std::endl;
    }

    ->foreachloop
    for(std::string fruit:fruits){
        std::cout << fruit << std::endl;
    }
}
*/

//Bubble Sort
//Sorting of an Array

/*
int main(){
    int num[] = {10,1,1,26,-4,7,6,5};
    for(int i = 0;i < (sizeof(num)/sizeof(num[0]))-1;i++){
        for(int j = 0;j < (sizeof(num)/sizeof(num[0]))-1;j++){
            if(num[j] > num[j+1]){
                int s = num[j+1];
                num[j+1] = num[j];
                num[j] = s;
            }
        }
    }
    for(int n:num){
        std::cout << n << " ";
    }
}
*/

//Fill function

/*
int main(){
    const int size = 10;
    std::string foods[size];
    fill(foods,foods+(size/2),"pizza");
    fill(foods+(size/2),foods+size,"hamburger");
    for(std::string food:foods){
        std::cout << food << "\n";
    }
    return 0;
}
*/

//Multidimensional arrays
/*
int main(){
    std::string words[][3] = {{"apple","animal","ant"},{"ball","ballon","barrel"},{"cat","carrot","camel"}};
    int rows = sizeof(words)/sizeof(words[0]);
    int column = sizeof(words[0])/sizeof(words[0][0]);
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < column;j++){
            std::cout << words[i][j] << " ";
        }
        std::cout << "\n";
    }
}
*/

//Recursion

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    std::cout << factorial(5);
    return 0;
}




