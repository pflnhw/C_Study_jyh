#include <iostream>
using namespace std;
#if 0
enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };
class Mammal {
public:
	Mammal(); ~Mammal();
	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight() const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }
	void Speak() const { cout << "Mammal sound!\n"; }
	void Sleep() const { cout << "shhh.i'msleeping.\n"; }
protected:
	int itsAge;
	int itsWeight;
};
class Dog :public Mammal {
public:
	Dog(); ~Dog();
	BREED GetBreed() const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }
	void WagTail() { cout << "Tail wagging...\n"; }
	void BegForFood() { cout << "Begging for food...\n"; }
private:
	BREED itsBreed;
};
Mammal::Mammal() :
	itsAge(1), itsWeight(5) {
	cout << " Mammal constructor...\n";
}
Mammal::~Mammal() {
	cout << " Mammal destructor...\n";
}
Dog::Dog() :
	itsBreed(YORKIE){
	cout << "Dog constructor...\n";
		}
Dog::~Dog() {
	cout << "Dog destructor...\n";
}
int main() {
	Dog fido;
	fido.Speak();
	fido.WagTail();
	cout << "Fido is " << fido.GetAge() << " years old" << endl;
	return 0;
}
#endif
#if 0
enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };
class Mammal {
public:
	Mammal() { cout << " Mammal constructor...\n"; }
	~Mammal() { cout << " Mammal destructor...\n"; }
	void Speak() const { cout << "Mammal sound!\n"; }
	void Sleep() const { cout << "shhh.i'msleeping.\n"; }
protected:
	int itsAge;
	int itsWeight;
};
class Dog :public Mammal {
public:
	Dog() { cout << "Dog constructor...\n"; }
	~Dog() { cout << "Dog destructor...\n"; }
	void WagTail() { cout << "Tail wagging...\n"; }
	void BegForFood() { cout << "Begging for food...\n"; }
	void Speak() const { cout << "Woof!\n"; }
private:
	BREED itsBreed;
};
int main() {
	Mammal bigAnimal;
	Dog fido;
	bigAnimal.Speak();
	fido.Speak();
	return 0;
}
#endif
#if 0
class Mammal {
public:
	void Move() const { cout << "Marmal move one step\n"; }
	void Move(int distance) const {
		cout << " Mammal move ";
		cout << distance << " +steps.\n";
	}
protected:
	int itsAge;
	int itsWeight;
};
class Dog :public Mammal {
public:
	void Move() const { cout << "Dog move 5 steps.\n"; }
};
int main() {
	Mammal bigAnimal;
	Dog fido;
	bigAnimal.Move();
	bigAnimal.Move(2);
	fido.Move();
	return 0;
}
#endif
#if 0
class USB {
public:
	virtual void connect() = 0;
	virtual void read() = 0;
};
class USBDisk : public USB {
public:
	virtual void connect() { cout << "USB Disk 연결" << endl; }
	virtual void read() { cout << "USB Disk 읽기" << endl; }
};
class USBMouse : public USB {
public:
	virtual void connect() { cout << "USB Mouse 연결" << endl; }
	virtual void read() { cout << "USB Mouse 읽기" << endl; }
};
class DeskTop {
	USB* usb0;
public:
	DeskTop() {}
	void connect(USB& rusb) { usb0 = &rusb; usb0->connect(); usb0->read(); }
};
class USBWifi : public USB {
public:
	virtual void connect() { cout << "USB Wifi 연결" << endl; }
	virtual void read() { cout << "USB Wifi 읽기" << endl; }
};
int main() {
	DeskTop& myDeskTop = *new DeskTop();
	USBDisk& myUSBDisk = *new USBDisk();
	myDeskTop.connect(myUSBDisk);
	USBMouse& myUSBMouse = *new USBMouse();
	myDeskTop.connect(myUSBMouse);
	USBWifi& myUSBWifi = *new USBWifi();
	myDeskTop.connect(myUSBWifi);

	delete& myUSBWifi;
	delete& myUSBMouse;
	delete& myUSBDisk;
	delete &myDeskTop;
}
#endif
#if 0
class Mammal {
public:
	Mammal() :itsAge(1) { cout << " Mammal constructor...\n"; }
	~Mammal() { cout << " Mammal destructor...\n"; }
	void Move() const { cout << "Mammal move one step\n"; }
	virtual void Speak() const { cout << "Mammal speak!\n"; }
protected:
	int itsAge;
};
class Dog :public Mammal {
public:
	Dog() { cout << "Dog constructor...\n"; }
	~Dog() { cout << "Dog destructor...\n"; }
	void WagTail() { cout << "Wagging Tail...\n"; }
	void Speak() const { cout << "Woof!\n"; }
	void Move() const { cout << "Dog moves 5 steps...\n"; }
};
int main() {
	Mammal* pDog = new Dog;
	pDog->Move();
	pDog->Speak();
	return 0;
}
#endif
#if 0
class Mammal {
public:
	Mammal():itsAge(1) {}
	~Mammal() {}
	virtual void Speak() const { cout << "Mammal speak!\n"; }
protected:
	int itsAge;
};
class Dog :public Mammal {
public:
	void Speak() const { cout << "Woof!\n"; }
};
class Cat :public Mammal {
public:
	void Speak() const { cout << "Meow!\n"; }
};
class Horse :public Mammal {
public:
	void Speak() const { cout << "Winnie!\n"; }
};
class Pig :public Mammal {
public:
	void Speak() const { cout << "Oink!\n"; }
};
int main() {
	Mammal* theArray[5];
	Mammal* ptr;
	int choice, i;
	for (i = 0; i < 5; i++) {
		cout << "(1)dog (2)cat (3)horse (4)pig: ";
		cin >> choice;
		switch (choice) {
		case 1:ptr = new Dog;
			break;
		case 2:ptr = new Cat;
			break;
		case 3:ptr = new Horse;
			break;
		case 4:ptr = new Pig;
			break;
		default: ptr = new Mammal;
			break;
		}
		theArray[i] = ptr;
	}
	for (i = 0; i < 5; i++)
		theArray[i]->Speak();
	return 0;
}
#endif
#if 0
enum BOOL { FALSE, TRUE };
class Mammal {
public:
	Mammal() :itsAge(1) {}
	~Mammal() {}
	virtual void Speak() const { cout << "Mammal speak!\n"; }
protected:
	int itsAge;
};
class Dog :public Mammal {
public:
	void Speak() const { cout << "Woof!\n"; }
};
class Cat :public Mammal {
public:
	void Speak() const { cout << "Meow!\n"; }
};
void ValueFunction(Mammal);
void PtrFunction(Mammal*);
void RefFunction(Mammal&);
int main() {
	Mammal* ptr = 0;
	int choice;
	while (1) {
		BOOL fQuit = FALSE;
		cout << "(1)dog (2)cat (0)Quit:";
		cin >> choice;
		switch (choice) {
		case 0:fQuit = TRUE;
			break;
		case 1:ptr = new Dog;
			break;
		case 2:ptr = new Cat;
			break;
		default: ptr = new Mammal;
			break;
		}
		if (fQuit)
			break;
		PtrFunction(ptr);
		RefFunction(*ptr);
		ValueFunction(*ptr);
	}
	return 0;
}
void ValueFunction(Mammal MammalValue) {
	MammalValue.Speak();
}
void PtrFunction(Mammal* pMammal) {
	pMammal->Speak();
}
void RefFunction(Mammal& rMammal) {
	rMammal.Speak();
}
#endif
#if 0
enum TYPE { HORSE, PEGASUS };
class Horse {
public:
	virtual void Gallop() { cout << "Galloping...\n"; }
private:
	int itsAge();
};
class Pegasus : public Horse {
public:
	virtual void Fly() { cout << " i can fly! i can fly! i can fly!\n"; }
};
const int NumberHorses = 5;
int main() {
	Horse* Ranch[NumberHorses];
	Horse* pHorse;
	int choice, i;
	for (i = 0; i < NumberHorses; i++) {
		cout << "(1)Horse (2)Pegasus: ";
		cin >> choice;
		if (choice == 2)
			pHorse = new Pegasus;
		else
			pHorse = new Horse;
		Ranch[i] = pHorse;
	}
	cout << "\n";
	for (i = 0; i < NumberHorses; i++) {
		Pegasus* pPeg = dynamic_cast<Pegasus*>(Ranch[i]);
		if (pPeg)
			pPeg->Fly();
		else
			cout << "Just a horse\n";
		delete Ranch[i];
	}
	return 0;
}
#endif
#if 0
class Horse {
public:
	Horse() { cout << "Horse constructor..."; }
	virtual ~Horse() { cout << "Horse destructor..."; }
	virtual void Whinny() const { cout << "Whinny!..."; }
private:
	int itsAge;
};
class Bird {
public:
	Bird() { cout << "Bird constructor..."; }
	virtual ~Bird() { cout << "Bird destructor..."; }
	virtual void Chirp() const { cout << "Chirp!..."; }
	virtual void Fly() const {
		cout<< "i can fly!i can fly!i can fly! "; 
	}
private:
	int itsWeight;
};
class Pegasus : public Horse, public Bird {
public:
	void Chirp() const { Whinny(); }
	Pegasus() { cout << "Pegasus constructor..."; }
	~Pegasus() { cout << "Pegasus destructor..."; }
};
const int MagicNumber = 2;
int main() {
	Horse* Ranch[MagicNumber];
	Bird* Aviary[MagicNumber];
	Horse* pHorse;
	Bird* pBird;
	int choice, i;
	for (i = 0; i < MagicNumber; i++) {
		cout << "\n(1)Horse (2)Pegasus: ";
		cin >> choice;
		if (choice == 2)
			pHorse = new Pegasus;
		else
			pHorse = new Horse;
		Ranch[i] = pHorse;
	}
	for (i = 0; i < MagicNumber; i++) {
		cout << "\n(1)Bird (2)Pegasus: ";
		cin >> choice;
		if (choice == 2)
			pBird = new Pegasus;
		else
			pBird = new Bird;
		Aviary[i] = pBird;
	cout << "\n";
	for (i = 0; i < MagicNumber; i++) {
		cout << "\nRanch[" << i << "]:";
		Ranch[i]->Whinny();
		delete Ranch[i];
	}
	for (i = 0; i < MagicNumber; i++) {
		cout << "\nAviary[" << i << "]:";
		Aviary[i]->Chirp();
		Aviary[i]->Fly();
		delete Aviary[i];
	}
	return 0;
	}
}
#endif
#if 0
enum BOOL { FALSE, TRUE };
class Shape {
public:
	Shape() {}
	~Shape() {}
	virtual long GetArea() = 0;
	virtual long GetPerim() = 0;
	virtual void Draw() = 0;
private:
};
void Shape::Draw() {
	cout << "Abstract drawing mechanism!\n";
}
class Circle : public Shape {
public:
	Circle(int radius):itsRadius(radius){}
	~Circle(){}
	long GetArea() { return 3 * itsRadius * itsRadius; }
	long GetPerim() { return 9 * itsRadius; }
	void Draw();
private:
	int itsRadius;
	int itsCircumference;
};
void Circle::Draw() {
	cout << "Circle drawing routine here!\n";
	Shape::Draw();
}
class Rectangle : public Shape{
public:
	Rectangle(int len, int width) :
	itsLength(len), itsWidth(width) {}
	~Rectangle() {}
	long GetArea() { return itsLength * itsWidth; }
	long GetPerim() { return 2 * itsLength + 2 * itsWidth; }
	virtual int GetLength() { return itsLength; }
	virtual int GetWidth() { return itsWidth; }
	void Draw();
private:
	int itsWidth;
	int	itsLength;
};
void Rectangle::Draw(){
	for (int i = 0; i < itsLength; i++) {
		for (int j = 0; j < itsWidth; j++)
			cout << "x ";
		cout << "\n";
	}
	Shape::Draw();
}
class Square : public Rectangle{
public:
	Square(int len);
	Square(int len, int	width);
	~Square() {}
	long GetPerim() { return 4 * GetLength(); }
};
Square::Square(int len) : Rectangle(len, len){}
Square::Square(int len, int	width) : Rectangle(len, width) {
	if (GetLength() != GetWidth())
		cout << "Error, not a square... a Rectangle??\n";
}
int main(){
	int	choice;
	BOOL fQuit = FALSE;
	Shape* sp;
	while (1) {
		cout << "(1)Circle (2)Rectangle (3)Square (0)Quit: ";
		cin	>> choice;
		switch (choice)	{
		case 1: sp = new Circle(5);
			break;
		case 2: sp = new Rectangle(4, 6);
			break;
		case 3: sp = new Square(5);
			break;
		default: fQuit	= TRUE;
			break;
		}
		if (fQuit)
			break;
		sp->Draw();
		cout << "\n";
	}
	return 0;
}

#endif