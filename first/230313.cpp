#if 0
#include <stdio.h>
int main() {
	printf("%zd\n", sizeof(char[4]));
	printf("%zd\n", sizeof(int [4]));
	printf("%zd\n", sizeof(double [4]));
	printf("%zd\n", sizeof(char*[4]));
	printf("%zd\n", sizeof(int*[4]));
	printf("%zd\n", sizeof(double*[4]));
	printf("%zd\n", sizeof(void* [3]));
	printf("%zd\n", sizeof(int(*) [4] ));
	printf("%zd\n", sizeof(int(*[4])[4]));
}
#endif
#if 0
#include <stdio.h>
void prt(const char* *pary) {
	for (int i = 0; i < 5; i++) {
		printf("%s\n", pary[i]);
	}
}
int main(void) {
	const char* pary[5];
	pary[0] = &"dog"[0];
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";
	prt(pary);
}
#endif
#if 0
#include <stdio.h>
void prt(int** pary) {//int* pary[3] , int* pary[] , int* *pary
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* pary[3] = { &ary1[0],&ary2[0],&ary3[0]};
	prt(pary);
	return 0;
}
#endif
#if 0
#include <stdio.h>
void print_str(const char** pps, int cnt);
int main() {
	const char* ptr_ary[] = { "eagle","tiger","lion","squirrel" };
	int count;
	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);
	return 0;
}
void print_str(const char** pps, int cnt) {
	int i;
	for (i = 0; i < cnt; i++) {
		printf("%s\n", pps[i]);
	}
}
#endif
#if 0
#include <stdio.h>
int main(int argc, char** argv) {
	printf("argc=%d\n", argc);
	printf("argv[0]->\"%s0\"\n", argv[0]);
	printf("argv[1]->\"%s0\"\n", argv[1]);
	printf("argv[2]->\"%s0\"\n", argv[2]);
	printf("argv[3]->\"%s0\"\n", argv[3]);
	printf("argv[4]->\"%s0\"\n", argv[4]);
	printf("argv[5]->\"%s0\"\n", argv[5]);
	printf("argv[6]->\"%s0\"\n", argv[6]);
	printf("argv[7]->\"%s0\"\n", argv[7]);
}
#endif
#if 0
#include <stdio.h>
int main(int argc, char** argv) {
	int i;
	printf("%p(%zd)\n", &i, sizeof(i));
	printf("%p(%zd[%d])\n", &argc, sizeof(argc),argc);
	for (i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}
#endif
#if 0
#include <stdio.h>
int main() {
	int a;
	double b;
	char c;
	printf("int형 변수의 주소 : %u %u\n", &a, &a + 1);
	printf("double형 변수의 주소 : %u %u\n", &b, &b + 1);
	printf("char형 변수의 주소 : %u %u\n", &c, &b + 1);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int a =  3 ;
	int* pa;
	pa = &a;
	*pa = 10;
	*(pa + 0) = 11;
	pa[0] = 12;
	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a 값 출력 : %d\n", a);
}
#endif
#if 0
#include <stdio.h>
void swap(int* pa, int* pb);
int main() {
	int a = 10, b = 20;
	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);
	return 0;
}
void swap(int* pa, int* pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int ary[3];
	int i;
	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;
	printf("세 번째 배열 요소에 키보드 입력: ");
	scanf("%d", ary + 2);
	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int ary[3];
	int* pa = ary;
	int i;
	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];
	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int ary[3] = { 10,20,30 };
	int *pa = ary;
	int i;
	printf("배열의 값 : ");
	for (i = 0; i < 3; i++) {
		printf("%d ", *pa);
		pa++;
	}
	return 0;
}
#endif