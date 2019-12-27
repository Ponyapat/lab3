#include <iostream> 
#include <string>
using namespace std; 

int main () {
	string text1,text2;
    int count=0 ;
    int N;

    cout << "Enter the first text : ";
    cin >> text1;
    cout << endl;

    cout << "Enter the second text : ";
    cin >> text2;
    cout << endl;

    cout << "Enter N : ";
    cin >> N;
    cout << endl;

    while (count < N)
    {
        if (count%2 == 0)
        {
            cout << text1 << " ";
        }else{
            cout << text2 << " ";
        }
        count++;
    }

    return 0;
    
}
