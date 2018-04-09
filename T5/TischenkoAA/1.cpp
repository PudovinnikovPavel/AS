#include"StdAfx.h"
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector <vector<int>> b;
	b.resize(n,vector<int> (0));
	int* arr=new int[n];
	for(int i=0;i<n;i++){ 
		arr[i]=rand()%100;
//      cout<<arr[i]<<" ";
	}
//	cout<<endl;
	for(int i=0;i<n;i++) 
		b[arr[i]%10].push_back(arr[i]);
	int q=0;
	for(int i=0;i<n;i++)
		for(int j =0,size=b[i].size();j<size;j++){
			arr[q]=b[i][j];
			q++;
		}
	b.clear();
	b.resize(n,vector<int>(0));
	for(int i=0;i<n;i++) 
		b[arr[i]/10].push_back(arr[i]);
	q=0;
//	cout<<endl<<endl;
	for(int i=0;i<n;i++)
		for(int j=0,size=b[i].size();j<size;j++){
			arr[q]=b[i][j];
//			cout<<arr[q]<<" ";
			q++;
		}
//  cout<<endl;
	time_t t=clock()/CLOCKS_PER_SEC;
	cout<<t<<endl;
	system("pause");
	return 0;
}