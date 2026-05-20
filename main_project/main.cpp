#include "student.h"

//void print(Student student) {
//	cout << "in print function:\n";
//	cout << student.toString() << endl;
//}

//Student get_best_student() {
//	Student alex(123, "alex", 14, 9, 'a', true);
//	return alex;
//}

int main() {
	Student alex(123, "alex", 14, 9, 'a', true);

	Student vlad = alex;

	cout << "before: ";
	cout << alex.toString() << endl;
	cout << vlad.toString() << endl;

	alex.id = 1000;
	alex.marks[0] = 5;
	alex.marks[1] = 5;
	alex.marks[2] = 5;

	cout << "after: ";
	cout << alex.toString() << endl;
	cout << vlad.toString() << endl;

	return 0;
}