#if 0
#include <stdio.h>
int main() {
	char str[5] = { '\0', };
	str[0] = '0';
	str[1] = 'k';
	printf("%s\n", str);
	return 0;
}
#endif
#if 0
#include <stdio.h>
void f(int ip, double dp, char cp, char*strp, int*iarrp,double*darrp) {
	printf("%d\n", ip);
	printf("%lf\n", dp);
	printf("%c\n", cp);
	printf("%s\n", strp);
	printf("%d\n", iarrp[0]);
	printf("%lf\n", darrp[0]);

}
int main() {
	int i = 3;
	double d = 3.14;
	char c = 'a';
	char str[16] = "hello";
	int iarr[8] = { 1,2,3,4,5, };
	double darr[4] = { 1.0,2.0, };
	f(i, d, c, str, iarr, darr);
}
#endif
#if 0
#include <stdio.h>
void f(int*ia) {
	printf("2.sizeof(ia)=%zd\n", sizeof(ia));
}
int main() {
	int ia[16] = { 1, };
	printf("1.sizeof(str)=%zd\n", sizeof(ia));
	f(ia);
}
#endif
#if 0
#include <stdio.h>
void print_ary(int* pa, int size);
int main() {
	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 10,20,30,40,50,60,70 };
	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);
	return 0;
}
void print_ary(int* pa,int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d\n", pa[i]);
	}
}
#endif
#if 0
#include <stdio.h>
void input_ary(double* pa, int size);
double find_max(double* pa, int size);
int main(void) {
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);
	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값:%.1lf\n", max);
	return 0;
}
void input_ary(double* pa, int size) {
	int i;
	printf("%d개의 실수값 입력:", size);
	for (i = 0; i < size; i++) {
		scanf("%lf", pa + i);
	}
}
double find_max(double* pa, int size) {
	double max;
	int i;
	max = pa[0];
	for (i = 1; i < size; i++) {
		if (pa[i] > max)max = pa[i];
	}
	return max;
}
#endif
#if 0
#include <stdio.h>
void input_nums(int* lotto_nums);

void print_nums(int* lotto_nums);
int main(void) {
	int lotto_nums[6];
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}
void input_nums(int* lotto_nums) {
	int i;
	printf("%d개의 로또값 입력:", 6);
	for (i = 0; i < 6; i++) {
		scanf("%d", &lotto_nums[i]);
		for (int j = 0; j < i; j++) {
			if (lotto_nums[i] == lotto_nums[j]) {
				printf("같은 번호가 있습니다.!\n");
				i--;
				break;
			}
		}
	}
}
void print_nums(int* lotto_nums) {
	int i;
	printf("로또 번호: ");
	for (i = 0; i < 6; i++) {
		printf("%d, ", lotto_nums[i]);
	}
}
#endif
#if 0
#include<stdio.h>
int main() {
	int score[3][4];
	int total;
	double avg;
	int i, j;
	for (i = 0; i < 3; i++) {
		printf("4과목의 점수 입력: ");
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		total = 0;
		for (j = 0; j < 4; j++) {
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int num[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	char animal[5][20];
	int i;
	int count;
	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++) {
		scanf("%s", animal[i]);
	}
	for (i = 0; i < count; i++) {
		printf("%s ", animal[i]);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
void print_ary(int ary[3][4]);
int main() {
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	print_ary(ary);
	return 0;
}
void print_ary(int(*ary)[4]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", ary[i][j]);
		}
	}
	printf("\n");
}
#endif
#if 0
#include <stdio.h>
void prt(double(*daa)[3]) {//double daa[2][3], double daa[][3], double (daa[])[3], double ([]daa)[3], double (*daa)[3]
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%lf ", daa[i][j]);
		}
	}
}
int main() {
	double daa[2][3] = { 1.1,2.2,3.3,4.4,5.5,6.6 };
	prt(daa);
}
#endif
#if 0
#include <stdio.h>
void prt2(double (*daaa)[2][3]) {//double daaa[2][2][3], double daaa[][2][3], double (daaa[])[2][3],  double (*daaa)[2][3]
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 3; k++) {
				printf("%lf ", daaa[i][j][k]);
			}
		}
	}
}
int main() {
	double daaa[2][2][3]= { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.0,0.1,0.2 };
	prt2(daaa);
}
#endif