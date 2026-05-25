#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int id;
	string name;
	int age;
	int* marks;
	int count;
	int class_number;
	char class_letter;
	bool alive;

public:

	Student();
	Student(int i, string nm, int ag, int number, char letter, bool a);
	Student(int ag, string nm);
	Student(const Student& student);
	~Student();

	int get_id();
	void set_id(int i);
	string get_name();
	void set_name(string nm);
	int get_age();
	void set_age(int a);
	int get_class_number();
	void set_class_number(int num);
	char get_class_letter();
	void set_class_letter(char letter);
	bool is_alive();
	void set_alive(bool al);
	int* get_marks();
	void set_marks(int* ms, int c);
	int get_count();

	string toString();
};