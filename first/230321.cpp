#include <iostream>
using namespace std;
#if 0
int main() {
	int intOne;
	int& rSomeRef = intOne;
	intOne = 5;
	cout << "intOne:\t" << intOne << endl;
	cout << "rSomeRef:\t" << rSomeRef << endl;
	cout << "&intOne:\t" << &intOne << endl;
	cout << "&rSomeRef:\t" << &rSomeRef << endl;
	int intTwo = 8;
	rSomeRef = intTwo;
	cout << "\nintOne:\t" << intOne << endl;
	cout << "intTwo:\t" << intTwo << endl;
	cout << "rSomeRef:\t" << rSomeRef << endl;
	cout << "&intOne:\t" << &intOne << endl;
	cout << "&intTwo:\t" << &intTwo << endl;
	cout << "&rSomeRef:\t" << &rSomeRef << endl;
	return 0;
}
#endif
#if 0
class SimpleCat {
public:
	SimpleCat(int age, int weight); ~SimpleCat() {}
	int GetAge() { return itsAge; }
	int GetWeight() { return itsWeight; }
private:
	int itsAge;
	int itsWeight;
};
SimpleCat::SimpleCat(int age, int weight) {
	itsAge = age;
	itsWeight = weight;
}
int main() {
	SimpleCat Frisky(5, 8);
	SimpleCat& rCat = Frisky;
	cout << "Frisky is: ";
	cout << Frisky.GetAge() << "years old.\n";
	cout << "And Frisky weight: ";
	cout << rCat.GetWeight() << "pounds.\n";
	return 0;
}
#endif
#if 0
void swap(int& x, int& y);
int main() {
	int x = 5, y = 10;
	cout << "Main. Before swap, x: " << x << endl << "y: " << y << endl;
	swap(x, y);
	cout << "Main. After swap, x: " << x << endl << "y: " << y << endl;
	return 0;
}
void swap(int& rx, int& ry) {
	int temp;
	cout << "Swap. Before swap, rx: " << rx << endl << "ry: " << ry << endl;
	temp = rx;
	rx = ry;
	ry = temp;
	cout << "Swap. After swap, rx: " << rx << endl << "ry: " << ry << endl;
}
#endif
#if 0
class SimpleCat {
	string name;
public:
	SimpleCat(string name) { cout << "New " << (this->name=name) << endl; }
	SimpleCat(const SimpleCat& rCat) { cout << "Copy " << (name=rCat.name) <<  endl; }
	~SimpleCat() { cout << "Del " << name <<  endl; }
};
SimpleCat& f1(SimpleCat& psc) { return psc; }
SimpleCat* f2(SimpleCat* psc) { return psc; }
int main() {
	SimpleCat sc("Frisky");
	SimpleCat* psc = new SimpleCat("Tom");
	SimpleCat& rsc = *new SimpleCat("Tom's friend");
	SimpleCat sc2 = sc;
	SimpleCat sc3(rsc);
	SimpleCat& sc4 = f1(sc);
	SimpleCat* sc5 = f2(&sc);

	delete psc;
	delete& rsc;
}
#endif
#if 0
class SimpleCat {
public:
	SimpleCat(int age, int weight);
	~SimpleCat(){}
	int GetAge() { return itsAge; }
	int GetWeight() { return itsWeight; }
private:
	int itsAge;
	int itsWeight;
};
SimpleCat::SimpleCat(int age, int weight):
	itsAge(age),itsWeight(weight){}
