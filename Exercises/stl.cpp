// Standard Template Library

#include <iostream>
#include <vector>

/*
size & capacity
push_back & pop_back
emplace_back
at() or []
front & back
erase
insert
clear
empty
begin
end
*/

int main(){
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.pop_back();
    vec.emplace_back(5);
    std::cout << vec.size() << std::endl; // 3
    std::cout << vec.capacity() << std::endl; // 4
    vec.insert(vec.begin()+2,100);
    vec.erase(vec.begin()+1);
    std::cout << vec[2] << std::endl;
    for(int i : vec){
        std::cout << i << " "; // 1 2 3
    }
    std::cout << std::endl;
    std::cout << "front " << vec.front() << std::endl;
    std::cout << "back " << vec.back() << std::endl;
    return 0;
}

