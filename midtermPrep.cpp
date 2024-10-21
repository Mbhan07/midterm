#include <iostream>
#include <cstring>
#include <cwctype>

using namespace std;

int main(){

  char input[101];

  cout << "Enter a phrase (less than 100 characters): " << endl;
  cin.get(input, 100);
  cin.get();

  //cout << input << endl;

  int input_length = strlen(input);

  cout << input_length << endl;

  for (int i = 0; i < input_length; i++){
    input[i] = tolower(input[i]);
  }

  cout << input << endl;
   
  for (int i = 0; input[i] != '\0';) {
       // Check for the start of a word
        if (input[i] != ' ') {
            // Swap the first two letters of the word, if possible
            if (input[i + 1] != '\0') {
                char temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
		i += 2; // Move past the swapped letters
            } else {
                i++; // Move to the next character if there's no second letter
            }
        } else {
            // If it's a space, just move to the next character
            i++;
        }

        while (input[i] != '\0' && input[i] == ' ') {
            i++;
        }

	
    }

  cout << "The first two letters should be switched." << endl;
  cout <<input << endl;



  return 0;

}
