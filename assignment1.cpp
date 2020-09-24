#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	Animal();
	virtual string noise() const = 0;
	static int repeats() {

		return repeatnumber;
	}
	int ageinMonths() {
		return age;
	}

	void print() {
		cout << age << " ";
		for (int i = 0; i < repeatnumber; i++) {
			cout << animalnoise << " ";
		}
		cout << "\n";
	}

};


class Cow : public Animal {
private:
	const string animalnoise;
	static const int repeatnumber;
	int age;
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
	Animal cat = new Cat;
	c.noise();
	return 0;
}