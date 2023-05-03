#include <iostream>
using namespace std;
#if 0
class cat {
	int itsAge;
	const char* name;
public:
	cat(int initialAge, const char* name) {
		cout << "Cat 单捞磐 积己" << name << endl;
		itsAge = initialAge;
		this->name = name;
	}
	~Cat() {
		cout << "Cat 单捞磐 秦力" << this->name << endl;
	}
	int GetAge() { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	void Meow() { cout << "Meow\n"; }
};
Cat Tom(3, "Tom");
int main() {
	Cat Frisky(5, "Frisky");
	Cat* theCat = new cat(7, "Tom's Friend");
	delete theCat;
}
#endif
#if 0
class Student {
public:
	int age;
	int getAge() const { return this->age; }
	void setAge(int newAge) { this->age = newAge; }
};
int main() {
	Student s3 = { 24 };
	cout << s3.getAge() << endl;
	s3.setAge(s3.getAge() + 1);
	cout << s3.getAge() << endl;
}
#endif
#if 0
int main() {
	int localVariable = 5;
	int* pLocal = &localVariable;
	int* pHeap = new int;
	if (pHeap == NULL) {
		cout << "Error! No memory for pHeap!!!";
		return 0;
	}
	*pHeap = 7;
	cout << "localVariable: " << localVariable << endl;
	cout << "*pLocal: " << *pLocal << endl;
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap;
}
#endif
#if 0
class SimpleCat {
public:
	SimpleCat();
	~SimpleCat();
	int GetAge() const { return*itsAge; }
	void SetAge(int age) {*itsAge = age;}
	int GetWeight() const { return*itsWeight; }
	void setWeight(int weight) { *itsWeight = weight; }
private:
	int* itsAge;
	int* itsWeight;
};
SimpleCat::SimpleCat() {
	itsAge = new int(2);
	itsWeight = new int(5);
}
SimpleCat::~SimpleCat() {
	delete itsAge;
	delete itsWeight;
}
int main() {
	SimpleCat* Frisky = new SimpleCat;
	cout << "Frisky is " << Frisky->GetAge() << "years old\n";
	Frisky->SetAge(5);
	cout << "Frisky is " << Frisky->GetAge() << "years old\m";
	delete Frisky;
	return 0;
}
#endif
#if 0
void print(const int* pOne) {
	cout << pOne[0] << " " << pOne[1] << endl;
}
void copy(int* pTwo, const int* pOne) {
	pTwo[0] = pOne[0];
	pTwo[1] = pOne[1];
}
int main() {
	int* pOne = new int[5];
	pOne[0] = 1, pOne[1] = 2;
	cout << pOne[0] << " " << pOne[1] << endl;
	print(pOne);
	cout << pOne[0] << " " << pOne[1] << endl;
	int* pTwo = new int[5];
	copy(pTwo, pOne);
	print(pTwo);
}
#endif
#if 0
class Rectangle { 
	int Length;
public:
	Rectangle(int len) { Length = len; }
	int getLength() const { return Length; }
};
int main() {
	Rectangle* const pRect = new Rectangle(3);
	cout << pRect->getLength() << endl;
	cout << (pRect+1)->getLength() << endl;
}
#endif
#if 0
int main() {
	int* p = new int(3); cout << p << endl;
	p++; cout << p << endl;
	p + 1; cout << p+1 << endl;
	p; cout << p << endl;
	&p; cout << &p << endl;
	*(p - 1); cout << *(p - 1) << endl << endl;

	int i = 4; cout << i << endl;
	int& r = i; cout << r << endl;
	r++; cout << i << " " << r << endl;
	r + 1; cout << i << " " << r << endl;
	r; cout << i << " " << r << endl;
	&r; cout << &i << " " << &r << endl;
}
#endif
#if 0
int main() {
	int i = 3;
	int* p = &i;
	cout << &i << ":" << i << endl;
	cout << &p << ":" << p << endl;
	cout << &i + 1 << ":" << (int *)*(&i + 1) << endl;
}
#endif
#if 0
int main() {
	int i = 3;
	int& p = i;
	cout << &i << ":" << i << endl;
	cout << &p << ":" << p << endl;
	cout << &i + 1 << ":" << (int*)*(&i + 1) << endl;
}
#endif
#if 0
struct Student {
	int age;
};
int getAge(const Student& inst){ return inst.age; }
void setAge(Student& inst, int newAge) { inst.age = newAge; }
int main() {
	Student s3 = { 24 };
	cout << getAge(s3) << endl;
	setAge(s3, getAge(s3) + 1);
	cout << getAge(s3) << endl;
}
#endif
#if 0
int main() {
	int intOne;
	int& rSomeRef = intOne;
	intOne = 5;
	cout << "intOne: " << intOne << endl;
	cout << "rSomeRef: " << rSomeRef << endl;
	rSomeRef = 7;
	cout << "intOne: " << intOne << endl;
	cout << "rSomeRef: " << rSomeRef << endl;
	return 0;
}
#endif
#if 0
int main() {
	int intOne;
	int& rSomeRef = intOne;
	intOne = 5;
	cout << "intOne: " << intOne << endl;
	cout << "rSomeRef: " << rSomeRef << endl;
	cout << "&intOne: " << &intOne << endl;
	cout << "&rSomeRef: " << &rSomeRef << endl;
	return 0;
}
#endif