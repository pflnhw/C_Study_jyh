#if 0
#include <stdio.h>
void func(int* p) {
	printf("%d\n", *(p+0));
	*(p+0) = 2;
}
int main() {
	int ary[5] = { 1,2,3 };
	func(ary);
	printf("%d\n", *ary+0);
}
#endif
#if 0
#include <stdio.h>
void print_ary(int(*pa)[4]);
int main() {
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	print_ary(&ary[0]);
	return 0;
} 
void print_ary(int(*ary)[4]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", *(*(ary+i)+j));
		}
	}
	printf("\n");
}
#endif
#if 0
#include <stdio.h>
int sum(int, int);
int main() {
	int(*fp)(int, int);
	int res;
	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n", res);
	return 0;
}
int sum(int a, int b) {
	return (a + b);
}
#endif
#if 0
#include <stdio.h>
void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);
int main() {
	int sel;
	printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� ������ �����ϼ��� : ");
	scanf("%d", &sel);
	switch (sel) {
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(max); break;
	}
	return 0;
}
void func(int (*fp)(int, int)) {
	int a, b;
	int res;
	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("�ᱣ���� : %d\n", res);
}
int sum(int a, int b) {
	return (a + b);
}
int mul(int a, int b) {
	return (a * b);
}
int max(int a, int b){
	if (a > b) return a;
	else return b;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int a = 10;
	double b = 3.5;
	void* vp;
	vp = &a;
	printf("a : %d\n", *(int*)vp);
	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
int main() {
	int* pi;
	int i, sum = 0;
	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
int main() {
	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;
	pi = (int*)calloc(size, sizeof(int));
	while (1) {
		printf("����� �Է��ϼ���=> ");
		scanf("%d", &num);
		if (num <= 0)break;
		if (count == size) {
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++) {
		printf("%5d", pi[i]);
	}
	free(pi);
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
void func(int* p) {
	printf("%d\n", p[0]);
	p[0] = 2;
}
int main() {
	int* ary = (int*)malloc(sizeof(int) * 5);
	ary[0] = 1;
	ary[1] = 2;
	ary[2] = 3;
	ary[3] = 0;
	ary[4] = 0;
	func(ary);
	printf("%d\n", ary[0]);
	free(ary);
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
void print_ary(int(*pa)[4]);
int main() {
	int(*ary)[4];
	ary = (int(*)[4])malloc(sizeof(int) * 4 * 3);
	int a = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			ary[i][j] = a++;
		}
	}
	print_ary(ary);
	free(ary);
}
void print_ary(int(*ary)[4]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", *(*(ary + i) + j));
		}
	}
	printf("\n");
}
#endif
#if 0
#include <stdio.h>
void assign();
int main() {
	int a = 0;
	assign();
	printf("main �Լ� a : %d\n", a);
}
void assign() {
	int a;
	a = 10;
	printf("assign �Լ� a : %d\n", a);
}
#endif
#if 0
#include <stdio.h>
void assign10();
void assign20();
int a;
int main() {
	printf("�Լ� ȣ�� �� a �� : %d\n", a);
	assign10();
	assign20();
	printf("�Լ� ȣ�� �� a �� : %d\n", a);
}
void assign10() {
	a = 10;
}
void assign20() {
	int a;
	a = 20;
}
#endif
#if 0
#include <stdio.h>
void func();
void static_func();
int main() {
	int i;
	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++) {
		func();
	}
	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}
}
void func() {
	int a = 0;
	a++;
	printf("%d\n", a);
}
void static_func() {
	static int a;
	a++;
	printf("%d\n", a);
}
#endif
#if 0
#include <stdio.h>
int main() {
	register int i;
	int sum = 0;
	for (i = 1; i <= 10000; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}
#endif
#if 0
#include <stdio.h>
void add_ten(int b, int*B) {
	b = b + 10;
	*B = *B + 10;
	printf("b:%d, B:%d\n", b,*B);
}
int main() {
	int a = 10;
	int A[1] = { 100 };
	add_ten(a, A);
	printf("a:%d, A[0]:%d\n", a, *A);
}
#endif
#if 0
#include <stdio.h>
int* sum(int a, int b);
int main() {
	int* resp;
	resp = sum(10, 20);
	printf("�� ������ �� : %d\n", *resp);
}
int* sum(int a, int b) {
	static int res;
	res = a + b;
	return &res;
}
#endif
#if 0
#include <stdio.h>
#pragma pack(1)
struct student {
	int num;
	double grade;
};
int main() {
	struct student s1;
	s1.num = 2;
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	printf("%zd\n", sizeof(student));
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct profile {
	char name[20];
	int age;
	double height;
	char* intro;
};
int main() {
	struct profile yuni;
	strcpy(yuni.name, "������");
	yuni.age = 17;
	yuni.height = 164.5;
	yuni.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);
	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	free(yuni.intro);
}
#endif
#if 0
#include <stdio.h>
struct profile {
	int age;
	double height;
};
struct student{
	struct profile pf;
	int id;
	double grade;
};
int main() {
	struct student yuni;
	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;
	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);
}
#endif