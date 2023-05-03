#if 0
#include <stdio.h>
#include <stdlib.h>

int main(void)
{   printf("Be happy!");
	system("pause");

	return 0;
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	printf("%d\n", 3);
	printf("%f\n", 3.14);
	printf("%s\n", "3.14");
	printf("%c\n", '3');
	printf("%c\n", 'a');
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	printf("%d\n", 3 + 4);
	printf("%d\n", 3 - 4);
	printf("%d\n", 3 * 4);
	printf("%d\n", 3 / 4);
	printf("%lf\n", 3.0 / 4);
	printf("%d\n", 3 % 4);
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	printf("%d\n", 3 > 4);
	printf("%d\n", 3 >= 4);
	printf("%d\n", 3 < 4);
	printf("%d\n", 3 <= 4);
	printf("%d\n", 3 == 4);
	printf("%d\n", 3 != 4);
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	printf("%d\n", 3 > 4 && 5 > 6);
	printf("%d\n", 3 < 4 && 5 < 6);
	printf("%d\n", 3 > 4 || 5 > 6);
	printf("%d\n", 3 < 4 || 5 > 6);
	printf("%d\n", !(3 < 4));
	printf("%d\n", !(3 > 4));
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	int a = 3;
	int b = 4;
	printf("%d\n", a + b);
	int c = a + b;
	printf("%d\n", c);
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	int age = 18;
	if (age >= 19) {
		printf("adult\n");
	}
	else {
		printf("minor\n");
	}
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	int birth_year = 2004;
	if (1981 <= birth_year && birth_year <= 1996) {
		printf("M generation\n");
	}
	else if (1997 <= birth_year && birth_year <= 2012) {
		printf("Z generation\n");
	}
	else {
		printf("???\n");
	}
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	int c_level = 0;
	while (c_level < 10000) {
		printf("study c\n");
		c_level ++;
		printf("%d\n", c_level);
	}
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	int c_level = 0;
	while (1) {
		printf("study c ");
		c_level++;
		if (c_level >= 10) {
			break;
		}
	}
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	for (int i = 0; i < 100; i++) {
		int cnt = 0;
		int a = 0, b = 0, c = 0;
		while (cnt < 100000000) {
			cnt++;
			a = b = cnt;
			c = a + b;
		}
		printf("%d\n", c);
	}
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	int eggs[] = {0,1,2,3};
	printf("%d\n", eggs[0]);
	printf("%d\n", eggs[1]);
	printf("%d\n", eggs[2]);
	printf("%d\n", eggs[3]);
}

#endif
#if 0

#include <stdio.h>
int main(void) {
	int eggs[100] = { 0,1,2,3,4,5,6,7,8 };
	eggs[99] = 99;
	for (int i = 0; i < 1000; i++) {
		printf("%d\n", eggs[i]);
	}
}

#endif
#if 0

#include <stdio.h>
int add(int a, int b) {
	return a + b;
}
int main(void) {
	int a = 1, b = 2;
	int c = add(a, b);
	printf("%d\n", c);
}

#endif
#if 0

#include <stdio.h>
int is_adult(int age) {
	return age >= 19;
}
int main(void) {
	int my_age = 17;
	printf("%d\n",is_adult(my_age));
}

#endif
#if 0
#include <stdio.h>
struct student {
	char name[20];
	int age;
};
char* getname(struct student inst) {
	return inst.name;
}
int getage(struct student inst) {
	return inst.age;
}
void setage(struct student * inst, int newage) {
	inst->age = newage;
}
int main(void) {
	struct student s2 = { "Brad",21 };
	struct student s3 = { "Jane",24 };
	printf("%s\n", s2.name);
	printf("%d\n", s2.age);
	printf("%s\n", s3.name);
	printf("%d\n", s3.age);

	setage(&s3,getage(s3)+1);
	printf("%s\n", getname(s3));
	printf("%d\n", getage(s3));

}

#endif
#if 0

#include <stdio.h>

int main(void) {
	printf("%d\n", 10);
	printf("%lf\n", 3.45);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf-%1lf=%1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}

#endif
#if 0

#include <stdio.h>

int main(void) {
	int a;
	int b;
	int c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값: %d\n", a);
	printf("변수 b의 값: %d\n", b);
	printf("변수 c의 값: %d\n", c);
	printf("변수 da의 값: %.1lf\n", da);
	printf("변수 ch의 값: %c\n", ch);

	return 0;
}

#endif
#if 0
#include <stdio.h>

int main() {
	printf("%zd %zd\n", sizeof(4), sizeof(int));
	printf("%zd %zd\n", sizeof(3.14), sizeof(double));
	printf("%zd %zd\n", sizeof("3.14"), sizeof(char[5]));
	printf("%zd %zd\n", sizeof('3'), sizeof(char));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(long double));
	printf("%zd\n", sizeof(float));
	printf("%d,%c\n", 65, 65);
	printf("%d,%c", 'A', 'A');
}
#endif
#if 0
#include <stdio.h>
#include <string.h>
int main(void) {
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	fruit[0] = 'b';
	fruit[1] = 'a';
	fruit[2] = 'n';
	fruit[3] = 'a';
	fruit[4] = 'n';
	fruit[5] = 'a';
	fruit[6] = '\0';
	printf("%s\n", fruit);

	fruit[0] = "mango"[0];
	fruit[1] = "mango"[1];
	fruit[2] = "mango"[2];
	fruit[3] = "mango"[3];
	fruit[4] = "mango"[4];
	fruit[5] = "mango"[5];

	printf("%s\n", fruit);
	for (int i = 0; i < 10; i++) {
		fruit[i] = "mandarine"[i];
	}
	printf("%s\n", fruit);
	int i = 0;
	for (;; i++) {
		fruit[i] = "pine apple"[i];
		if (fruit[i] == '\0')
			break;
	}
	printf("%s\n", fruit);
}
#endif
#if 0
#include <stdio.h>

int main(void) {
	int a = 10, b = 12;

	printf("a & b: % d\n", a & b);
	printf("a ^ b: % d\n", a ^ b);
	printf("a | b: % d\n", a | b);
	printf(" ~ a: % d\n", ~a);
	printf("a << 1: % d\n", a << 1);
	printf("a >>2: % d\n", a >> 2);
}
#endif
#if 0
#include <stdio.h>
void int2bin(int number) {
	for (int i = 31; i >= 0; i--) {
		if ((number & (1 << i)) == 0)printf("0");
		else printf("1");
		if (i % 8 == 0 && i != 0)printf(" ");
	}
	printf("\n");
}
int main() {
	int2bin(10);
	int2bin(12);
	int2bin(10 & 12);
	int2bin(10 ^ 12);
	int2bin(10 | 12);
	int2bin(~10);
	int2bin(10 << 1);
	int2bin(10 >> 2);
}
#endif