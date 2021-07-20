#include <iostream>

using namespace std;

int main()
{
	int ia[] = {0,1,2,3};
	int *beg = begin(ia);
	int *last = end(ia);
	cout << *beg << endl;
	cout << *(last-1) << endl;
	return 0;
}
