#include <iostream>
#include <vector>
#include <ctime>

using namespace std;
void sort (vector <int> & a){
	int maxElem=0;
	for (auto it = a.begin();it!=a.end();it++){
		if(*it>maxElem) maxElem=*it;
	}
	int* counters =new int[maxElem+1]();
	for (auto it =a.begin();it!=a.end();it++){
		counters[*it]++;
	}
	a.clear();
	for(int i=0;i<=maxElem;i++){
		for(int g=0;g<counters[i];g++){
			a.push_back(i);

	}
    }
}

int main() {
    srand(time(0));
	vector <int> a;
	for(int i=0;i<1000;i++){
        a.push_back(rand()%100);
	}
	double time_begin=clock();
	sort(a);
	double sortTime=(clock()-time_begin)/CLOCKS_PER_SEC;

	for(auto it= a.begin();it!=a.end();it++){
		cout<<*it<<"  ";
	}

	cout<<endl<<"sort time= "<<sortTime;

	return 0;
}





