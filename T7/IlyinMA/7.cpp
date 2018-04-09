#include <iostream>
#include <queue>

int main()
{
	int i;
	std::queue <int> q1, q2;
	int arr[10];
	for(i=0;i<10;i++)
	{
		arr[i] = i;
	}
	for(i=0;i<10;i++)
	{
		if (i%2==1)
		{
			q2.push(arr[i]);
		}
		else
		{
			q1.push(arr[i]);
		}
	}
	std::cout << "q1: "<< q1.front() << " " << q1.back() << std::endl;
	std::cout << "q2: "<< q2.front() << " " << q2.back() << std::endl;
	return 0;
}