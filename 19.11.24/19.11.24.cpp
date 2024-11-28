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
	virtual void Eat() = 0;
	virtual void Sound() = 0;
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
	cout << endl << endl;

	Dog obj3;
	obj3.Print();
	obj3.Eat();
	obj3.Sound();
	

	Animal * obj;
	int choose = 0;
	cout << "Enter what Animal u want to input " << endl << 
		"1 - Dog" << endl << "2 - Elephant" <<endl<< 
		"3 - Cat" << endl << "4 - Parrot"<<endl;
	cin >> choose;
	switch (choose)
	{
		case(1): 
		{
			obj = new Dog;
			obj->Input();
			obj->Print();
			break;
		}
		case(2):
		{
			obj = new Elephant;
			obj->Input();
			obj->Print();
			break;
		}
		case(3):
		{
			obj = new Cat;
			obj->Input();
			obj->Print();
			break;
		}
		case(4):
		{
			obj = new Parrot;
			obj->Input();
			obj->Print();
			break;
		}
	}
}