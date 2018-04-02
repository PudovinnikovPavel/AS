#include<iostream>
using namespace std;
const int n_max=100;
const int m_max=255;
int a[n_max], b[n_max], c[ m_max], n, j, i;
int main()
{
cin>>n;
for (i=0; i<n;i++)
cin>>a[i];

for(j=0; j<m_max; j++) c[j]=0;
for(i=0; i<n; i++) c[a[i]+1]++;
for(j=0; j<m_max; j++) c[j]+=c[j-1];
for(i=0;i<n;i++) b[c[a[i]]++]=a[i];
for(i=0;i<n;i++) a[i]=b[i];

for(c[a[i]]=0; c[a[i]]<n; c[a[i]]++) cout<<b[c[a[i]]]<<" ";
cout<<endl;
}
