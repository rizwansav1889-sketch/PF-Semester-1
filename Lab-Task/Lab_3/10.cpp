#include <iostream>
using namespace std;
int main(){
  int d,w,l,total;
  string name;
  cout<<"Enter the name of a cricket team : ";
  cin>>name;
  cout<<endl<<"Enter the number of wins = ";
  cin>>w;
  cout<<endl<<"Enter the number of draws : ";
  cin>>d;
  cout<<endl<<"Enter the number of losses : ";
  cin>>l;
  w=3*w;
  l=0*l;
  total=w+d+l;
  cout<<endl<<name<<" has obtained "<<total<<" points in the Asia cup tournament.";
}
