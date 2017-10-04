#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>

using namespace std;

struct info {
	string ID;
	string sign_in;
	string sign_out;
};

int main() {
	int N;
	scanf("%d", &N);
	info* record = new info[N];
	cin >> record[0].ID >> record[0].sign_in >> record[0].sign_out;//string 类是不能直接用scanf 与 printf 存取的
	info man_in = record[0];
	info man_out = record[0];
	for (int i = 1; i < N; i++) {
		cin >> record[i].ID >> record[i].sign_in >> record[i].sign_out;
		if (record[i].sign_in < man_in.sign_in) man_in = record[i];
		if (record[i].sign_out > man_out.sign_out) man_out = record[i];

	}
	cout << man_in.ID<<" "<<man_out.ID << endl;
	system("pause");
	return 0;
}