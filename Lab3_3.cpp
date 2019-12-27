#include <iostream> 
using namespace std; 

int main() 
{ 
    double sum;
    float n=2;
    
    while( n<69 ){
    	sum = sum + 1/n;
    	n++;
	}
	
	cout << "Sum of eries number is : " << sum ;
    return 0; 
} 
