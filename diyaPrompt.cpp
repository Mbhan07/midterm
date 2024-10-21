#include <iostream>
#include <cstring>

using namespace std;

int main(){

  int num;
  int count = 0;
  int product = 1;

  //use a while loop as a counter of how many times there is input, until 7 numbers
  while (count < 7){ //until 7 numbers are read

    //prompt the user to enter an integer
    cout << "Enter a number: ";
    //get the input using cin
    cin >> num;
    //if the input is not three and five
    if(num !=3 && num !=5){

      //multiply it to the existing product, which is 1
      product *= num;
    }

    //increment count to read in another number
    count++;
  }

  //print the multiplied product
  cout << product << endl;
  return 0;

}
