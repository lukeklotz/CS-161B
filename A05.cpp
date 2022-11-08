/******************************************************************************
# Author:           Luke klotz
# Assignment:       Assignment 5
# Date:             November 6th, 2022
# Description:      This program gets input from user, sets two pointers to user input, then
calls 3 functions that swap the args, divide, and set the power of num1 and num2 to num1
# Input:            User inputs two numbers
# Output:           Program outputs user nums swapped, divided, and powered
# Sources:          Zybooks, youtube, tutor (Autumn)
#******************************************************************************/



#include <iostream>
using namespace std;

//global functions

void SwapArgs(int *num1, int *num2); 
void DivideArgs(int *num1, int *num2);
void PowerArgs(int *num1, int *num2);

int main() {

  // declaring variables
  int number1 = 0;
  int number2 = 0;

  cout << "Enter two variables seperated by a space: ";

  cin >> number1;
  cin >> number2;
  
  //declaring pointers to variables
  int *num1 = &number1;
  int *num2 = &number2;

  //prints numbers before they enter functions
  cout << "Original numbers are: " << *num1 << " and " << *num2 << endl;

  //calls functin to swap args
  SwapArgs(num1, num2);

  //calls function to divide args
  DivideArgs(num1, num2);

  //calls function to power args
  PowerArgs(num1, num2);

}

//function to swap args
void SwapArgs(int *num1, int *num2) 
{
  //temp val to store information
  int tempVal;

  //sequence used to swap args
  tempVal = *num1;
  *num1 = *num2;
  *num2 = tempVal;

  // print numbers swapped
  cout << "Numbers swapped: " << endl;

  // each num assigned to pointer 
  // now num1 and num2 are set to swapped values 
  // to be used in new fucntions
  cout << "a: " << *num1 << " " << "b: " << *num2 << endl;
}
  
  // fuinction divides updated pointers
void DivideArgs(int *num1, int *num2) 
{
  // temp val to assign the values divided
  int numsDivided;
  
  cout << *num1 << " divided by " << *num2 << " is " << endl;

  // divides numns and puts remainder in *num2
  numsDivided = *num1 / *num2;
  *num2 = *num1 % *num2;
  *num1 = numsDivided;

  //prints updated pointers 
  cout << "a: " << *num1 << " " << "b: " << *num2 << endl;
}

  //function to power each arg
void PowerArgs(int *num1, int *num2) 
{
  //temp val
  int pwr = *num1;

  cout << *num1 << " to the power of " << *num2 << " is: " << endl;

  //loop to calculate power of *num1 to *num2
  for(int i = 0; i < *num2 - 1; ++i) 
  {
    *num1 = *num1 * pwr;
  }

  //prints result
  cout << "a: " << *num1 << " " << "b: " << *num2 << endl;
}