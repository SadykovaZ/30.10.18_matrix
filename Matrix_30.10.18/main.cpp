#include "matrix_.h"
using namespace std;

void main()
{
	matrix_ m(10, 15, 777);
	cout << m[5][5];
	/*matrix_ b = m;
	b.print();*/
	system("pause");
}