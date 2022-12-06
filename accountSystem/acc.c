#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void Password();
void ATM_Interface();
void passwordr2();
void passwordr3();
void password3();
void logout(void);

int option;
int Account_No;
float cash_Transfer;
float Balance = 1000;
int continueTransaction;
int amount;
float a, b, c, d, e, f, g, h, i, q, deposit, transfer, withdraw = 0;

int main()
{
  printf("\t\t\t\t\tWELCOME TO DEKUT ATM SYSTEM\n");
  Password();
}

void Password() // Allows for first login attempt
{
  system("color 70");
  char enteredPin[50];
  char pin[50] = "Admin123"; // default account password stored in variable y

  printf("Enter your pin: ");
  scanf("%s", enteredPin);

  if (strcmp(enteredPin, pin) == 0) // comparison between password in records and user input password
  {

    system("cls");
    printf("\t\t\t\t\t\tWelcome To DeKUT ATM system \n");
    ATM_Interface(); // if password matches, atm menu is displayed
  }
  else
  {
    passwordr2(); // allows for other login attempts
  }
}

void passwordr2()
{
  printf("INCORRECT.TWO REMAINING ATTEMPTS.\n");
  passwordr3(); // allows for second login attempt
}

void passwordr3()
{
  char enteredPin[25];
  char Pin[50] = "Admin123";

  printf("Enter Passcode: ");
  scanf("%s", enteredPin);

  if (strcmp(enteredPin, Pin) == 0)
  {
    system("cls");
    printf("\t\t\t\t\t\tWelcome To DeKUT ATM system \n");
    ATM_Interface();
  }
  else
  {
    printf("INCORRECT.ONE REMAINING ATTEMPT.\n");
    password3(); // allows for third and final login attempt
  }
}

void password3()
{
  char enteredPin[25];
  char Pin[50] = "Admin123";

  printf("Enter Passcode: ");
  scanf("%s", enteredPin);
  if (strcmp(enteredPin, Pin) == 0) // PROGRAM CONTINUES ON TO DISPLAY ATM MENU SCREEN IF I AM TRUE
  {
    system("cls");
    printf("\t\t\t\t\t\tWelcome To DeKUT ATM system \n");
    ATM_Interface();
  }
  else // PROGRAM QUITS IF I AM TRUE(ALL LOGIN ATTEMPTS HAVE FAILED)
  {
    printf("DEAR USER, YOU HAVE EXHAUSTED YOUR NUMBER OF LOGIN ATTEMPTS.YOU CANNOT ACCESS YOUR ACCOUNT.\n");
  }
}

void logout(void) // LOG OUT MENU
{
  int continueTransaction; // userchoice-variable for carrying out another transaction or for quiting program
  printf("\nDo you want to carry out another transaction\n");
  printf("1.YES\t2.No\n");
  printf("Enter option:");
  scanf("%d", &continueTransaction);
  if (continueTransaction == 1) // user wants to perform another transaction
  {
    system("cls");
    ATM_Interface();
  }
  else if (continueTransaction == 2) // user does not want to perform another transaction
  {
    printf("\n******************THANK YOU AND WELCOME BACK AGAIN******************\n\n\n\n\n");
  }
  else
  {
    printf("INVALID OPTION TRY AGAIN\n");
    logout(); // prompts user again for appropriate choice
  }
}

