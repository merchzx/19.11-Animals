#include <iostream>
#include <string>
using namespace std;


class Animal
{
protected:
	string name;
	string spacies;
	double weight;
	string continent;
public:
	Animal() = default;
	Animal(const char* _name, const char* king, const char* cont, double _wei) {
		name = _name;
		spacies = king;
		continent = cont;
		weight = _wei;
	}
	void Input() {
		cout << "Input name - ";
		cin >> name;

		cout << "Input kingdown - ";
		cin >> spacies;

		cout << "Input weight - ";
		cin >> weight;

		cout << "Input continent - ";
		cin >> continent;
	}
	void Print() {
		cout << "Name - " << name << endl << "Spacies - " << spacies << endl << "Weight - " << weight << endl << "Continent - " << continent << endl;
	}
	void Eat() {
		cout << "-";
	}
	void Sound() {
		cout << "-";
	}
};

class Elephant :public Animal {
public:
	Elephant() {}
	Elephant(const char* _name, const char* king, const char* cont, double _wei):Animal(_name,king,cont,_wei){}
	void Sound() {
		cout << "FOO-OOO-OOO-OOO-OOO" << endl;
	}
	void Eat() {
		cout << "Elephants are травоядные" << endl;
	}
};

class Cat :public Animal {
public:
	Cat() {}
	Cat(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "Meow-Meow" << endl;
	}
	void Eat() {
		cout << "Cats are хищники и могут есть корм" << endl;
	}
};

class Dog :public Animal {
public:
	Dog() {}
	Dog(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "Gav-Gav-Gav" << endl;
	}
	void Eat() {
		cout << "Dogs are хищники и могут есть корм" << endl;
	}
};

class Parrot :public Animal {
public:
	Parrot() {}
	Parrot(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "Chirik-Chirik-Chirik" << endl;
	}
	void Eat() {
		cout << "Parrots are травоядные" << endl;
	}
};






int main() 
{
	setlocale(0, "ru");
	Elephant obj1("Indian elephant", "Elephant", "Asia", 5000);
	obj1.Print();
	obj1.Eat();
	obj1.Sound();

	Cat obj2("Kisya", "Cats", "Everywhere", 12);
	obj2.Print();
	obj2.Eat();
	obj2.Sound();
}