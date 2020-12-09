#include <iostream> 
#include<cmath>


int main()
{
    /*
    num : stores value of number multiplied by each digit of previous number : if 5*24 then num= 5*2
    length : stores length of number after each multiplication
    A[200] : stores the number after each multiplication
    n      : stores the input number
    carry  : stores carry after multiplication with each digit
    fac    : stores the number from 1 to n in each iteration
    */
    int num=0,length=0,A[200],n,carry=0;
    int fac = 2,i=0;
    
    /*
    Each i for A[i] represents the ith digit : for example 546 is stored as A[0]=6  A[1]=4  A[2]=5
    */
    A[0] = 1;   //Initialise first digit with n
    
    
    std::cout << "Enter the number : "; //Input
    std::cin >> n;
    
    
    for (; fac <= n; fac++)     //Iterations for fac from 2 to n
    {

          
  
        for (i=0; i <= length; i++)     //Iterating through digits of current number
        {
            num = fac * A[i]+carry;     //Multiplication of each digit with fac and addition with carry from multiplication of previous digit
            carry = num / 10;           //Updation of carry
            A[i] =num % 10;             //Updation of each digit
            
        }
        
        for (;carry!=0; carry = carry / 10)     //Updation of the following digits if value of carry !=0
        {
            length++;       //Updating length 
            
            A[length] = carry % 10;     //Inputing digit from carry
        }
        
    }
    
    
    for (; length >= 0; length--)       //Output
    {
        std::cout << A[length];
    }
    

    
}
