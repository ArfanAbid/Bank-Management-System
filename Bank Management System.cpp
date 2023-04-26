#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
	char choice; 
	int n=0;
	string name[50];	
	string lname[50];	
	string no[50];
	string account[50];
	int money[50];               // initial Money //
	string i;                  //for account verification//
	int dep_money[50];        // Money you want to deposite//
	int wit_money[50];        //Money you want to withdraw//
	int total_money[50];
    string Gmail[50];

    string email="latifbank@gmail.com";         // official username from bank
    int password=1234;                         // official password from bank	
    string em;
	int pass;                                 //For verification, This is usually for Manager.//
	
	
                                        	// *********** Verification*******************//
                          	
	    P:
	         cout<<"\n\n \t\t >>Enter Offical Bank Email : ";
	        cin>>em;
	        cout<<"\n\n \t\t >>Enter Offical Bank Password : ";
	        cin>>pass;
	    if(email==em && password==pass){
	        	cout<<"\n\t\t Verifying" ;
			
	           for(int k=0;k<6;k++){        
		 	  cout<<".";
		        Sleep(600);
	            	}
	            }
	    else{
       			cout<<"\n\n\t\t Verifying" ;
			
	         for(int k=0;k<6;k++){        
		        	cout<<".";
	     	Sleep(600);
	            	}
			cout<<"\n\n\n \t\t Verification Failed !!!  Try again ";
	         goto P;
         }
	
	
	
    system("cls");	
	cout<<"\n\t\t\t ********************************************************";                                                  
	cout<<"\n\t\t\t *                                                      *";
	cout<<"\n\t\t\t *                     Welcome TO                       *";
	cout<<"\n\t\t\t *                 Latif Bank Limited                   *";
	cout<<"\n\t\t\t *                                                      *";    
	cout<<"\n\t\t\t ********************************************************";
	cout<<endl;

      
      
	O:
     cout<<endl;
    cout<<"\t\t\t********************************"<<endl;
	cout<<"\t\t\t          Main Menu             "<<endl;
	cout<<"\t\t\t********************************"<<endl; 
	cout<<"\n\t 1. Create / Add New Account";
	cout<<"\n\t 2. Depostive Money";
	cout<<"\n\t 3. withdraw Money";
	cout<<"\n\t 4. Balance Enquiry";   
	cout<<"\n\t 5. Offical Bank Record";
	cout<<"\n\t 6. Exit";
    cout<<"\n\nPlease Enter Your choice <1-6>:";
    cin>>choice;


	switch(choice)
	{

       case '1':
       
	        n++; 
    
			system("cls");
          cout<<"\t\t\t\t********************************"<<endl;
          cout<<"\t\t\t\t       Create / Add Account  "<<endl;
	      cout<<"\t\t\t\t********************************"<<endl;
          cout<<"\n >> Enter Data of a person ::\n";
		
	      cout<<"\n  Enter Account ID:";
	      cin>>account[n];
			
	       cout<<"\n Please Enter Your first Name:";
	        cin>>name[n];
           
           cout<<"\n Please Enter your last Name: ";
           cin>>lname[n];
           
       	  cout<<"\n Please Enter Your phone Number:";
	      cin>>no[n];
	
	      cout<<"\n Please Enter Your Gmail :";
	       cin>>Gmail[n];
			
	      cout<<"\n Please Deposit initial amount:";
	      cin>>money[n];
	      total_money[n]=money[n];
	       cout<<"\n\n Please Wait" ;
			
	       for(int k=0;k<6;k++){        
		 	cout<<".";
		     Sleep(600);
	            	}
          cout<<endl;
          cout<<"\n\t\t\t ********** Account Created Successsfully **********";
	      cout<<endl;
	         Sleep(2500);
       goto O;
			
            
		   
		case '2':
			
			
			system("cls");

            cout<<"\t\t\t\t********************************"<<endl;
            cout<<"\t\t\t\t          Deposit Money         "<<endl;
	        cout<<"\t\t\t\t********************************"<<endl;
           
           if(n==0)
		   {
           	 cout<<"\n\t NO Current Record found !!! "<<endl;
           	 cout<<" >> Please First Create Acount..  \n";
           	 Sleep(1000);
           	 goto O;
		   }
		   else
		   {
			D:
				
			cout<<"\n Enter Account ID:";
			cin>>i;
			for(int c=1;c<=n;c++){
				
			if( account[c]== i )
			{
			
				cout<<"\n please Enter the Amount you want to Deposite in your Account:";
				cin>>dep_money[c];
				cout<<"\n\t\t\t ********** Money Deposite Successfully **********\n";
					total_money[c]=total_money[c]+dep_money[c];
                Sleep(2500);
	     		goto O;
	     		break;
	     	}
	     }
	     
		if(account[n]!=i)
		{
				cout<<"\n NO Account found.  Please Try Again:";
			Sleep(1500);
	
			goto D;
		}

	     	
	     	}
	     		
	     	
		
		case '3':
			
			system("cls"); 
            cout<<"\t\t\t\t********************************"<<endl;
            cout<<"\t\t\t\t          Amount Withdraw       "<<endl;
	        cout<<"\t\t\t\t********************************"<<endl;
	        
	        if(n==0)
		   {
           	 cout<<"\n\t NO Current Record found !!! "<<endl;
           	 cout<<" >> Please First Create Acount..  \n";
           	 Sleep(1000);
           	 goto O;
		   }
		   else
		   {
			
			W:
			cout<<"\n Enter Account ID:";
			cin>>i;
			
			for(int c=1;c<=n;c++){
				
			
			
			if( account[c]== i ) 
			{
				U:
				cout<<"\n please Enter the Amount you want to Withdraw in your Account:";
				cin>>wit_money[c];
				if( wit_money[c] <=total_money[c])
				cout<<"\n\t\t\t ********** Money Withdraw Successfully **********\n";
				else
				{
				  cout<<"\n You donot have  enough Money";
				  Sleep(800);
				goto U;
			    }
			    	total_money[c]=total_money[c]-wit_money[c];
			Sleep(2500);
	     	goto O;
	     	break;
			}
		}
		if(account[n]!=i)
		{
				cout<<"\n NO Account found.  Please Try Again:";
			Sleep(1500);
			goto W;
		}
		
	     }
	     
	     	
	    case '4':
	    	
	     	system("cls"); 
            cout<<"\t\t\t\t********************************"<<endl;
            cout<<"\t\t\t\t          Balance Inquiry       "<<endl;
	        cout<<"\t\t\t\t********************************"<<endl;
	        
	        if(n==0)
		   {
           	 cout<<"\n\t NO Current Record found !!! "<<endl;
           	 cout<<"\n >> Please First Create Acount..  \n";
           	 Sleep(1000);
           	 goto O;
		   }
		   else
		   {
			B:
			cout<<"\n Enter Account ID:";
			cin>>i;
			
			
			for(int c=1 ;c<=n;c++)
			{
			
			if( account[c]== i)
			{
				cout<<"\n Your detail of Account is:\n";
				cout<<"\n Name: "<<name[c]<<" "<<lname[c];
				cout<<"\n Accound Id: "<<account[c];
				cout<<"\n Phone NO: "<<no[c];
				cout<<"\n Total Money in your Account is : "<<total_money[c]<<endl;
		  	    Sleep(2500);
		        goto O;
		        break;
			}
		}
			if(account[n]!=i)
		{
				cout<<"\n NO Account found.  Please Try Again:";
			Sleep(1500);

			goto B;
		}
		    
		
		}
		    

		case '5':
			
			
	         system("cls"); 
	        cout<<"\t\t\t\t********************************"<<endl;
            cout<<"\t\t\t\t          Record                "<<endl;
	        cout<<"\t\t\t\t********************************"<<endl;
	        	      
			if(n==0){
				cout<<"\n\t No current Record Found !!!";
			}
	        else{
			 cout<<endl;
			for(int i=1; i<=n; i++)
			{

				cout<<"\n"<<i<<". Name: "<<name[i]<<" "<<lname[i] <<"\t Phone NO: "<<no[i]<<" \t Gmail: "<<Gmail[i]<<"\t Account NO: "<<account[i]<<endl;
			}
		}
			
           Sleep(2500);
			goto O;
			break;
		    	
		    	
		case '6':
			  system("cls"); 
		      cout<<"\n\n\n\t\t***********************  Thank You  *************************** \n\n";
      	      break;
      	 
      	default:
      		
      		system("cls"); 
      		
      	 	cout<<"\n You have not entered correct choice. Please Try Again:\n";
      	 	Sleep(1500);
      	 	goto O;

				
	}
return 0;

}

