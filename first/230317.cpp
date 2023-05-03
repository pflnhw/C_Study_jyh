#if 0
#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("허용 범위를 벗어났습니다!\n")

int main() {

	double radius, area;

	printf("반지름을 입력하세요(10이하) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (area > LIMIT)ERR_PRN;
	else printf("원의 면적 : %.2lf (%s)\n", area, MSG);

	return 0;
}
#include <stdio.h>
#define SUM(a,b) ((a) + (b))
#define MUL(a,b) ((a) * (b))

int main() {
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;
	
	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("res : %d\n", res);

	return 0;
}
#include <stdio.h>

void func();
int main(){
	printf("컴파일 날짜와 시간 : %s, %s\n\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);

#line 100 "macro.c"
	func();
	return 0;
}

void func() {
	printf("\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
}
#include <stdio.h>
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x, y) (x ## y)

int main() {

	int a1, a2;

	NAME_CAT(a, 1) = 10;
	NAME_CAT(a, 2) = 20;
	PRINT_EXPR(a1 + a2);
	PRINT_EXPR(a2 - a1);

	return 0;
}
#include <stdio.h>
#define VER 7
#define BIT16

int main() {
	int max;

#if VER >=6
	printf("버전 %d입니다.\n", VER);
#endif
#ifdef BIT16
	max = 32867;
#else
	max = 2147483647;
#endif
	printf("int형 변수의 최댓값 : %d\n", max);
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	cout << "be happy" << 2023 << '!' << endl;
}
#include <iostream>

using namespace std;

int main() {

	cout << 3 << endl;
	cout << 3.14 << endl;
	cout << "3.14" << endl;
	cout << '3' << endl;
	cout << 'a' << endl;
	cout << 3 + 4 << endl;
	cout << 3 - 4 << endl;
	cout << 3 * 4 << endl;
	cout << 3 / 4 << endl;
	cout << 3.0 / 4 << endl;
	cout << 3 % 4 << endl;
	cout << pow(3, 4) << endl;
	cout << (3 > 4) << endl;
	cout << (3 >= 4) << endl;
	cout << (3 < 4) << endl;
	cout << (3 <= 4) << endl;
	cout << (3 == 4) << endl;
	cout << (3 != 4) << endl;
	cout << (3 > 4 && 5 > 6) << endl;
	cout << (3 < 4 && 5 < 6) << endl;
	cout << (3 > 4 || 5 > 6) << endl;
	cout << (3 < 4 || 5 > 6) << endl;
	cout << (!(3 < 4)) << endl;
	cout << (!(3 > 4)) << endl;
	int a = 3;
	int b = 4;
	cout << a + b << endl;
	int c = a + b;
	cout << c << endl;
	int age = 18;
	if (age >= 19) {
		cout << "adult\n";
	}
	else {
		cout << "minor\n";
	}
	int birth_year = 2004;
	if (1981 <= birth_year && birth_year <= 1996) {
		cout << "M generation\n";
	}
	else if (1997 <= birth_year && birth_year <= 2012) {
		cout << "Z generation\n";
	}
	else {
		cout << "???\n";;
	}
	int cpp_level = 0;
	while (cpp_level < 10) {
		cout << "study c++" << endl;
		cout << cpp_level << endl;
		cpp_level++;
	}
	int cpp_level = 0;
	while (true) {
		cout << "study c++ " << endl;
		cpp_level++;
		if (cpp_level >= 10) {
			break;
		}
	}
	const char* eggs[] = { "egg0","egg1","egg2","egg3" };
	cout << eggs[0] << endl;
	cout << eggs[1] << endl;
	cout << eggs[2] << endl;
	cout << eggs[3] << endl;
	eggs[2] = "egg7";
	cout << eggs[2] << endl;
	const char* eggs[4] = { "egg0","egg1","egg2","egg3" };
	for (int i = 0; i < 4; i++) {
		cout << eggs[i] << endl;
	}
}
#include <stdio.h>
#include <iostream>
	using namespace std;
	int add(int a, int b) {
		return a + b;
	}
	int main(void) {
		int a = 1, b = 2;
		int c = add(a, b);
		cout << c << endl;
	}
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
	class student {
	private:
		const char* name;
		int age;
	public:
		student(const char* name, int age) { this->name = name; this->age = age; }
		const char* getname() { return this->name; }
		int getage() { return this->age; }
		void setage(int age) { this->age = age; }
	};
	int main(void) {
		student s3("Jane", 24);
		cout << s3.getname() << endl;
		cout << s3.getage() << endl;
		s3.setage(s3.getage() + 1);
		cout << s3.getage() << endl;
	}
#endif