void ATM_Interface()
{
  time_t now;
  time(&now);
  printf("\n");
  printf("\t\t\t\t\t        %s", ctime(&now));
  printf("...................\n");
  printf("DEKUT ATM SIMULATOR\n");
  printf("'''''''''''''''''''   \n");
  printf("ATM SERVICES\n\n");
  printf("1.Check Balance\n");
  printf("2.Deposit\n");
  printf("3.Withdraw\n");
  printf("4.Transfer Cash\n");
  printf("5.Quit\n\n");
  printf("......................\n");
  printf("Choose your Option : ");
  scanf("%d", &option);
  if (option == 1)
  {

    printf("Your balance is: %f", Balance);
    printf("\n\t\t Do you wish to print reciept ?press 1[Yes], 0[No]\n");
    a = Balance;
    scanf("%d", &continueTransaction);
    if (continueTransaction == 1)
    {
      system("cls");
      system("color E1 ");
      printf("::::::BALANCE RECEIPT::::::\n");
      printf("TYPE\t\t\t\t\tAMOUNT\t\t\t\t\t\n");
      printf("BALANCE: \t\t\t    %f", a);
      printf("\n::::::THANK YOU FOR USING DEKUT ATM::::::\n");
      logout();
    }

    else if (continueTransaction == 0)
    {
      logout();
      system("color 70");
    }
    else
    {
      printf("invalid response!!!!!!");
      logout();
    }
  }
  else if (option == 2)
  {

    b = Balance;
    printf("\n\t\tPlease Enter the amount to deposit: ");
    scanf("%f", &deposit);
    c = deposit;
    Balance = (b + deposit);
    printf("\n\t\tYou have deposited :%0.1f  New Balanceis: %0.1f ", c, Balance);
    printf("\n\t\t Do you wish to print the reciept ?press 1[Yes], 0[No]\n");
    scanf("%d", &continueTransaction);
    system("cls");
    if (continueTransaction == 1)
    {
      system("cls");
      system("color E1 ");
      printf("::::::DEPOSIT RECEIPT::::::\n");
      printf("TYPE\t\t\t\t\tAMOUNT\t\t\t\t\t\n");
      printf("BALANCE: \t\t\t    %0.1f", Balance);
      printf("\n::::::THANK YOU FOR USING DEKUT ATM::::::\n");
      logout();
    }
    else if (continueTransaction == 0)
    {
      logout();
      system("color 70");
    }
    else
    {
      printf("invalid response!!!!!!");
      logout();
    }
  }
  else if (option == 3)
  {
    e = Balance;
    printf("\n\t\tPlease Enter the amount to withdraw: ");
    scanf("%f", &withdraw);
    if (Balance <= Balance && (0.02 * withdraw) + withdraw < Balance)
    {
      g = withdraw;
      h = (0.02 * withdraw);
      Balance = (e - withdraw) - (0.02 * withdraw);
      printf("\n New acc balance: %0.1f", Balance);
      printf("withdrawal cost: %0.1f", h);
      printf("\n\t\t Do you wish to print the withdrawal receipt ?press 1[Yes], 0[No]\n");
      scanf("%d", &continueTransaction);

      if (continueTransaction == 1)
      {
        system("cls");
        system("color E1 ");
        printf("::::::WITHDRAWAL RECEIPT::::::\n");
        printf("TYPE\t\t\t\t\tAMOUNT\t\t\t\t\t\n");
        printf("BALANCE: \t\t\t    %0.1f", Balance);
        printf("\n::::::THANK YOU FOR USING DEKUT ATM::::::\n");
        logout();
      }
      else if (continueTransaction == 0)
      {
        logout();
        system("color 70");
      }
      else
      {
        printf("invalid response!!!!!!");
        logout();
      }
    }
    else
    {
      printf("Insufficient Funds");
      ATM_Interface();
    }
  }

  else if (option == 4)
  {
    i = Balance;
    printf("\n\t\tPlease Enter the Account number to Transfer money to: ");
    scanf("%d", &Account_No);
    printf("\n\t\tPlease Enter the amount to Transfer: ");
    scanf("%f", &cash_Transfer);
    if (transfer <= cash_Transfer)
      ;
    {
      int j;
      q = cash_Transfer;
      printf("\nTransaction was successful\n");

      Balance = i - cash_Transfer;

      printf("New acc balance: %0.1f", Balance);
      printf("\n\t\t Do you wish to print receipt?press 1[Yes], 0[No]\n");
      scanf("%d", &continueTransaction);
      system("cls");
      if (continueTransaction == 1)
      {
        system("cls");
        system("color E1 ");
        printf("::::::TRANSACTION RECEIPT::::::\n");
        printf("TYPE\t\t\t\t\tAMOUNT\t\t\t\t\t\n");
        printf("BALANCE: \t\t\t    %0.1f", Balance);
        printf("\n::::::THANK YOU FOR USING DEKUT ATM::::::\n");
        logout();
      }
      else if (continueTransaction == 0)
      {
        logout();
        system("color 70");
      }
      else
      {
        printf("invalid response!!!!!!");
        logout();
      }
      if (option == 5)
      {
        printf("Thankyou for using this system");
      }
      else if (option < 1 && option > 5)
      {
        printf("Invalid option ");
      }

      else
      {
        printf("invalid choise ");
      }
    }
  }
}
