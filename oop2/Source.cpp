#include <iostream>
#include <string>       
#include <time.h>
using namespace std;

class Human {
public:
	Human();
	Human(
		string name,
		string patronymic,
		string surname,
		tm birthdate
		);
	void setName(string name)const {
		
	}
	string getName()const;
	Human(string name, string surname) {

	};
	// stetters|getters
	void setName(string name);
	// все предикаты с пустым набором аргументов predicate
	bool isAdult();
	// operators and traits
	bool operator == (Human other);
	friend bool operator == (Human a, Human other);
	bool olderThan(int age);
private:
	string name;
	string patronymic;
	string surname;
	tm birthdate;
};

class Student {
public:
	void setName(string name);

private:
	Human person;
	double grades;
	string group;
	string direction;
};











class Huma {
public:
	struct birthday {
		int day;
		int month;
		int year;
	};

	int age;
	string name;
	string gender;
	string phone;
	
	void set_name() {
		cout << "Введите имя: ";
		getline(cin, name);
	}

	void get_name() {
		cout << name << endl;
	}

	void set_birthday(birthday &n) {
		cout << "Введите дату рождения: ";
		cin >> n.day >> n.month >> n.year;
	}

	void get_birthday(birthday& n) {
		cout << "Дата рождения: " << n.day << "." << n.month << "." << n.year << endl;
	}



};

int main() {
	setlocale(LC_ALL, "ru");
	int n;
	Huma first;
	first.set_name();
	first.get_name();


	return 0;
}

Human::Human()
{
}
