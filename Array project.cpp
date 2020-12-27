#include <iostream>

using namespace std;


int main()
 {
 	int element[5];
 	int i=0;
 	cout<<"Enter a element: ";
 	for(i=0; i<5; i++)
 	cin>> element[i];
 	cout<<"You Entered " ;
 	for(i=0; i<5; i++)
 	cout<< endl << *(element + i);
	return 0;
}
