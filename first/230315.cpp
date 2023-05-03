#if 0
#include <stdio.h>
struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};
void print_list(struct address* lp);
int main() {
	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"},
	};
	print_list(list);
}
void print_list(struct address* lp){
	int i;
	for (i = 0; i < 5; i++) {
		//printf("%10s%5d%15s%20s\n", (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
		printf("%10s%5d%15s%20s\n", lp[i].name, lp[i].age, lp[i].tel, lp[i].addr);
	}
}
#endif
#if 0
#include <stdio.h>
struct list {
	int num;
	struct list* next;
};
int main() {
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * current;
	a.next = &b;
	b.next = &c;
	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);
	printf("list all : ");
	current = head;
	while (current != NULL) {
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");
}
#endif
#if 0
#include <stdio.h>
#include <windows.h>
#include "resource.h"
LRESULT CALLBACK MyWndProc(HWND, UINT, WPARAM, LPARAM);
int main() {
	WNDCLASS wc = { 0, };
	wc.lpszClassName = L"MyWnd";
	wc.lpfnWndProc = MyWndProc;
	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wc.hCursor = LoadCursor(0, IDC_ARROW);
	wc.lpszMenuName = MAKEINTRESOURCE(IDR_MENU1);
	RegisterClass(&wc);
	CreateWindow(L"MyWnd", L"Hellow Window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 400, 400, 0, 0, 0, 0);
	MSG msg;
	while (1) {
		if(GetMessage(&msg, 0, 0, 0) == 0)break;
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}
LRESULT CALLBACK MyWndProc(HWND hWnd, UINT iMsg, WPARAM wParam, LPARAM lParam) {
	static wchar_t buffer[32] = { 0, };
	switch (iMsg) {
	case WM_CHAR:
		wsprintf(buffer, L"%c", LOWORD(wParam));
		SetWindowText(hWnd, buffer);
		return 0;
	case WM_MOUSEMOVE:
		wsprintf(buffer, L"(%d, %d)", LOWORD(lParam), HIWORD(lParam));
		SetWindowText(hWnd, buffer);
		return 0;
	case WM_KEYDOWN:
	case WM_KEYUP:
		switch (LOWORD(wParam)) {
		case VK_LEFT: printf("<-"); break;
		case VK_RIGHT: printf("->"); break;
		case VK_UP: printf("ㅗ"); break;
		case VK_DOWN: printf("ㅜ"); break;
		case VK_SPACE: printf("_"); break;
		case VK_F1: printf("F1"); break;
		case 'A': printf("A"); break;
		}
		return 0;
	case WM_LBUTTONDOWN:
		printf("L(%d,%d)", LOWORD(lParam), HIWORD(lParam));
		return 0;
	case WM_CREATE:
		printf("여기서 GUI를 꾸미세요.");
		SetTimer(hWnd, 1001, 10000, NULL);
		CreateWindow(L"button", L"A", WS_CHILD | WS_VISIBLE, 60, 10, 60, 40, hWnd, (HMENU)2001, 0, 0);
		CreateWindow(L"button", L"B", WS_CHILD | WS_VISIBLE, 160, 10, 60, 40, hWnd, (HMENU)2002, 0, 0);
		CreateWindow(L"button", L"C", WS_CHILD | WS_VISIBLE, 260, 10, 60, 40, hWnd, (HMENU)2003, 0, 0);
		return 0;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case 2001: printf("A"); break;
		case 2002: printf("B"); break;
		case 2003: printf("C"); break;
		case ID_FILE_NEW : printf("N"); break;
		case ID_FILE_SAVE : printf("S"); break;
		}
		return 0;
	case WM_TIMER:
		printf("t", wParam);
		return 0;
	case WM_DESTROY:
		printf("윈도우를 닫습니다.");
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hWnd, iMsg, wParam, lParam);
}
#endif