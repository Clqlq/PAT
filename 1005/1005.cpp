#include<stdio.h>
#include<iostream>
#include<string>
#include<stack>

using namespace std;
#define M 1005

int main() {
	char str[M]; //ע���ַ������ַ���ָ�롢�ַ���ָ�����������
	scanf("%s",str);
	int a = 0;
	int i = 0;
	//while (str[i] != '\0') {
	while (str[i] != 0) { //�ַ����Ľ�β�ж���������ʽ
		a += str[i] - '0';
		i++;
	}
	if (a == 0) printf("zero");
	else {
		stack<int> ans;
		while (a != 0) {
			int temp = a % 10;
			a /= 10;
			ans.push(temp);
		}
		while(!ans.empty()){
			int temp = ans.top();
			ans.pop();
			switch (temp) {
			case(0):
				printf("zero");
				break;
			case(1):
				printf("one");
				break;
			case(2):
				printf("two");
				break;
			case(3):
				printf("three");
				break;
			case(4):
				printf("four");
				break;
			case(5):
				printf("five");
				break;
			case(6):
				printf("six");
				break;
			case(7):
				printf("seven");
				break;
			case(8):
				printf("eight");
				break;
			case(9):
				printf("nine");
				break;
			}
			if (!ans.empty()) printf(" ");
		}
	}
	system("pause");
	return 0;
}