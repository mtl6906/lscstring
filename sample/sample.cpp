#include "ls/cstring/API.h"
#include "iostream"

using namespace std;

int main()
{
	ls::cstring::API api;
	char a[20], *next = a;
	next = api.append(next, "123");
	cout << a << endl;
	next = api.append(next, "456");
	cout << a << endl;
	return 0;
}
