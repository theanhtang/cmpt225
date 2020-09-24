#include <stdio.h>
#include <iostream>
#include <string>
using namespace std; 

class Animal {
    public:
        Animal(){}
        const string animalnoise;
        static const int repeatnumber;
        int age;

        virtual string noise();

        static int repeats(){
            
            return repeatnumber;
        }
        int ageinMonths(){
            return age;
        }

        void print(){
            cout << age << " ";
            for (int i = 0; i < repeatnumber; i++){
                cout << animalnoise << " ";
            }
            cout << "\n";
        }
        
};


class Cow: public Animal{
    string noise(){
        string animalnoise = "moo";
    }
    const int Animal::repeatnumber = 2;
};

class Cat: public Animal{
    string noise(){
        string animalnoise = "meow";
    }
    const int Animal::repeatnumber = 1;
};

class Dog: public Animal{
    string noise(){
        string animalnoise = "woof";
    }
    const int Animal::repeatnumber = 3;
};

class Sheep: public Animal{
    string noise(){
        string animalnoise = "baa";
    }
    const int Animal::repeatnumber = 4;
};

int main(){
    Animal cat = new Cat;
    c.noise();
    return 0;
}