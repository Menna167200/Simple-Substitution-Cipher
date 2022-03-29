#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main() 
{
int i, j, choice, size = 26 ;
string container , cipher_alpha , result , input_low , key_word_low ;
string plain_alpha = "abcdefghijklmnopqrstuvwxyz";
string shallow_copy = plain_alpha;
char input [100] , key_word [5];

cout << "what do you like to do today ?"<< endl;
cout << "1- Cipher a message" << endl;
cout << "2- Decipher a message" << endl;
cout << "3- End" << endl;
cin >> choice;

while (true)
{
// checking user choice 
 if (choice == 1)
 {
  cout << "please enter a key word of five characters : " ;
  cin >> key_word;
  while (strlen(key_word) == 5 ) 
  {
    // converting the key word to lower case
   for (i = 0 ; i < strlen(key_word) ; i++)
       key_word_low += tolower(key_word[i]);
   for (j = 0 ; j < 5 ; j++)
   {
      for (i = 0 ; i < size ; i++)
      {
        // puting the remainig alphabet in a container 
          if (key_word_low[j] != shallow_copy[i])
         {
              container += shallow_copy[i];
         }
          else
              continue;
      } 
          // decreasing the size by 1 because of the decreasing of the alphabet as we loop 
      size -= 1;
      shallow_copy = container ;
      container = "";
   } 
   cout << "please enter a phrase : ";
   cin.ignore();
   cin.getline(input,100);
// converting the input to lower case  
   for (i = 0 ; i < strlen(input) ; i++)
      input_low += tolower(input[i]);
    
   cipher_alpha = key_word_low + shallow_copy;
   for (j = 0 ; j < strlen(input) ; j++)
   {
      for (i = 0 ; i < 26 ; i++)
      {
        // chicking if it is an alphabet or a space and if it is a space then we end the inner-loop 
          if (input_low [j] == plain_alpha[i])
          {
             result += cipher_alpha[i];
          }
          else if (input_low [j] == char (32))
          {
             result += char (32) ;
             i = 26;
          }
          else 
             continue;
        
      }
   }

   cout << "Plain alphabet : " << plain_alpha << endl;
   cout << "Cipher alpha : " << cipher_alpha << endl;
   cout << "Plain text : " << input << endl;
   cout << "Cipher text : " << result << endl << endl;
   cout << "what do you like to do today ?"<< endl;
   cout << "1- Cipher a message" << endl;
   cout << "2- Decipher a message" << endl;
   cout << "3- End" << endl;
   cin >> choice;
// returning everything to what it used to be 
   size = 26;
   shallow_copy = plain_alpha;
   cipher_alpha = "";
   key_word_low = "";
   result = "";
   input_low = "";
   continue;
  } 
 }
 else if (choice == 2) 
 {
  cout << "please enter a key word of five characters : " ;
  cin >> key_word;
  while (strlen(key_word) == 5 ) 
  {
    // converting the key word to lower case
   for (i = 0 ; i < strlen(key_word) ; i++)
       key_word_low += tolower(key_word[i]);
   for (j = 0 ; j < 5 ; j++)
   {
      for (i = 0 ; i < size ; i++)
      {
        // puting the remainig alphabet in a container
          if (key_word_low[j] != shallow_copy[i])
         {
              container += shallow_copy[i];
         }
          else
              continue;
      } 
          // decreasing the size by 1 because of the decreasing of the alphabet as we loop 
      size -= 1;
      shallow_copy = container ;
      container = "";
   } 
   cout << "please enter a phrase : ";
   cin.ignore();
   cin.getline(input,100);
   // converting the input to lower case
   for (i = 0 ; i < strlen(input) ; i++)
      input_low += tolower(input[i]);
    
   cipher_alpha = key_word_low + shallow_copy;
   for (j = 0 ; j < strlen(input) ; j++)
   {
      for (i = 0 ; i < 26 ; i++)
      {
        // chicking if it is an alphabet or a space and if it is a space then we end the inner-loop 
          if (input_low [j] == cipher_alpha[i])
          {
             result += plain_alpha[i];
          }
          else if (input_low [j] == char (32))
          {
             result += char (32) ;
             i = 26;
          }
          else 
             continue;
        
      }
   }

   cout << "Plain alphabet : " << plain_alpha << endl;
   cout << "Cipher alpha : " << cipher_alpha << endl;
   cout << "Cipher text : " << input << endl;
   cout << "Plain text : " << result << endl << endl ;
   cout << "what do you like to do today ?"<< endl;
   cout << "1- Cipher a message" << endl;
   cout << "2- Decipher a message" << endl;
   cout << "3- End" << endl;
   cin >> choice;
// returning everything to what it used to be 
   size = 26;
   shallow_copy = plain_alpha;
   cipher_alpha = "";
   key_word_low = "";
   result = "";
   input_low = "";
   continue; 
  }
 }
 // if the choice is 3 we finish the program
 else if (choice == 3)
 {
   cout << "thanks for using our program" << endl;
   break;
 }
 // if the user choosed wrong option we ask him to choose again
 else
 {
   cout << "wrong choice , please try again" << endl << endl;
   cout << "what do you like to do today ?"<< endl;
   cout << "1- Cipher a message" << endl;
   cout << "2- Decipher a message" << endl;
   cout << "3- End" << endl;
   cin >> choice;
// returning everything to what it used to be 
   shallow_copy = plain_alpha;
   size = 26;
   cipher_alpha = "";
   key_word_low = "";
   result = "";
   input_low = "";
   continue;
 }
}
    return 0;
}





