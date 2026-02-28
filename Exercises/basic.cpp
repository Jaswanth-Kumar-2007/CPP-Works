#include <iostream>
#include <cmath> //Line:76
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <algorithm>
// Basics of C++

/*
Single Line Comment - //
Multiple Line Comment 
*/

/*
Variables & Data Types :

int
double
char
string
bool
*/

/*
namespace first{
    int x = 1;
}
*/

//typedef int number_t;
//using text_t = std::string;

int main(){
    /*
    int age = 21;
    double price = 10.99;
    char grade = 'A';
    bool student = true;
    std::string name = "Bro";
    std::cout << age << "\n";
    std::cout << price << "\n";
    std::cout << grade << "\n";
    std::cout << student << "\n";
    std::cout << name << "\n";
    */
    
    //const double PI = 3.14;

    /*
    int x = 0;
    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    */

    /*
    text_t firstname = "Bro";
    number_t age = 21;
    std::cout << firstname << " " << age << std::endl;
    */

    //Arithmetic Operators

    /*
    String Conversions
    std::stoi()
    std::stol()
    std::stod()
    std::stold;
    std::to_string(value)
    */

    //std::cout << (char)100;

    /*
    std::string name;
    std::cout << "What is your Name: ?";
    std::getline(std::cin,name); //Get Along with Spaces
    std::cout << name << std::endl;
    */

    //cmath
    
    /*
    double x = 3;
    double y = 4;
    double z;
    z = std::max(x,y);
    z = std::min(x,y);
    z = pow(x,y);
    z = sqrt(y);
    z = abs(-x);
    z = round(3.14);
    z = ceil(3.14);
    z = floor(3.99);
    std::cout << z;
    */

    //std::fixed and std::precision
    /*
    double pi = 3.14159265;
    std::cout << std::fixed << std::setprecision(3) << pi << std::endl;
    */

    /*
    double val = 5.5555;
    printf("%.3f\n",val);
    */

    // If-Else Statements

    /*
    int n;
    std::cout << "Enter the Day No.: " ;
    std::cin >> n;
    switch(n){
        case 0:
            std::cout << "Monday";
            break;
        case 1:
            std::cout << "Tuesday";
            break;\
        case 2:
            std::cout << "Wednesday";
            break;
        case 3:
            std::cout << "Thursday";
            break;
        case 4:
            std::cout << "Friday";
            break;
        case 5:
            std::cout << "Saturday";
            break;
        case 6:
            std::cout << "Sunday";
            break;
    }
    */

    //Ternary Operator
    /*
    int grade = 50;
    grade >= 60 ? std::cout << "You Pass !" : std::cout << "You Fail !";
    */

    // Logical Operator - && , || , !

    //String Methods in C++
    /*
    std::string s = "Hello";
    std::cout << s.length();
    std::cout << s.size();
    std::cout << s[0];
    std::cout << s[1];
    std::cout << s.front();
    std::cout << s.back();
    std::cout << s << std::endl;
    std::string b = "World";
    std::string c = s+b;
    std::cout << c;
    s.append("Boy");
    std::cout << s << std::endl;
    s.push_back('!');
    std::cout << s << std::endl;
    s.pop_back();
    */

    // std::string a = "HelloWorld";
    // std::cout << a.substr(0,6);
    // std::cout << a.find("World");
    /*
    if(s.find("Hello") == std::string::npos){
        std::cout << "Not Found";
    }
    */
    // std::cout << a.erase(5,5);
    // std::cout << a.insert(5,"World");
    // std::cout << a.replace(5,5,"C++");

    //Include algorithm
    //reverse(a.begin(),a.end());
    // sort(a.begin(),a.end());
    /*
    for(char &s:a){
        s=tolower(s);
    }
    std::cout << a; //helloworld
    std::cout << "\n";
    for(char &s:a){
        s=toupper(s);
    }
    std::cout << a; //HELLOWORLD
    */
    
    /*
    std::cout << isdigit('5') << std::endl; // 0 -> False ,  None Zero -> True
    std::cout << isalpha('a') << std::endl;
    std::cout << isalnum('a') << std::endl;
    */

    /*
    int x = 10;
    std::string s = std::to_string(x);
    std::string b = "123";
    int y = stoi(b);
    std::cout << s << " " << y;
    */

    //Remove Spaces
    /*
    std::string s = "a b c";
    std::string res = "";
    for(char c:s){
        if(c != ' '){
            res += c;
        }
    }
    std::cout << res;
    */

    /*
    std::string name;
    std::cout << "Enter your Name: ";
    std::getline(std::cin,name);
    std::cout << name.empty();
    std::cout << name.cleart();
    */
    
    /*
    -->While loop
    int i = 0;
    while(i < 5){
        std::cout << i << std::endl;
        i++;
    }
    */

    /*
    -->Do-While Loop
    int number;
    do{
        std::cout << "Enter Positive : ";
        std::cin >> number;
    }while(number < 0);
    */

    /*
    for(int i = 0;i < 5;i++){
        if(i == 0){
            continue;
        }
        std::cout << i << std::endl;
    }
    */

    /*
    srand(time(0)); //srand(time(NULL));
    int num = (rand()%20)+1; //0 to 19
    std::cout << num;
    */

    return 0;
}