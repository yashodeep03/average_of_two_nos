#include<iostream>
using namespace std;
// main function
int main()
{
  // variables to store input values
  double n1, n2, n3, n4, n5; 
  double avg; // to store result

  // take input values
  cout << "Enter five numbers: ";
  cin >> n1 >> n2 >> n3 >> n4 >> n5;
  
  // calculate average value
  avg = (n1 + n2 + n3 + n4 + n5)/5;
  
  // display result
  cout << "Average = " << avg << endl;

  return 0;
}
