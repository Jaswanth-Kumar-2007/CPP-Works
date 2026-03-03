// Standard Template Library

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

// Sequence Container -> Vector , List , Deque

// Vector

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
begin & end
rbegin & rend
*/

/*
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
    std::cout << "\n#################\n";
    std::vector<int>::iterator it;
    for(it = vec.begin();it != vec.end();it++){
        std::cout << *(it) << std::endl; // 1 100 3 5
    }
    std::cout << "\n#################\n";
    std::vector<int>::reverse_iterator i;
    for(auto i = vec.rbegin();i != vec.rend();i++){
        std::cout << *(i) << std::endl;   // 5 3 100 1
    }

    return 0;
}
*/

// List

/*
size
erase
clear
begin & end
rbegin & rend
insert
front & back
push_back & push_front
emplace_back & emplace_front
pop_back & pop_front
*/

/*
int main(){
    std::list<int> l;
    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);
    l.pop_back();
    l.pop_front();
    for(int val:l){
        std::cout << val << " ";
    }
    std::cout << l.size();
}
*/

// Deque

/*
size
erase
clear
begin & end
rbegin & rend
insert
front & back
push_back & push_front
emplace_back & emplace _front
pop_back & pop_front
*/

/*
int main(){
    std::deque<int> d = {1,2,3};
    d.push_back(4);
    d.push_front(0);
    d.pop_front();
    for(int i:d){
        std::cout << i << " ";
    }
}
*/

// Pair

/*
int main(){
    std::pair<int,std::pair<char,int>> p = {1,{'a',3}};
    std::cout << p.first;
    std::cout << p.second.first;
    std::cout << p.second.second;
    return 0;
}
*/

/*
int main(){
    std::vector<std::pair<int,int>> vec = {{1,2},{2,3},{3,4}};
    vec.push_back({4,5});
    vec.emplace_back(5,6);
    for(std::pair<int,int>p:vec){
        std::cout << p.first << " " << p.second  << std::endl;  
    }
    return 0;
}
*/

// Stack

/*
push,emplace
top
pop
size
empty
swap
*/

/*
int main(){
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    std::stack<int> s2;
    s2.swap(s);
    std::cout << s.size() << std::endl; //0
    std::cout << s2.size(); //3
}
*/

// Queue

/*
push,emplace
front
pop
size
empty
swap
*/

/*
int main(){
    std::queue<int> q;
    q.push(1);
    q.push(2);
    std::cout << q.size() << std::endl; //2
}
*/

// Priority Queue

/*
push ,emplace
top
pop
size
empty
*/

/*
int main(){
    std::priority_queue<int> q;
}
*/

// Map

/*
insert,emplace
count
erase
find
size
empty
*/

/*
int main(){
    std::map<std::string,int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["watch"] = 50;
    m.emplace("camera",25);
    for(auto p:m){
        std::cout << p.first << " " << p.second << std::endl;
    }
    if(m.find("camera") != m.end()){
        std::cout << "found";
    }else{
        std::cout << "not found";
    }
    std::cout << std::endl;
    std::cout << m.count("tv");
    return 0;
}
*/

// MultiMap

/*
int main(){
    std::multimap <std::string,int>m;
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.erase(m.find("tv"));
    return 0;
}
*/

// Unordered Map

/*
int main(){
    std::unordered_map<std::string,int> m;
    m.emplace("tv",100);
    m.emplace("laptop",100);
}
*/

// Set

/*
int main(){
    std::set<int> s;
    s.insert(1);
    s.insert(2);
    std::cout << s.size() << std::endl;
}
*/

// MultiSet

// Unordered Set