#include <iostream>

/*
int main(){
    int a = 10;
    std::cout << &a << std::endl;
}
*/

// Memory Address
// Pass By Value vs Pass by Reference
// Pointers
// Null Pointers

// Dynamic Memory

//i.e.

/*
int main(){
    char *pGrades = NULL;
    int size;
    std::cout << "How many Grades to enter ? : ";
    std::cin >> size;

    pGrades = new char[size]; // Dynamic Memory created using new

    for(int i = 0;i < size;i++){
        std::cout << "Enter Grade # " << i+1 << ":";
        std::cin >> pGrades[i];
    }
    for (int i = 0;i < size;i++){
        std::cout << pGrades[i] << " ";
    }
    delete[] pGrades;
    return 0;
}
*/

// Function Templates

// Structs

/*
struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){
    student student1;
    student1.name = "SpongeBob";
    student1.gpa = 3.2;
    student1.enrolled = true;
    std::cout << student1.name;
    return 0;
}
*/

// Pass Structs as Arguments

/*
struct car{
    std::string model;
    int year;
    std::string color;
};

void printcar(car car){
    std::cout<<car.model << "\n";
    std::cout<<car.year;
};

void paintcar(car &car,std::string color){
    car.color = color;
}

int main(){
    car car1;
    car1.model = "Mustang";
    car1.year = 2026;
    car1.color = "blue";
    paintcar(car1,"silver");
    printcar(car1);
}
*/

// Enums

/*
enum Day {sunday = 0,monday = 1,tuesday = 2,wednesday = 3,thursday = 4,friday = 5,saturday = 6};

int main(){
    Day today = tuesday;
    switch (today){
        case sunday:
            std::cout << "It is Sunday! \n";
            break;
        case monday:
            std::cout << "It is Monday ! \n";
            break;
        case tuesday:
            std::cout << "It is Tuesday! \n";
            break;
        case wednesday:
            std::cout << "It is Wednesday! \n";
            break;
        case thursday:
            std::cout << "It is Thursday! \n";
            break;
        case friday:
            std::cout << "It is Friday! \n";
            break;
        case saturday:
            std::cout << "It is Saturday! \n";
            break;
    }
}
*/
