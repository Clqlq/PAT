#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int *floor = new int[N];//注意动态数组的使用
	for (int i = 0; i < N; i++) {
		scanf("%d", &floor[i]);
	}
	int nowFloor = 0;
	int cost = 0;
	for (int i = 0; i < N; i++) {
		if (floor[i]>nowFloor) cost += (floor[i] - nowFloor) * 6;
		else cost += (nowFloor - floor[i]) * 4;
		nowFloor = floor[i];
		cost += 5;
	}
	printf("%d", cost);
	delete[] floor;
	system("pause");
	return 0;
}