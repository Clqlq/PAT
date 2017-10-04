#include<stdio.h>
#include<iostream>
#include<stack>


using namespace std;

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		int c = a + b;
		bool flag = (c >= 0 ? true : false);
		stack<int> ans;
		if (!flag) {
			c *= -1;
			printf("-");
		}
		do {
			ans.push(c % 1000);
			c  /= 1000;
		} while (c != 0);
		printf("%d", ans.top());
		ans.pop();
		while (!ans.empty()) {
			printf(",%03d", ans.top());
			ans.pop();
		}
	}
	return 0;
}