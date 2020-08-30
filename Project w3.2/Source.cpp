#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	for (int i = 0;i <= x;i++) {
		for (int j = 0;j <= i;j++) {
			printf_s(" * ");
		}
		for (int j = 0;j <= x - i;j++) {
			printf_s("   ");
		}
		for (int j = 0;j <= x - i;j++) {
			printf_s("   ");
		}
		for (int j = 0;j <= i;j++) {
			printf_s(" * ");
		}
		printf_s("\n");

	}
	for (int i = 0;i <= x;i++) {
		for (int j = 0;j <= x - i;j++) {
			printf_s(" * ");
		}
		for (int j = 0;j <= i;j++) {
			printf_s("   ");
		}
		for (int j = 0;j <= i;j++) {
			printf_s("   ");
		}
		for (int j = 0;j <= x - i;j++) {
			printf_s(" * ");
		}
		printf_s("\n");

	}

}