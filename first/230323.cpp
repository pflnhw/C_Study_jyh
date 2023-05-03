/*#include <iostream>
#include <malloc.h>
using namespace std;
#if 0
class Cat {
public:
	Cat(int age) :itsAge(age) { HowManyCats++; }
	virtual ~Cat() { HowManyCats--; }
	virtual int GetAge() { return itsAge; }
	virtual void SetAge(int age) { itsAge = age; }
	static int HowManyCats;
private:
	int itsAge;
};
int Cat::HowManyCats = 0;
int main() {
	const int MaxCats = 5; int i;
	Cat* CatHouse[MaxCats];
	for (i = 0; i < MaxCats; i++)
		CatHouse[i] = new Cat(i);
	for (i = 0; i < MaxCats; i++) {
		cout << "There are ";
		cout << Cat::HowManyCats;
		cout << "cats left!\n";
		cout << "Deleting the on which is ";
		cout << CatHouse[i]->GetAge();
		cout << "year old\n";
		delete CatHouse[i];
		CatHouse[i] = 0;
	}
	return 0;
}
#endif
#if 0
class Cat {
public:
	Cat(int age) :itsAge(age) { HowManyCats++; }
	virtual ~Cat() { HowManyCats--; }
	virtual int GetAge() { return itsAge; }
	virtual void SetAge(int age) { itsAge = age; }
	static int GetHowMany() { return HowManyCats; }
private:
	int itsAge;
	static int HowManyCats;
};
int Cat::HowManyCats = 0;
void TelepathicFunction();
int main() {
	const int MaxCats = 5;
	Cat* CatHouse[MaxCats]; int i;
	for (i = 0; i < MaxCats; i++) {
		CatHouse[i] = new Cat(i);
		TelepathicFunction();
	}
	for (i = 0; i < MaxCats; i++) {
		delete CatHouse[i];
		TelepathicFunction();
	}
	return 0;
}
void TelepathicFunction() {
	cout << "There are " << Cat::GetHowMany() << "cats alive!\n";
}
#endif
#if 0
class A {
	int age;
public:
	A(int age) :age(age) {}
	int getAge() { return age; }
	friend void peekAge(A& ra);
};
void peekAge(A& ra) { cout << ra.age << endl; }
int main() {
	A& ra = *new A(19);
	cout << ra.getAge() << endl;
	peekAge(ra);
}
#endif
#if 0
class Weapon { 
public:
	virtual void attack() = 0; 
};
class Character{
	int x;
	Weapon* weapon;
public:
	Character(int x) :x(x), weapon(NULL) {}
	void move() { x++; }
	int getX() const { return x; }
	void attack() { weapon->attack(); }
	void setWeapon(Weapon& weapon) { this->weapon = &weapon; }
};
void move(Character& c) { c.move(); }
class Sword : public Weapon {
public:
	virtual void attack() { cout << "Attack with Sword" << endl; }
};
class Cane : public Weapon {
public:
	virtual void attack() { cout << "Attack with Cane" << endl; }
};
typedef struct {
	int data[10000];
} BigData;
void sendWifi(const BigData* pBD) { cout << pBD->data[0] << endl; }
void f1(int* ia) { cout << ia[1] << endl; }
void f2(int(*iaa)[3]) { cout << iaa[1][2] << endl; }
void f3(int** ipa) { cout << ipa[2][2] << endl; }
int main() {
	Character& c = *new Character(0);
	cout << c.getX() << endl;
	move(c);
	cout << c.getX() << endl;
	Weapon& weapon = *new Sword();
	c.setWeapon(weapon);
	c.attack();
	Weapon& weapon2 = *new Cane();
	c.setWeapon(weapon2);
	c.attack();
	//
	BigData* pBD = (BigData*)malloc(sizeof(BigData) * 1);
	pBD[0].data[0] = 42;
	sendWifi(pBD);
	//
	int ia[5] = {1,2,3,4,5};
	f1(ia);
	//
	int iaa[2][3] = { {1,2,3},{4,5,6} };
	f2(iaa);
	//
	int ia2[3] = { 11,22,33 };
	int ia3[4] = { 111,222,333,444 };
	int* ipa[3] = { ia,ia2,ia3 };
	f3(ipa);
}
#endif
#if 0
class Stack {
	int* stack;
	int size;
	int top;
public:
	Stack(int size) :size(size) { 
		stack = new int[size] {0};
		top = 0;
	}
	~Stack() { delete stack; }
	void Push(int data) {
		if (top < size) {
		stack[top] = data;
		top++;
		}
		else {
			cout << "Stack full!" << endl;
		}
	}
	void Show() const {
		for (int i = top; i >= 0; i--) {
			cout << stack[i] << endl;
		}
	}
	int Pop() {
		if (top > 0) {
			top--;
			return stack[top];
		}
		else {
			cout << "Stack Empty" << endl;
			return -1;
		}
	}
};
int main() {
	Stack& stack = *new Stack(1024);
	for (int data = 111; data < 130; data++) {
		stack.Push(data);
	}
	stack.Show();
	cout << endl;
	while (true) {
		int data = stack.Pop();
		if (data == -1)break;
		cout << data << endl;
	}
}
#endif
#if 0
class Vegetable {
public:
	virtual string getName() = 0;
};
class Carrot : public Vegetable {
public:
	virtual string getName() { return"carrot"; }
};
class Cabbage : public Vegetable {
public:
	virtual string getName() { return"cabbage"; }
};
class Rabbit {
	string name;
public:
	Rabbit(string name) :name(name) {}
	void run() const { cout << name << " runs" << endl; }
	void sleep() const { cout << name << " sleeps" << endl; }
	void eat(Vegetable& veg) const {
		cout << name << " eats " << veg.getName() << endl;
	}
};
int main() {
	Rabbit& rabbit = *new Rabbit("Judy");
	rabbit.run();
	rabbit.sleep();
	Carrot& carrot = *new Carrot();
	rabbit.eat(carrot);
	Cabbage& cabbage = *new Cabbage();
	rabbit.eat(cabbage);
}
#endif
#include <string>
#include <vector>

using namespace std;
const string morse[] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

string solution(string letter) {
	string answer = "";
	letter += ' ';
	string tmp = "";
	for (int i = 0; i < letter.size(); i++) {
		if (letter[i] == ' ') {
			for (int j = 0; j < 26; j++) {
				if (tmp == morse[j]) {
					answer += j + 'a';
				}
			}
			tmp = "";
		}
		else {
			tmp += letter[i];
		}
	}

	return answer;
}
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
	int answer = 0;
	vector<string> oar = { "aya", "ye", "woo", "ma" };
	for (auto x : oar) {
		for (int i = 0; i < babbling.size(); i++) {
			if (babbling[i].find(x) != -1) {
				babbling[i].erase(babbling[i].find(x), x.size());
			}
		}
	}
	for (int i = 0; i < babbling.size(); i++) {
		if (babbling[i] == "") answer++;
	}
	return answer;
}