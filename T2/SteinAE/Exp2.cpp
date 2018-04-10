#include <iostream>
#include <stdlib.h>
#include <array>

int main(){
	std::array <int,10> arr= {1,2,3,4,5,6,7,8,9,10};
	std::cout<<"        array\n";
	std::cout<<"before          after\n";
		for (int& i : arr) {
		std::cout<<i<<"              ";
		i*=2;
		std::cout<<i<<"\n";
	}
	
}
