#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Animal {
	private:
		string animalnoise;
		int repeatnumber;
		int age;
	public:
		Animal() {
			animalnoise = NULL;
			repeatnumber = 0;
			age = 0;
		}
		Animal(string animalnoise, int repeatnumber, int age) {
			animalNoise = animalNoise;
			repeatNumber = repeatNumber;
			age = age;
		};
		virtual string noise() const = 0;
		int repeats() const = 0;
		int ageinMonths();
		void print();
};


class Cow : public Animal {
public:
	Cow();
	string noise() {
		string animalnoise = "moo";
	}
	const int Animal::repeatnumber = 2;
};

class Cat : public Animal {
	Cat();
	string noise() {
		string animalnoise = "meow";
	}
	const int Animal::repeatnumber = 1;
};

class Dog : public Animal {
	Dog();
	string noise() {
		string animalnoise = "woof";
	}
	const int Animal::repeatnumber = 3;
};

class Sheep : public Animal {
	Sheep();
	string noise() {
		string animalnoise = "baa";
	}
	const int Animal::repeatnumber = 4;
};

int main() {

	return 0;
}