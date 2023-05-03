#include <stdio.h>
#include <iostream>
using namespace std;
#if 0
int add(int a, int b) {
	return a + b;
}
int main(void) {
	int a = 1, b = 2;
	int c = add(a, b);
	cout << c << endl;
}
#endif
#if 0
class Student {
public:
	const char* name;
	int age;
};
int main() {
	Student s2 = { "Brad",21 };
	Student s3 = { "Jane",24 };
	cout << s2.name << endl;
	cout << s2.age << endl;
	cout << s3.name << endl;
	cout << s3.age << endl;
}
#endif
#if 0
class student {
private:
	const char* name;
	int age;
public:
	student(const char* name, int age) { this->name = name; this->age = age; }
	const char* getname() {return this->name;}
	int getage() {return this->age;}
	void setage(int age) {this->age = age;}
};
int main(void) {
	student s3("Jane", 24);
	cout << s3.getname() << endl;
	cout << s3.getage() << endl;
	s3.setage(s3.getage() + 1);
	cout << s3.getage() << endl;
}
#endif
#if 0
int Add(int x, int y) {
	cout << "In Add(),received" << x << "and" << y << "\nn";
	return (x + y);
}
int main() {
	cout << "I'm in main()!\n";
	int a, b, c; cout << "Enter two numbers:";
	cin >> a; cin >> b;
	cout << "\nCalling Add()\n";
	c = Add(a, b);
	cout << "\nBreak in main().\n";
	cout << "c was set to" << c;
	cout << "\n Exitng...\n\n";
	return 0;
}
#endif
#if 0
int AreaCube(int length, int width = 25, int height = 1);
int main() {
	int length = 100;
	int width = 50;
	int height = 2;
	int area;
	area = AreaCube(length, width, height);
	cout << "First area equals: " << area << endl;
	area = AreaCube(length, width);
	cout << "Second time area equals: " << area << endl;
	area = AreaCube(length);
	cout << "Third time area equals: " << area << endl;
	return 0;
}
int AreaCube(int length, int width, int height) {
	return (length * width * height);
}
#endif
#if 0
int Double(int);
float Double(float);
int main() {
	int myInt = 6500;
	float myFloat = 6.5F;
	int doubledInt;
	float doubledFloat;
	cout << "myInt: " << myInt << endl;
	cout << "myFloat: " << myFloat << endl;
	doubledInt = Double(myInt);
	doubledFloat = Double(myFloat);
	cout << "doubledInt: " << doubledInt << endl;
	cout << "doubledFloat: " << doubledFloat << endl;
	return 0;
}
int Double(int original) {
	cout << "In Double(int)\n";
	return 2 * original;
}
float Double(float original) {
	cout << "In Double(float)\n";
	return 2 * original;
}
#endif