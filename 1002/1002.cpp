#include<stdio.h>
#include<iostream>
#include<queue>

using namespace std;

#define M 1001
double ans[M] = { 0 };

struct Info
{
	int position;
	double value;
};

int main() {
	int k;
	int a;
	double b;
	scanf("%d", &k);
	while (k-- != 0) {
		scanf("%d", &a);
		scanf("%lf", &ans[a]);
	}
	scanf("%d", &k);
	while (k-- != 0) {
		scanf("%d", &a);
		scanf("%lf", &b);
		ans[a] += b;

	}
	queue<Info> AnsQueue;
	for (int i = M-1; i >= 0; i--) {
		if(ans[i]!=0){
			Info temp;
			temp.position = i;
			temp.value = ans[i];
			AnsQueue.push(temp);
		}
	}
	printf("%d", AnsQueue.size());
	while (!AnsQueue.empty()) {
		printf(" ");
		Info temp = AnsQueue.front();
		printf("%d %.1lf", temp.position, temp.value);
		AnsQueue.pop();
	}
	system("pause");
	return 0;
}