#include <string>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <iostream>
class A
{
public:
	void setnum(int x)
	{
		num = x;
	}

private:
	int num = 0;
};

bool equal1(int a, int b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool equal2(int a, int b)
{
	return (a == b);
}

bool isNotZero(int x)
{
	return (x > 0) || (x < 0);
}
bool cal(bool x){
	return x;
}
int main(int argc, char *argv[])
{
	printf("std::strings creating branches?\n"); //printf输出
	std::cout << "123";							 //cout输出
	FILE *p;
	p = fopen("test.txt", "r");					  //打开文件
	std::string name("SomeName");				  //char *到string
	std::size_t nameLength = name.size();		  //string.size
	printf("string to char*:%s\n", name.c_str()); //printf + string 到char *
	name.resize(nameLength + 10);				  //string.resize
	A *a = new A;								  //new
	int *numk = new int(4);
	delete a;
	delete[] numk; //delete array
	int p1 = 0;
	int p2 = -1;
	if (p1 >= 0)
	{
		p1 = 1;
	}
	for (int i = 0; i < p2; ++i)
	{
	}
	while (p2 > 0)
	{
	}
	int p3 = p1 > p2 ? p1 : p2;
	bool p4 = (p3 < 0) || (p3 == 0) || (p3 > 0);
	bool p5 = (p3 < 0) && (p3 == 0) && (p3 > 0);
	bool r1 = (p3 < 0);
	bool r2 = (p3 == 0);
	bool r3 = (p3 > 0);

	int p1_abs = std::abs(p1);
	int p2_abs = std::abs(p2);

	if (p1_abs > 0 && p2_abs > 0)
	{
		p3 = p1 + p2;
	}

	if ((std::abs(p1) > 0) && (std::abs(p2)))
	{
		p3 = p1 + p2;
	}
	bool r4 = isNotZero(3);
	if (p3 > 0 && r4)
	{
		printf("...");
	}
	if (p3 > 0 && isNotZero(3))
	{
		printf("...");
	}
	bool r6 = true;
	if (r6)
	{
		printf("...");
	}

	bool e1 = equal1(1, 1);
	bool e2 = equal2(1, 1);
	int d = 0;
	int c = 2;
	switch (c)
	{
	case 0:
		d = 0;
		break;
	case 1:
		d = 0;
		break;

	case 2:
		d = 0;
		break;

	case 3:
		d = 0;
		break;

	}

	if (c==0) {
		d = 0;
	}
	else if (c==1) {
		d = 0;
	}
	else if (c==2) {
		d = 0;
	}
	else if (c==3) {
		d = 0;
	}
	else {
		d = 0;
	}

	if (d >0) {
		printf("...");
	}
	else if (d <= 0) {
		printf("...");
	}
	else {
		printf("...");
	}
	for (int i=0;i<10;i++) {
		if (i<0) {
			printf("...");
		}
	}

	if (p3 >0 && d==0) {
		printf("...");
	}
	if (cal(p3>0) && cal(d==0)) {
		printf("...");
	}
	return 0;
}
