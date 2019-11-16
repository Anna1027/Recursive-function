#include <iostream>
#include <iomanip>
#include <queue>

using namespace std;

struct display {
  int number1;
  int number2;
};

int gcf (int num1, int num2);

int main (){

int firstNum;
int secondNum;
int greatestFac;
char choice;
//creating a queue to hold two numbers
queue<display> numbers;

do {
  cout<<"Please enter first number: ";
  cin>>firstNum;
  while (firstNum == 0){
    cout<<"Number can not be zero. Enter again please: ";
  cin>>firstNum;
  }

  cout<<"Enter the second number: ";
  cin>>secondNum;
  while (secondNum == 0){
      cout<<"Number can not be zero. Enter again please: ";
    cin>>secondNum;
  }
   display disp ;
    disp.number1 = firstNum;
    disp.number2 = secondNum;
    numbers.push(disp);
   
  
  cout<<"Would you like to enter two numbers? (y/n):";
  cin>>choice;
}
  while (choice == 'Y'||choice =='y');

  
  cout<<setw(6)<<"First #: " <<setw(8)<< "Second #: "<<setw(6)<< "GCF:" <<endl;
  //check if the queue is empty. If empty, process the queue 
  while (!numbers.empty()) 
  {
    
    display nums = numbers.front();
    //removing the queue 
    numbers.pop();

   //display the numbers and GCF 
   cout<< setw(6)<<nums.number1<<setw(8)<<nums.number2<<setw(9)<<gcf(nums.number1, nums.number2)<<endl;;

  }

      return 0;
  }
  //The function to find GCF using recursive function
  int gcf (int num1, int num2){

      if (num2 <= num1 && num1 % num2 == 0)
        return num2;

      else if (num1 < num2)

        return gcf (num2, num1);

      else 

        return gcf(num2, num1 % num2);
        
  }



