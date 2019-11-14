#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void Rearrange(int, int, int);
void SwitchNumbers(int, int);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  Rearrange(red, green, blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void Rearrange(int first, int second, int third)
{
    if(first < second)
    {
        SwitchNumbers(first, second);
    }
    if(first < third)
    {
        SwitchNumbers(first, third);
    }
    if(second < third)
    {
        SwitchNumbers(second, third);
    }
}

void SwitchNumbers(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
