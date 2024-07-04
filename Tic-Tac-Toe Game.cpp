//Tic-Tac-Toe Game

#include<iostream>
using namespace std;

int main(){
	int i,j,C=0,k,M1=0, M2=0; 
	char Index;
	cout<<"Tic-Tac-Toe Game"<<"\n";
	cout<<"Player1 : X , Player2 : 0"<<"\n";
	char B[3][3]={{'1','2','3'}, 
	             {'4','5','6'},
	             {'7','8','9'}};
	             cout << "grid before enter"<<"\n";
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
          	cout << B[i][j] << "\t"; 
        }
        cout<<"\n";
    }
	             
	for(k=0;k<9;k++)
	{   
	    bk:
	    cout<<"Enter "<<"\n";
	    cout<<"enter index of the grid:";
	    cin>>Index;
	    C=0;
	    for(i=0;i<3;i++)
		{
	        for(j=0;j<3;j++)
	        {
			    if(B[i][j]==Index)
			    {
			      	C=C+1;
			        if(k%2!=0)
		            {
	     			    B[i][j]='O'; 
				    } 
			    	else
				    {
				       B[i][j]='X';
			        }    
			    }
            }	
        }
		if(C==0)
	    {
    	 	cout<<"Please renter blank box";
			goto bk;   
		}  	              
    }
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<B[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
    for(i=0;i<3;i++)
    {
    	if(B[i][0] == B[i][1] && B[i][1] == B[i][2] || B[0][i] == B[1][i] && B[1][i] == B[2][i])
    	{
    	   	if(B[i][0]=='X' || B[0][i]=='X')
    	   	{
    	  		cout<<"palyer1 won";
        		return 0;
			}
			else if(B[i][0]=='O' || B[0][i]=='O')
   	    	{
   	    		cout<<"palyer2 won";
    	    	return 0;
			}
			else
			{
				cout<<"tie";
			} 
		}
	}
	
    if(B[0][0] == B[1][1] && B[1][1] == B[2][2] || B[0][2] == B[1][1] && B[1][1] == B[2][0] )
	{
		if(B[1][1]=='X')
    	{
    	    cout<<"palyer1 won";
     		return 0;
		}
	    else if(B[1][1]=='O')
    	{
     		cout<<"palyer2 won";
    	  	return 0;
		}
		else
		{
		    cout<<"tie";
		}
	}
	
	return 0;
}
