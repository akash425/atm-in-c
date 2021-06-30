#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// creating struct data type for account entity
typedef struct account{
    char name[30];
    int ac;
    int PIN;
    int amount;
    } account;
    
account c[10];  
int i = 0;
void init(void);
void openingAccount(void);
void checkBalance(void);
void withdrawl(void);
void deposit(void);
void changePIN(void);

int main(){
	
	while(1){
		init();
	}
	
}

void init(){
	
	int choice;
	// clrscr(); 
	// system("clear");
	
    printf("\n\n\n**********************************WELCOME TO BANK********************************************\n");

    start:
    printf("1.Open A/C\n2.Check balance\n3.Withdrawl\n4.Deposit\n5.Change PIN\n6.EXIT\n7.Refresh\n\n");

    printf("Enter your choice:");
    scanf("%d",&choice);
    
    
    switch(choice){
    	case 1:
    		openingAccount();
    		break;
    	case 2:
    		checkBalance();
    		break;
    	case 3:
    		withdrawl();
    		break;
    	case 4:
    		deposit();
    		break;
    	case 5:
    		changePIN();
    		break;
    	case 6:
    		exit(0);
    		break;
    	case 7:
    		system("clear");
    		init();
    		break;
		default:
	        printf("INVALID CHOICE\n");
	        init();
			break;    		
	}
	
}

    
void openingAccount(){
		
		int accNotExists = 1 , tmpac, j;	
        printf("Enter name:");
        scanf("%s",c[i].name);

        printf("Enter A/C No. of 4 digits:");
        scanf(" %d",&tmpac);


        for ( j = 0; j < 10; j++)
        {
            if (tmpac==c[j].ac)
            {
                printf("This A/C no. already exists, Please try another.\n");
                accNotExists = 0;                
                break;
            }  
        }
		
		if( accNotExists ){  // if not existed alreday
		
	        c[i].ac = tmpac;
	        
	        printf("Create your PIN of 4 digits:");
	        scanf("%d",&c[i].PIN);
	
	        printf("Enter Amount you want to Deposite:");
	        scanf("%d",&c[i].amount);
	        
	        
	        printf("\n\n");
	        printf("Welcome %s\n",c[i].name);
	        printf("A/C No.:%d\n",c[i].ac);
	        printf("You have INR:%d in your A/C\n",c[i].amount);
	        printf("Thanks for opening your A/C in our bank\n\n\n");
	        
	        i++;			
		}
}    

void checkBalance(){
	
		int acc , accNotExists = 1 , j, PIN1;
		
        printf("Enter A/C no.:");
        scanf("%d",&acc);
        
        for ( j = 0; j < i; j++)
        {
            if ((c[j].ac)==acc) // account found
            {
            	accNotExists = 0;
            	
		        printf("Enter PIN:");
		        scanf("%d",&PIN1);
		        
		        if (PIN1!=c[j].PIN)
		        {
		            printf("Incorrect PIN\n");
		            break;
		        }  
		        
		        printf("You have INR:%d in your A/C\n\n\n",c[j].amount);
                break;
            }  
        }
        
        if (accNotExists ){   // account not found
            printf("Incorrect A/C no...\n");
		}		
}


void withdrawl(){
	
		int acc , accNotExists = 1 , j, PIN1 , ta = 0;
		
        printf("Enter A/C no.:");
        scanf("%d",&acc);
        
        for ( j = 0; j < i; j++)
        {
            if ((c[j].ac)==acc) // account found
            {
            	accNotExists = 0;
            	
		        printf("Enter PIN:");
		        scanf("%d",&PIN1);
		        
		        if (PIN1!=c[j].PIN)
		        {
		            printf("Incorrect PIN\n");
		            break;
		        }  
		    	
		        printf("Enter amount:");
		        scanf("%d",&ta);
		        c[j].amount=c[j].amount-ta;
		        printf("Your current balence is:INR%d\n\n\n",c[j].amount);
		        
		        break;
			}
			
		}
		
        if (accNotExists ){   // account not found
            printf("Incorrect A/C no...\n");
		}		

}

void deposit(){
	
		int acc , accNotExists = 1 , j, PIN1 , ta = 0;
		
        printf("Enter A/C no.:");
        scanf("%d",&acc);
        
        for ( j = 0; j < i; j++)
        {
            if ((c[j].ac)==acc) // account found
            {
            	accNotExists = 0;
            	
		        printf("Enter PIN:");
		        scanf("%d",&PIN1);
		        
		        if (PIN1!=c[j].PIN)
		        {
		            printf("Incorrect PIN\n");
		            break;
		        }  
		    	
		        printf("Enter amount:");
		        scanf("%d",&ta);
		        c[j].amount=c[j].amount+ta;
		        printf("Your current balence is:INR%d\n\n\n",c[j].amount);
		        
		        break;
			}
			
		}
		
        if (accNotExists ){   // account not found
            printf("Incorrect A/C no...\n");
		}		

}

void changePIN(){
	
		int acc , accNotExists = 1 , j, PIN1 , ta = 0;
		
        printf("Enter A/C no.:");
        scanf("%d",&acc);
        
        for ( j = 0; j < i; j++)
        {
            if ((c[j].ac)==acc) // account found
            {
            	accNotExists = 0;
            	
		        printf("Enter PIN:");
		        scanf("%d",&PIN1);
		        
		        if (PIN1!=c[j].PIN)
		        {
		            printf("Incorrect PIN\n");
		            break;
		        }  
		    	
		        printf("enter new PIN:");
		        scanf("%d",&c[j].PIN);
		        printf("**PIN Changed**\n\n\n");
		        
		        break;
			}
			
		}
		
        if (accNotExists ){   // account not found
            printf("Incorrect A/C no...\n");
		}		
	
	
}
    
    
    

