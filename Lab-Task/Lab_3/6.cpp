#include<iostream>
using namespace std;
int main(){
int MB,KB,B;
cout<<"Enter a size in Megabytes (MB) = ";
cin>>MB;
KB=1024*MB;
B=1024*KB;
cout<<endl<<MB<<"MB is equal to "<<B<<"bytes";
}
