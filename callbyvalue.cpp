
#include <iostream>

using namespace std;

void swap(int d, int e) 
{

   int swapp=d;
   d=e;
   e= swapp;


}


int main() {
    
int a=20;
int b=40;

cout<<"Before Swap a="<<a<<"  b="<< b<< endl;
swap(a,b);
cout<<"After swap a="<<a<<"  b="<< b<< endl;
return 0;

} 


