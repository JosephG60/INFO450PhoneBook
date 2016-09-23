//
//  main.cpp
//  PhoneBook
//
#include <iostream>
void AddPhoneBookEntry(char ph[10][2][50])
{
    static int p;
    
    std::cout <<"\nEntry : " << p+1;
    std::cout << "\n Please Enter Name : ";
    std::cin >> ph[p][0];
    std::cout << "\n Please Enter phone number : ";
    std::cin >> ph[p][1];
    p++;
}

void DisplayPhoneBookEntry(char ph[10][2][50])
{
    int i;
    
    std::cout << "\n\t\t 0 \t\t\t 1 ";
    for(i =0; i < 10; i++)
    {
        
        {
            std::cout << "\n " << i << ph[i][0]<< " " << ph[i][1];
        }
    }
}

int main()
{
    char ph[10][2][50];
    int i,j,k;
    char choice = 'A';
    for(i=0;i < 10; i++)
    {
        for(j=0; j < 2; j++)
        {
            for(k=0; k < 13; k++)
                ph[i][j][k] = '-';
        }
    }
    
    
    do
    {
        std::cout <<"\n ------------------------------------";
        std::cout <<"\n What do you want to do?";
        std::cout <<"\n ------------------------------------";
        std::cout << "\n [A]dd new entry == enter A";
        std::cout << "\n [D]isplay == enter D";
        std::cout << "\n [Q]uit == enter Q \n";
        std::cin >> choice;
        
        switch(choice)
        {
            case 'A' : AddPhoneBookEntry(ph);
                break;
            case 'D' : DisplayPhoneBookEntry(ph);
                break;
            default : break;
        }
    } while (choice == 'A' || choice == 'D');
    
    
    return 0;
}
