#include <iostream>

// Basic

/*
class Human{
    public:
    std::string name;
    std::string occupation;
    int age;

    void eat(){
        std::cout << "This person is Eating\n";
    }
    void drink(){
        std::cout << "This person is drinking\n";
    }
    void sleep(){
        std::cout << "This person is sleeping\n";
    }
};

int main(){
    Human human1;
    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;
    human1.eat();
}
*/

// Constructors

/*
class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name,int age,double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main(){
    Student student1("Spongebob",25,3.2);
    std::cout << student1.name;
    return 0;
}
*/

// Getters & Setters

/*
class Stove{
    private:
        int temperature = 0;
    public:
    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        this->temperature = temperature;
    }
};

int main(){
    Stove stove;
    stove.setTemperature(100000);
    std::cout << stove.getTemperature();
}
*/

// Inheritance

/*
class Shape{
    public:
        double area;
        double volume;
};

class Cube:public Shape{
    public:
        double side;
    Cube (double side){
        this->side = side;
        this->area = side*side*6;
        this->volume = side*side*side;
    }
};

class Sphere:public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4*3.14159*radius*radius;
        this->volume = (4/3.0)*3.14159*radius*radius*radius;
    }
};

int main(){
    Cube cube(10);
    std::cout << "Area:" << cube.area << "cm/n";
    Sphere sphere(5);
}
*/

