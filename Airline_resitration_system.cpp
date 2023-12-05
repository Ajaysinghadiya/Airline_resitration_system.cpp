#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainMenu();

class management
{
public:
    management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name, gender;
    int PhoneNo;
    int age;
    string add;
    static int CustomerId;
    char arr[100];

    void information()
    {
        cout << "\n Enter the Customer ID:";
        cin >> CustomerId;

        cout << "\n Enter the Customer Name:";
        getline(cin >> ws, name);

        cout << "\n Enter the age:";
        cin >> age;
        
        cout << "\n Enter Adress:";
        getline(cin >> ws, add);

        cout << "\n Enter the gender:";
        cin >> gender;

        cout << "\n Your details are saved with us\n";
        cin >> CustomerId;
    }
};

int Details ::CustomerId;
string Details ::name;
string Details ::gender;

class Resistration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europ"};

        for (int i = 0; i < 6; i++)
        {
            cout << (i + 1) << " Flight to " << flightN[i] << endl;
        }
        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press the number of the country of which you want to book the flight:";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "________________Welcome to Dubai Emirates________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-01-2022 8:00AM 10hrs Rs.14000" << endl;

            cout << "2. DUB - 678" << endl;
            cout << "\t09-01-2022 4:00AM 14hrs Rs.10000" << endl;

            cout << "3. DUB - 192" << endl;
            cout << "\t11-01-2022 10:00AM 9hrs Rs.22000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "\n You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 2)
            {
                charges = 10000;
                cout << "\n You has successfully booked the flight DUB - 678" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 3)
            {
                charges = 22000;
                cout << "\n You have successfully booked the flight DUB - 192" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }
            else
            {
                cout << "Invailid input, shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout << "________________Welcome to Canadian Airlines________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;
            cout << "1. CA - 122" << endl;
            cout << "\t08-01-2022 1:00AM 20hrs Rs.29000" << endl;

            cout << "2. CA - 119" << endl;
            cout << "\t09-01-2022 4:00PM 18hrs Rs.10000" << endl;

            cout << "3. CA - 234" << endl;
            cout << "\t11-01-2022 10:00AM 14hrs Rs.32000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 29000;
                cout << "\n You have successfully booked the flight CA - 122" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 2)
            {
                charges = 10000;
                cout << "\n You have successfully booked the flight CA - 119" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 3)
            {
                charges = 32000;
                cout << "\n You have successfully booked the flight CA - 234" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }
            else
            {
                cout << "Invailid input, shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 3:
        {
            cout << "________________Welcome to UK Airbase________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;
            cout << "1. UK - 788" << endl;
            cout << "\t08-01-2022 12:00AM 14hrs Rs.44000" << endl;

            // cout<<"2. DUB - 678"<<endl;
            // cout<<"\t09-01-2022 4:00AM 14hrs Rs.10000"<<endl;

            // cout<<"3. DUB - 192"<<endl;
            // cout<<"\t11-01-2022 10:00AM 9hrs Rs.22000"<<endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 44000;
                cout << "\n You have successfully booked the flight UK - 788" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            // else if(choice1 == 2){
            //     charges =10000;
            //     cout<<"\n You have successfully booked the flight DUB - 678"<<endl;
            //     cout<<"You can go back to menu and take the ticket "<<endl;
            // }

            // else if(choice1 == 3){
            //     charges =22000;
            //     cout<<"\n You have successfully booked the flight DUB - 192"<<endl;
            //     cout<<"You can go back to menu and take the ticket "<<endl;
            // }
            else
            {
                cout << "Invailid input, shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 4:
        {
            cout << "________________Welcome to US Airbase________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;
            cout << "1. US - 567" << endl;
            cout << "\t10-01-2022 8:00AM 12hrs Rs.15000" << endl;

            cout << "2. US - 878" << endl;
            cout << "\t12-01-2022 9:00AM 14hrs Rs.9000" << endl;

            cout << "3. US - 999" << endl;
            cout << "\t14-01-2022 10:00AM 9hrs Rs.22000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 15000;
                cout << "\n You have successfully booked the flight US - 567" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 2)
            {
                charges = 9000;
                cout << "\n You have successfully booked the flight US - 878" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 3)
            {
                charges = 22000;
                cout << "\n You have successfully booked the flight US - 999" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }
            else
            {
                cout << "Invailid input, shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 5:
        {
            cout << "________________Welcome to Austrailian Airlines________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;
            cout << "1. As - 698" << endl;
            cout << "\t18-01-2022 8:00AM 12hrs Rs.44000" << endl;

            cout << "2. As - 878" << endl;
            cout << "\t09-01-2022 4:00AM 13hrs Rs.25000" << endl;

            cout << "3. As - 292" << endl;
            cout << "\t11-01-2022 10:00AM 9hrs Rs.49000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 44000;
                cout << "\n You have successfully booked the flight As - 698" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 2)
            {
                charges = 25000;
                cout << "\n You have successfully booked the flight As - 878" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 3)
            {
                charges = 49000;
                cout << "\n You have successfully booked the flight As - 292" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }
            else
            {
                cout << "Invailid input, shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 6:
        {
            cout << "________________Welcome to Europian Airlines________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;
            cout << "1. EU - 898" << endl;
            cout << "\t08-01-2022 2:00AM 18hrs Rs.36000" << endl;

            cout << "2. EU - 222" << endl;
            cout << "\t09-01-2022 4:00AM 16hrs Rs.31000" << endl;

            cout << "3. EU - 767" << endl;
            cout << "\t11-01-2022 10:00AM 13hrs Rs.47000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 36000;
                cout << "\n You have successfully booked the flight EU - 898" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 2)
            {
                charges = 31000;
                cout << "\n You have successfully booked the flight EU - 222" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }

            else if (choice1 == 3)
            {
                charges = 47000;
                cout << "\n You have successfully booked the flight EU - 767" << endl;
                cout << "You can go back to menu and take the ticket " << endl;
            }
            else
            {
                cout << "Invailid input, shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        default:
        {
            cout << "Invailid input, shifting you to the main menu!" << endl;
            mainMenu();
            break;
        }
        }
    }
};

float Resistration ::charges;
int Resistration ::choice;

class Ticket : public Resistration, Details
{
public:
    void bill()
    {
        string designation = "";
        ofstream outf("records.txt");
        {
            outf << "____________XYZ Airlines_______________" << endl;
            outf << "____________Ticket_____________________" << endl;
            outf << "_______________________________________" << endl;

            outf << "Customer ID: " << Details::CustomerId << endl;
            outf << "Customer Name: " << Details::name << endl;
            outf << "Customer Gender: " << Details::gender << endl;
            outf << "\tDescription" << endl
                 << endl;

            if (Resistration::choice == 1)
            {
                designation = "Dubai";
            }

            else if (Resistration::choice == 2)
            {
                designation = "Canada";
            }

            else if (Resistration::choice == 3)
            {
                designation = "UK";
            }

            else if (Resistration::choice == 4)
            {
                designation = "USA";
            }

            else if (Resistration::choice == 5)
            {
                designation = "Australia";
            }

            else if (Resistration::choice == 6)
            {
                designation = "Europe";
            }

            outf << "Destination \t\t" << designation << endl;
            outf << "Flight cost :\t\t" << Resistration::charges << endl;
        }

        outf.close();
    }
    void displayBill()
    {
        ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                cout << "File error!!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t             XYZ Airlines  \n"
         << endl;
    cout << "\t____________Main Menu____________" << endl;

    cout << "\t____________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Flight Resistration        \t|" << endl;
    cout << "\t|\t Press 3 for Ticket ans Charges         \t|" << endl;
    cout << "\t|\t Press 4 to to Exit                     \t|" << endl;
    cout << "\t______________________________________________" << endl;

    cout << "Enter the Choice : ";
    cin >> lchoice;

    Details d;
    Resistration r;
    Ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "__________Customers__________\n"
             << endl;
        d.information();
        cout << "Press 1 to go back to Main Menu";
        cin >> back;
        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 2:
    {
        cout << "____________Book a flight using this system______________\n"<<endl;
        r.flights();
        break;
    }

    case 3:
    {
        cout << "_______GET YOUR TICKET_______\n"
             << endl;
        t.bill();

        cout << "Your ticket is printed, you can collect it \n"
             << endl;
        cout << "Press 1 to display your ticket";
        cin >> back;

        if (back == 1)
        {
            t.displayBill();
            cout << "Press any key to go back to mani menu:";
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 4:
    {
        cout << "\n\n\t_______Thank You______" << endl;
        break;
    }

    default:
    {
        cout << "Invailid input, Please try again! \n"
             << endl;
        mainMenu();
        break;
    }
    }
}

int main()
{

    management mnj;

    return 0;
}
