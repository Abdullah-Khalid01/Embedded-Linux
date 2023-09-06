#include <iostream>
#include <variant>
#include <string>

/* Variable to indicate the place of the new user. It helped me in retrieving data and delete users*/
int users = 0;

void DisplayMainMenu(void)
{
    std::cout<< " *************************************************************************************************************"<<std::endl;
    std::cout<<"* This Adress Book Can Hold up to 100 Users only"<< std::endl;
    std::cout << "|1- List       | Lists all users\n" << "|2- Add        | Adds an user\n" << "|3- Delete     | Deletes an user\n" << "|4- Delete All | Delete all users\n" << "|5- Search     | Search for a user\n" << "|6- Display    | Show Main Menu\n" << "|7- Close      | Close The address book\n" << std::endl;

    std::cout<< " *************************************************************************************************************"<<std::endl;
}

std::variant<int, std::string>* CreatesNewUser(std::string Name, int ID)
{
    /*if thtere is an available space for a new user.*/
    if(users < 100 && users >=0)
    {
        /* Allocate space for 2 new variant variables which will hold the name and ID of the user. */
        std::variant<int, std::string> *myVariant= new std::variant<int, std::string>[2];
        
         /* Assign values */
         myVariant[0]=ID;
         myVariant[1]=Name;
         
        //  std::variant<int,std::string>* test = new (std::variant<int,std::string>[2]);

        //  delete[] test;
         /* Increase the (users) variable to indicate the number of users in the Address Book.*/
         users++;

         /* Return the address of the allocated data to be stored in the data array which represents the database. */
         return myVariant;
    }
    /* if the users number is >= 100 this means no available space for a new user. */
    else
    {
        std::cout<< "Adress book is full";
    }
    
}

void PrintData(std::variant<int, std::string>* data[])
{
    /* If there is users in the database start printing them. */
    if(users>0)
    {
        std::cout<< "**************************************************************************************************************\n"<<std::endl;
        for(int i=0; i<users;i++)
        {
            /* [i][1] --> holds the name*/
            std::cout<< "User " << i << " Name: " << std::get<std::string>(data[i][1])<<std::endl;

            /* [][0] --> holds the ID*/
            std::cout<< "User " << i << " ID  : " << std::get<int>(data[i][0])<<std::endl;

        }
        std::cout<< "\n**************************************************************************************************************\n"<<std::endl;
    }

    /* if users is equal to zero this means no data has been inserted, yet. */
    else
    {
        std::cout<< "Address Book is Empty\n" << std::endl;
    }
}

void Search(std::variant<int, std::string>* data[], uint8_t method)
{   
    /* users holds the index of the available space for the new user, but (user-1) indicates the slot of the last inserted user.*/
    int i = users-1;
    
    /* method == 1 ----------> search by name. */
    if      (method == '1')
    {
        /* get the name of the user to search for it. */
        std::string name;
        std::cout << "Which Name am I looking for? \n";

        std::cin >> name;

        /* loop through the database to get the index of the required user if exists. */
        while (i >= 0 && name != (std::get<std::string>(data[i][1]) ))
        {
            i--;
        }

        /* If the user exists. */
        if(i>=0)
        {
            /* Print the relative data of the user. */
            std::cout<< "**************************************************************************************************************\n"<<std::endl;

            std::cout<<"Founded Data:\n";

            std::cout<< "User " << i << " Name: " << std::get<std::string>(data[i][1])<<std::endl;

            std::cout<< "User " << i << " ID  : " << std::get<int>(data[i][0])<<std::endl;

            std::cout<< "**************************************************************************************************************\n"<<std::endl;
        }

        /* if the user is not found in the database, indicate the user*/
        else
        {
            std::cout<<"NOT Founded --|--:\n";
        }
    }

    /* method == 1 ----------> search by ID. */
    else if (method == '2')
    {

        /* get the ID of the user to search for it. */
        int id;

        std::cout << "Which ID am I looking for? \n";

        std::cin >> id;

        /* loop through the database to get the index of the required user if exists. */
        while (i >= 0 && id != (std::get<int>(data[i][0]) ))
        {
            i--;
        }
        
        /* If the user exists. */
        if(i>=0)
        {
            /* Print the relative data of the user. */
            std::cout<< "**************************************************************************************************************\n"<<std::endl;

            std::cout<<"Founded Data:\n";

            std::cout<< "User " << i << " Name: " << std::get<std::string>(data[i][1])<<std::endl;

            std::cout<< "User " << i << " ID  : " << std::get<int>(data[i][0])<<std::endl;

            std::cout<< "**************************************************************************************************************\n"<<std::endl;
        }
        /* if the user is not found in the database, indicate the user*/
        else
        {
            std::cout<<"NOT Founded --|--:\n";
        }

    }

    /* if the method is neither 1 nor 2 indicate the user that he entered wrong choice. */
    else
    {
        std::cout<<"Wrong Choice!!\n"<<std::endl;
    }
    

}

