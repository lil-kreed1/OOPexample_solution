#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	int id;
	string name;
	int age;
	double* marks;
	int class_number;
	char class_letter;
	bool alive;

	Student() {
		//cout << "student default constructor..." << endl;
		id = 0;
		name = "";
		age = 0;
		marks = new double[3] {1, 2, 3};
		class_number = 0;
		class_letter = '\0';
		alive = false;
	}

	Student(int i, string nm, int ag, int number, char letter, bool a) {
		cout << "student canonical constructor..." << endl;
		id = i;
		name = nm;
		age = ag;
		class_number = number;
		class_letter = letter;
		alive = a;
	}

	Student(string nm, int ag) {
		id = 0;
		name = nm;
		age = ag;
		class_number = 0;
		class_letter = '\0';
		marks = 0;
		alive = true;
	}

	Student(int ag, string nm) {
		id = 0;
		name = nm;
		age = ag;
		class_number = 0;
		class_letter = '\0';
		marks = 0;
		alive = true;
	}

	Student(const Student& student) {
		cout << "student copy-constructor..." << endl;
		/*id = student.id;
		name = student.name;
		age = student.age;
		class_number = student.class_number;
		class_letter = student.class_letter;
		mark = student.mark;
		alive = student.alive*/;
	}

	string toString() {
		string s = "student: ";
		s += name;
		s += "[#" + to_string(id) + "]";
		s += ", age = " + to_string(age);
		s += ", class  = " + to_string(class_number) + to_string(class_letter);
		s += ", marks = { " + to_string(marks[0]) + ", " + to_string(marks[1]) 
			+ ", " + to_string(marks[2]) + " }";
		s += ", alive = ";
		s += (alive ? "yes" : "no");
		return s;
	}
};