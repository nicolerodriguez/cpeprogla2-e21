#include<iostream>
#include <fstream>
using namespace std;

int main(){
	FILE *fp;
    fp = fopen("sample.txt", "r");
    
    if(!fp){
            cout << "Cannot open file";
            system("pause");
            exit(1);        
    }
    ifstream f("sample.txt");
    
    int hashmat, opponent;
    
    while (f >> hashmat >> opponent) {
          cout << (hashmat-opponent) << endl;      
    }
    
    //fclose(f);
    system("pause");
    return 0;
}   