int main(int argc, char const *argv[])
{
    /* This is the array which contains the address of each user's data. */
    std::variant<int, std::string>* data[100];
    
    /* Represents the required operation */
    uint8_t option = 0;

    /* Prints the main menu options */
    DisplayMainMenu();

    while (1)
    {
        /* Get the required operation from the user */
        std::cout << "Select Required Operation: ";

        std::cin >> option;

        /* Print data */
        if(option == '1')
        {
            PrintData(data);
        }

        /* Insert new data */
        else if(option == '2')
        {   
            /* variables to hold data which are username and ID*/
            std::string name ;
            int id;
            std::cout<< "**************************************************************************************************************\n"<<std::endl;

            std::cout << "Enter User Name: ";

            std::cin >> name;

            std::cout << "Enter User ID  : ";

            std::cin >> id;

            std::cout<< "**************************************************************************************************************\n"<<std::endl;

            std::cout << "\n\n ";

            /* Call the (CreatesNewUser) function which is responsible for allocating memory for the new user data. */
            data[users] = CreatesNewUser(name,id);   
        }

        /* Delete Specific User using his ID*/
        else if(option == '3')
        {
            /* (-1) to get the actual number of existing users. */
            int i = users-1;

            /* Get the ID of the user to be delete*/
            int id;
            std::cout<< "**************************************************************************************************************\n"<<std::endl;

            std::cout << "Enter the ID of the required user to be deleted: ";

            std::cin >> id;

            /* Loop through the data until the required ID is found or the data is exhausted.*/
            while (i >= 0 && id != (std::get<int>(data[i][0]) ))
            {
                 i--;
            }
            
            /* if i >= 0 this indicates that a relative data to the ID has been found*/
            if(i >= 0)
            {
                /* Shift the database to the left. This is essential to remove any gap in the database */
                for(int iterator=i; iterator < users-1; iterator++)
                {
                    data[i][0] = data[i+1][0];
                    data[i][1] = data[i+1][1];
                }

                /*Decrease the number of the available users in the database. */
                users--;

                delete[] (data[users]);

                std::cout << "Deleted Succefully\n";
            }
            /* if no relative data has been found. */
            else
            {
                std::cout<<"NOT Founded --|--:\n";
            }

            std::cout<< "**************************************************************************************************************\n"<<std::endl;

        }
        /* Delete the whole data base by re-initialize (users) variable to zero*/
        else if(option == '4')
        {
            int i =users-1;
            uint8_t confirm =0;
            std::cout<< "**************************************************************************************************************\n"<<std::endl;

            std::cout << "Are you sure you want to delete this Adress Book? (y to confirm): ";

            std::cin >> confirm;

            if(confirm == 'y')
            {
                for(i; i>=0; i--)
                {
                    delete[] (data[i]);
                }
                std::cout << "Deleted Succefully\n";
                users = 0;
            }
            else
            {
                std::cout << "Deleting process is aborted\n";
            }

            std::cout<< "**************************************************************************************************************\n"<<std::endl;
        }

        /* Search in the array for a specific user using two methods (ID - Name). */
        else if(option == '5')
        {

            uint8_t SearchMethod = 0;
            std::cout << "Enter 1 to Search By Name Or 2 to search by ID: ";

            std::cin>>SearchMethod;

            Search(data , SearchMethod);

        }

        /* To display the main menu options. */
        else if(option == '6')
        {
            DisplayMainMenu();
        }

        /* To exit from the progeam.*/
        else if(option == '7')
        {
            break;
        }

    }

    return 0;
}
