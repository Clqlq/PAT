#include<stdio.h>
#include<iostream>
#include<queue>

using namespace std;

#define N 1001
struct poly {
	int expo;
	double value;
};

struct polynode {
	int expo;
	double value;
	polynode* next;
};
/*
	�����޴���һ��ʼ��Ȼ���������˰��죬�뵽��hashȴ����ˣ���hashֻ��Ҫ1000+1000����Ϊ����Ҫ1000*1000��
	��Ϊ̫������һ��ʼû��hash��
	���㲻��hash��Ҳ�����˿�����map����������stupid
	
*/

int main() {
	int k1;
	scanf("%d", &k1);
	poly* a = new poly[k1];
	for (int i = 0; i < k1; i++) {
		scanf("%d %lf", &a[i].expo, &a[i].value);
	}
	int k2;
	scanf("%d", &k2);
	poly* b = new poly[k2];
	for (int i = 0; i < k2; i++) {
		scanf("%d %lf", &b[i].expo, &b[i].value);
	}
	double c[2001] = { 0 };
	for (int i = 0; i < k1; i++) {
		for (int j = 0; j < k2; j++) {
			int temp1 = a[i].expo + b[j].expo;
			double temp2 = a[i].value*b[j].value;
			c[temp1] += temp2;
		}
	}
	int count = 0;
	for (int i = 0; i < 2001; i++) {
		if (c[i] != 0) count++;
	}
	printf("%d", count);
	for (int i = 2000; i >= 0; i--) {
		if (c[i] != 0) printf(" %d %.1lf", i, c[i]);
	}



	system("pause");
	return 0;

}