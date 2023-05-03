#if 0
#include <stdio.h>

int main(void) {
	int a = 0, b = 0;
	if (a > 0) {
		b = 1;
	}
	else if (a == 0) {
		b = 2;
	}
	else {
		b = 3;
	}
	printf("%d\n", b);
}
#endif
#if 0
#include <stdio.h>
int main(void) {
	int a = 20, b = 10;
	if (a > 10) {
		if (b >= 0) {
			b = 1;
		}
		else {
			b = -1;
		}
	}
	printf("a:%d,b:%d\n", a, b);
}
#endif
#if 0
#include <stdio.h>
int main(void) {
	int rank = 2, m = 0;
	switch (rank){
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("m:%d\n", m);
}
#endif
#if 0
int main(void) {
	int a = 1;
	int i;
	for (i = 0; i < 3; i++) {
		a = a * 2;
		printf("i:%d\n a:%d\n", i, a);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void) {
	int a = 1;
	do {
		a = a * 2;
	} while (a < 10);
	printf("a:%d\n", a);

	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void) {
	int i, j;
	for (i = 0; i < 3; i++); {
		for (j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int i;
	for (int j = 2; j < 10; j++) {
		for (int i = 1; i < 10; i++); {
			printf("%d*%d=%d\n", j, i, j * i);
		}
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void) {
	int i;
	int sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += i;
		if (sum > 30)break;
	}
	printf("누적한 값:%d\n", sum);
	printf("마지막으로 더한 값:%d\n", i);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		if (i % 3 == 0) continue;
		sum += i;
		printf("%d\n", sum);
	}
}
#endif
#if 0
#include <stdio.h>
int sum(int x, int y);
int main(void) {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result:%d\n", result);

	return 0;
}
int sum(int x, int y) {

	int temp;
	temp = x + y;

	return temp;
}
#endif
#if 0
#include <stdio.h>
int get_num();
int main() {
	int result;
	result = get_num();
	printf("반환값:%d\n", result);
	return 0;
}
int get_num(void) {
	int num;
	printf("양수입력:");
	scanf("%d\n", &num);
	return num;
}
#endif
#if 0
#include <stdio.h>
void print_char(char ch, int count);
int main() {
	print_char('@', 10);
	return 0;
}
void print_char(char ch, int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}
	return;
}
#endif
#if 0
#include <stdio.h>
void fruit();
int main() {
	fruit();
	return 0;
}
void fruit() {
	printf("apple\n");
	fruit();
}
#endif
#if 0
#include <stdio.h>
struct Bigint {
	int ia[1024];
};
void f(Bigint bi) {
	bi.ia[0] += 1;
	printf("%d ", bi.ia[0]);
	f(bi);
}
int main() {
	Bigint bi = { 0, };
	f(bi);
}
#endif
#if 0
#include <stdio.h>
char str[200000] = "how are you? nice to meet you";
void f(char str[200000]) {
	printf("%s\n", str);
}
int main() {
	f(str);
	printf("hello\n");
}
#endif
#if 0
int main() {
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(char[5]));
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(int[10]));
	printf("%zd\n", sizeof(double));
	printf("%zd\n", sizeof(double[20]));
}
#endif
#if 0
#include <stdio.h>
int main() {
	int ary[5];
	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);
	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void) {
	int score[3];
	int i;
	int total = 0;
	double avg;
	int count;
	count = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < count; i++) {
		scanf("%d", &score[i]);
	}
	for (i = 0; i < count; i++) {
		total += score[i];
	}
	avg = total / count;
	for (i = 0; i < count; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균:%.1lf\n", avg);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void){
	char str[80] = "applejam";
	printf("최초 문자열:%s\n", str);
	printf("문자열 입력: ");
	scanf("%s", str);
	printf("입력 후 문자열:%s\n", str);
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>
int main() {
	char str1[80] = "cat";
	char str2[80];
	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s,%s\n",str1,str2);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	char str[80];
	printf("문자열 입력:");
	gets(str);
	puts("입력된 문자열:");
	puts(str);
	return 0;
}
#endif
