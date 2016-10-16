#include<iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int number;
	FILE *fp;
    fp = fopen("input.txt", "r");
    
    if(!fp){
            cout << "Cannot open file";
            system("pause");
            exit(1);        
    }
    
    while (f >> number) {
          if(number%3==0&&number%5==0)
      cout<<"FizzBuzz"<<endl;
    else
    
	if(number%3==0)
      cout<<"Fizz"<<endl;
    else
   
    if(number%5==0)
      cout<<"Buzz"<<endl;
    else 
	  cout<<number<<endl;      
    }
    system("pause");
    return 0;
}   
