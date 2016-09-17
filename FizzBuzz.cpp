#include <iostream>
using namespace std;
int main ()
{
  for(int p=1;p<=100;p++)
  {
    if(p%3==0&&p%5==0)
      cout<<"FizzBuzz"<<endl;
    else
    
	if(p%3==0)
      cout<<"Fizz"<<endl;
    else
   
    if(p%5==0)
      cout<<"Buzz"<<endl;
    else 
	  cout<<p<<endl;
  }
  return 0;
}
