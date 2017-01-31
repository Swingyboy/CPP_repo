
#include "StdAfx.h"
#include <iostream>
#include "IntArray.h"
#include "IntArrayRC.h"

using namespace std;

void swap(IntArray &ia, int ix, int jx)
{
	int tmp = ia[ix];
	ia[ix] = ia[jx];
	ia[jx] = tmp;
}

int main (void)
{
	int array[4] = {0, 1, 2, 3};
	IntArray ia1(array, 4);
	IntArrayRC ia2(array, 4);

	cout << "swap with IntArray ia1" << endl;
	swap(ia1, 1, ia1.size());

	cout << "swap with IntArray ia2" << endl;
	swap(ia2, 1, ia2.size());

	return 0;
}
