#include <iostream>
#include <cstring>

using namespace std;

//read in two integers from the user and output the sum
//do this five times or until the user quits

int main(){

  int num1;
  int num2;
  int sum;
  int count = 0;
  char input[2];

  /*cout << "Enter your first number: ";
  cin >> num1;

  cout << "Enter your second number: ";
  cin >> num2;

  sum = num1 + num2;*/

  while(count < 5){
  cout << "Enter your first number: ";
  cin >> num1;

  cout << "Enter your second number: ";
  cin >> num2;

  sum = num1 + num2;
  cout <<"Sum: " << sum << endl;

  cout << "Would you like to exit? (y/n)" << endl;
  cin >> input;
  //cin.get(input, 2);
  //cin.get();
  cout << input << endl;
  if(strcmp(input, "y") == 0){
    cout << "Bye!" << endl;
    exit(0);
  }else{
    cout << "Continuing on!" << endl;
    count++;
  }

    /*for (int i = 0; i <= 5; i++){
      cout <<"Sum: " << sum << endl;
      cout <<"Would you like to exit? (y/n)" << endl;
      cin.get(input, 2);
      cin.get();
      cout << input << endl;
      if(strcmp(input, "y") == 0){
	cout << "Thanks!" << endl;
	exit(0);
      }else{
	cout << "Continuing on!" << endl;
	count++;
      }
      }*/
    
  // exit(0);
  if (count == 5){
    cout << "I have now added two numbers five times, so it's time for me to leave. Goodbye!" << endl;
  }
    
  }

  return 0;
}
