#include <iostream>
using namespace std;
int main(){
  int p,dr,br,total;
  cout<<"Enter the current Population in world = ";
  cin>>p;
  cout<<"Enter the monthly birth rate = ";
  cin>>br;
  cout<<"Enter the monthly death rate = ";
  cin>>dr;

  total=p+30*(br*12)-30*(dr*12);
  cout<<endl<<"Total Population after 3 decades is "<<total;
}
