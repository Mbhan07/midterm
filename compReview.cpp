#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){

  /*
  //read in a phrase form the user, swap the first two letters of every word
  char input[81];
  char cleaned[81];

  cout<< "Enter a message: ";
  cin.getline(input, 80);

  for(int i = 0; i < strlen(input); i++){

    if (i == 0 || input[i] != ' ' && input[i-1] != ' ' && input[i + 1] != '\0'){

      if(input[i] != ' ' && input[i + 1] != ' '){
      char temp = input[i];
      input[i] = input[i+1];
      input[i+1] = temp;
      i++;
      }
    }
  }

  cout << "Altered message: " << input << endl;*/

  //read in input from reader, wherever there is a 'g'/'G', replace with 'evil'
  /*char input[100];
  char message[] = "evil";
  char output[500];

  cout << "Enter a message: ";
  cin >> input;

  int input_length = strlen(input);

  for(int i = 0; i < input_length; i++){
    char c = input[i];
    if(c == 'g' || c == 'G'){
      strcat(output, "evil");
    }else{
      strcat(output, &c);
    }
  }

  int output_length = strlen(output);
  for (int j = 0; j < output_length; j++){
    cout << output[j] << endl;
  }

  cout << output << endl;*/

  // Write a program that takes a string input from the user and counts the number of vowels in the string.

  /*char input[100];
 int count = 0;

 cout <<"Enter a message: ";
 cin.getline(input, 100);

 int input_length = strlen(input);

  for (int i = 0; i < input_length; i++){
    //if(input[i] == ' '){
    //continue;
    //}
    if(input[i] == 'a' || input[i] == 'A'||
       input[i] == 'e' || input[i] == 'E'||
       input[i] == 'i' || input[i] == 'I'||
       input[i] == 'o' || input[i] == 'O'||
       input[i] == 'u' || input[i] == 'U'){
      count++;
    }
  }

  cout << "There are " << count << " vowels in the message." << endl;*/


  

  // add two ints together. do this 5 times or until the user exits

  /*int num1;
  int num2;
  int sum;
  int count = 0;
  char input[1];

  while (count < 5){

    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "Sum: " << sum << endl;

    while(true){
    cout << "Would you like to exit? (y/n):\t";
    cin >> input;

    
    if(strcmp(input, "y") == 0){
      cout <<"Goodbye!" << endl;
      exit(0);
    }else if(strcmp(input, "n") == 0){
     count++;
     break;
    }else{
      cout << "Please enter a valid input, 'y' or 'n' !\t" << endl;
      //      cin >> input;
      continue;
    }
    }
    

    
    if(count == 5){
      cout << "Thank you for not exiting yet. My objective was to prompt you 5 times and I have done that, so I am disconnecting. Goodbye!" << endl;
    }
    
    }*/


  /* multiply 7 ints together
  int count = 0;
  int num;
  char input[1];
  int product = 1;

  while (count < 7){

    cout << "Enter a number: ";
    cin >> num;

    if(num != 3 && num != 5){
      product *= num;
    }
    count++;
    
  }
  cout <<"The product of all the numbers is: " << product << endl;
  */
  return 0;
}
