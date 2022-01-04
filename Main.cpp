/*
* Devun Schneider
* CS140
* Prof Hawkins
Write a C++ program that uses a "while" loop to determine and print 
the largest and second-largest of 5 integers input by the user. 
You can assume valid input. Try to implement finding the largest 
number before moving on to finding the second-largest. Check if the 
input is the largest, if it is move the current largest to the 
second-largest and save the input as the largest. Otherwise, if the
input is the second-largest save it as the second-largest.
*/

#include <iostream>

using namespace std;
int main()
{
    //initializing input,largest and second largest
    int input;
    int largest = INT_MIN;
    int second=INT_MIN;
    //initializing counter
    int counter=1;
    //prompt for 5 integers
    cout<<"Enter 5 positive integers: "<<endl;
    //goes through 5 times for 5 numbers
    while(counter<=5)
    {
        //read input
        cin>>input;
        //checking if it is the largest in the set
        if(input>largest){
            //assigning it as second
            second=largest;
            //assigning it as largest
            largest=input;
          
        }
        //check if input is the second largest in the set
        else if(input>second){
            //assigning it as second largest
            second=input;
        }
        //incrementing counter
        counter++;
    }
    //printing largest number
    cout<<"The largest number was: "<<largest<<endl;
    //printing second-largest number
    cout<<"The second largest number was: "<<second;
    return 0;
}