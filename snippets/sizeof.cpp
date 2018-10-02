#include <iostream>
using namespace std;

int main() {
	char *x = "abcd";
	char str[] = "abcde";
	cout<< sizeof(x) << sizeof(str) << sizeof("abcde");
	int aa=5;
	int *b=&aa;
	cout<<"\n"<<sizeof(aa)<<sizeof(b);
	return 0;
}