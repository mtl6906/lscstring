#include "ls/cstring/API.h"
#include "iostream"

using namespace std;
using namespace ls;

int main()
{
	char a[20], *next = a;
	next = cstring::api.append(next, "123");
	cout << a << endl;
	next = cstring::api.append(next, "456");
	cout << a << endl;
	string b = "123.html";
	cout << cstring::api.suffix(b) << endl;
	return 0;
}
