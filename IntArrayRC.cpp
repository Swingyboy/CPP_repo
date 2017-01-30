#include "StdAfx.h"
#include <cassert>
#include "IntArrayRC.h"

inline void IntArrayRC::check_range(int index)
{
	assert(index >= 0 && index < _size);
}

int& IntArrayRC::operator [] (int index)
{
	check_range(index);
	return ia[index];
}