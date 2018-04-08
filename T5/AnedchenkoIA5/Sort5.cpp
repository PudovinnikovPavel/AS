#include <iostream>
#include <vector>
#include <stdlib.h>

void radixSort(std::vector<int>&);
int main()
{
	std::vector<int> arr;
	for (int y = 0; y < 30; y++) {
		arr.push_back(rand()/1000);
	}
	for (int i = 0; i < arr.size(); i++) {
		std::cout <<"arr["<<i<<"] = "<<arr[i]<<"\n";
	}
	
	radixSort(arr);

	for (int i = 0; i < arr.size(); i++) {
		std::cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
    return 0;
}

void radixSort(std::vector<int>& vec) {
	int radix = 10;
	bool maxL = false;
	int tmp = 0, placement = 1;
	
	while (!maxL) {
		maxL = true;
		std::vector<int> buckets[10];
	
		for (unsigned int i = 0; i < vec.size(); i++) {
			tmp = vec[i] / placement;
			
			buckets[tmp%radix].push_back(vec[i]);

			if ((maxL) && (tmp > 0)) { maxL = false; }
			
		}
		int a = 0;
		for (int b = 0; b < radix; b++) {
			std::vector<int> buck = buckets[b];
			for (int i = 0; i < buck.size(); i++) {
				vec[a] = buck[i];
				a += 1;
			}

		}
		placement *= radix;
	}
}
