#include <iostream>
#include <vector>
#include <algorithm>

// Sorting

// First Value Based

/*
int main(){
    std::vector<std::pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end());
    for(auto p:vec){
        std::cout << p.first << " " << p.second << std::endl;
    }
    return 0;
}
*/

// Second Value Based

/*
bool comparator(std::pair<int,int> p1,std::pair<int,int> p2){
    if (p1.second < p2.second){
        return true;
    }else{
        return false;
    }
}

int main(){
    std::vector<std::pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end(),comparator);
    for(auto p:vec){
        std::cout << p.first << " " << p.second << std::endl;
    }
    return 0;
}
*/

// reverse(v.begin(),v.end());

// next_permutation(v.begin(),v.end());

// prev_permutation(v.begin(),v.end());

// swap , min , max

// Max and Min Element

/*
int main(){
    std::vector<int> v = {1,2,3,5,6};
    std::cout << *(max_element(v.begin(),v.end()));
}
*/

// Binary Search

/*
int main(){
    std::vector<int> v = {1,2,3,5,6};

    if(std::binary_search(v.begin(), v.end(), 5)){
        std::cout << "Found";
    } else {
        std::cout << "Not Found";
    }
}
*/

// Count Set Bits

/*
int main(){
    int n = 15;
    long int n2 = 15;
    long long int n3 = 15;
    std::cout << __builtin_popcount(n) << std::endl; // 4
    std::cout << __builtin_popcountl(n2) << std::endl; // 4
    std::cout << __builtin_popcountll(n3) << std::endl; // 4
}
*/

// String Stream -> Can Helpul in Different types of parsing