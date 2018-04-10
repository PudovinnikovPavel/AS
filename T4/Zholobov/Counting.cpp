#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
#include <chrono>

void counting(std::vector<int>&, int);
using namespace std;


int LKG(int X) {
	const int m=193723,a=7297,c=1000;
	X=(a*X+c)%m;
	return(X);
}

int main()
{
	int N=1000000,b=736;
	std::vector<int> arr{};
	for (int i=0;i<N;i++) 
	{
		b=LKG(b)%1000;
		arr.push_back(b);
	}
	auto start = std::chrono::high_resolution_clock::now();
	counting(arr,N);
	auto finish = std::chrono::high_resolution_clock::now();
	std::cout << "Sorted array is:\n";
	//for (int i = 0; i < N; i++) std::cout << arr[i] << "\n";
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count() << "\n";
    return 0;
}

void counting(std::vector<int>& arr, int n) {
	std::vector<int>::iterator max;
	max = std::max_element(arr.begin(), arr.end());
	int maxV = *max;
	int count[maxV+1]={0};
	int chislo;
	for (int i = 0; i < n; i++) {
		chislo = arr[i];
		count[chislo]++;	
	}
	int k = 0;
	for (int i = 0; i < maxV+1; i++) {
		for (int j = 0; j < count[i]; j++,k++) { 
			arr[k] = i;
		}
	}
}
