#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <iterator>

class radix_test
{
	const int bit;
public:
	radix_test(int offset) : bit(offset) {} 

	bool operator()(int value) const
	{
		if (bit == 31)
			return value < 0;
		else
			return !(value & (1 << bit));
	}
};

void Isd_radix_sort(int *first, int *last)
{
	for (int Isb = 0; Isb < 32; ++Isb)
	{
		std::stable_partition(first, last, radix_test(Isb));
	}
}

void msd_radix_sort(int *first, int *last, int msb = 31)
{
	if (first != last && msb >= 0)
	{
		int *mid = std::partition(first, last, radix_test(msb));
		msb--;
		msd_radix_sort(first, mid, msb);
		msd_radix_sort(mid, last, msb);
	}
}
int main()
{
	int data[20] = { 6, 66, 666, 6666, 966, 676, 45, 78 };

	Isd_radix_sort(data, data + 8);

	std::copy(data, data + 8, std::ostream_iterator<int>(std::cout, ' '));
	system("pause");
    return 0;
}
