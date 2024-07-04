#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int i, Guess_Number, Random_Number , num, num2;
	char ch='Y';
	
	while(ch!='N')
	{
		cout<<"Random Number Game";
	    cout<<"Guess a number between 1 to 100 : ";
	    cin>>Guess_Number;
	
	    Random_Number=rand()% 100;
		
	    if(Random_Number > Guess_Number)
	    {
	    	
		    num=Random_Number - Guess_Number;
	        cout<<"Guess number is less than random number by : "<< num<<"\n";
	        cout<<"Random Number:"<<Random_Number;	
	    }
	    else if(Random_Number < Guess_Number)
	    {
	    	
    	    num2= Guess_Number - Random_Number;
    	    cout<<"Guess number is more than random number by : "<< num2<<"\n";	
    	    cout<<"Random Number:"<<Random_Number<<"\n";
        }
	    else
	    {
	        cout<<"Guess number matches the random number"<<"\n";
        }
        cout<<"Do you want to play again Y/N : ";
        cin>>ch;
        cout<<"\n";
    } 
   
return 0;
	
}