SimpleCat& TheFunction();
int main() {
	SimpleCat& rCat = TheFunction();
	int age = rCat.GetAge();
	cout << "rCat is " << age << "years old!\n";
	cout << "&rCat: " << &rCat << endl;
	SimpleCat* pCat = &rCat;
	delete pCat;
	return 0;
}
SimpleCat& TheFunction() {
	SimpleCat* pFrisky = new SimpleCat(5, 9);
	cout << "pFrisky: " << pFrisky << endl;
	return *pFrisky;
}
#endif
#if 0
class Int {
	int value;
public:
	Int() :value(0) {}
	Int(int num) :value(num) {}
	Int(const Int& Num) :value(Num.value) {}
	int getValue() { return value; }
	Int operator+(const Int& j) const {
		Int tmp(this->value + j.value);
		return tmp;}
	Int operator-(const Int& j) const {
		Int tmp(this->value - j.value);
		return tmp;
	}
	Int& operator+=(const Int& j) { 
		this->value += j.value; 
		return *this;
	}
};
int main() {
	Int i = 7;
	cout << i.getValue() << endl;
	Int j = 3;
	cout << j.getValue() << endl;
	Int k = i - j;
	cout << k.getValue() << endl;
	k = j;
	cout << k.getValue() << endl;
	k = i + j;
	cout << k.getValue() << endl;
	k = i += j;
	cout << k.getValue() << endl;

}
#endif
#if 0
class Cat {
public:
	Cat() { itsAge = 1; itsWeight = 5; }
	~Cat() {}
	int GetAge() const { return itsAge; }
	int GetWeight() const { return itsWeight; }
	void SetAge(int age) { itsAge = age; }
private:
	int itsAge;
	int itsWeight;
};
int main() {
	Cat Litter[5];
	int i;
	for (i = 0; i < 5; i++)
		Litter[i].SetAge(2 * i + 1);
	for (i = 0; i < 5; i++) {
		cout << "Cat #" << i + 1 << ": ";
		cout << Litter[i].GetAge() << endl;
	}
	return 0;
}
#endif
#if 0
class Cat {};
int main() {
	int* ip = new int(3);
	cout << *ip << endl;
	delete ip;
	int& ir = *new int(5);
	cout << ir << endl;
	delete& ir;
	int* ip2 = new int[5] {1, 2, 3, 4, 5};
	cout << ip2[3] << endl;
	delete[] ip2;
	Cat& rc = *new Cat;
	delete& rc;
	Cat* pc = new Cat;
	delete pc;
	Cat* pca = new Cat[5];
	delete[] pca;
}
#endif
#if 0
class Cat {
public:
	Cat() { itsAge = 1; itsWeight = 5; }
	~Cat();
	int GetAge() const { return itsAge; }
	int GetWeight() const { return itsWeight; }
	void SetAge(int age) { itsAge = age; }
private:
	int itsAge;
	int itsWeight;
};
Cat :: ~Cat(){
	// cout << "Destructor called!₩n";
}
int main() {
	Cat* Family = new Cat[500];
	int i;
	Cat* pCat;
	for (i = 0; i < 500; i++){
		pCat = new Cat;
		pCat->SetAge(2 * i + 1);
		Family[i] = *pCat;
		delete pCat;
	}
	for (i = 0; i < 500; i++){
		cout << "Cat #" << i + 1 << ": ";
		cout << Family[i].GetAge() << endl;
	}
	delete[] Family;
	return 0;
}
#endif
#if 0
class Computer {
	string CPU;
	int Memory;
	int Disk;
public:
	Computer(string CPU, int Memory, int Disk):
	CPU(CPU), Memory(Memory), Disk(Disk) {}
	string getCPU() const { return CPU; }
	int getMemory() const { return Memory; }
	int getDisk() const { return Disk; }
};
class LaqTop : public Computer {
	string LTKeyboard;
	string LTMonitor;
	string LTTouch;
public:
	LaqTop(string CPU, int Memory, int Disk, string LTKeyboard, string LTMonitor, string LTTouch) :
	Computer(CPU, Memory, Disk), LTKeyboard(LTKeyboard), LTMonitor(LTMonitor), LTTouch(LTTouch) {}
	string getKeyboard() const { return LTKeyboard; }
	string getMonitor() const { return LTMonitor; }
	string getTouch() const { return LTTouch; }
};
int main() {
	Computer& myCom = *new Computer("i5-1235U(1.3GHz)", 16, 256);
	cout << myCom.getCPU() << "," << myCom.getMemory() << "," << myCom.getDisk() << endl;

	delete& myCom;

	LapTop myLapTop = new LaqTop("i9-13900HX(2.2GHz)", 16, 512, "LTKB", "LTMon", "LTTouch");
	cout << myLapTop.getCPU() << "," << myLapTop.getMemory() << "," << myLapTop.getDisk() << endl;
	cout << myLapTop.getKeyboard() << "," << myLapTop.getMonitor() << "," << myLapTop.getTouch() << endl;
}
/*
class DeskTop : public Computer{
	string EXKeyboard;
	string EXMonitor;
	string EXMouse;
};
*/
#endif