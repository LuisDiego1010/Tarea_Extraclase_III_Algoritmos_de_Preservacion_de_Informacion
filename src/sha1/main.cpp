#include <iostream>
#include "sha1.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout<<"This is the fourth extra-class assignment of the course CE2103 of Tecnologico de Costa Rica, \nWhich consists of investigating and implementing the SHA1 algorithm for information preservation. \nThe example provided is a 100% public domain code which exemplifies how SHA1 generates a completely different hexadecimal code when making changes to an inserted word.\n"<<endl;
    bool loop = true;
    while (loop) {
        cout << "\n MAIN MENU" << endl << "  1. Insert word \n  2. Exit \n" << endl;
        int option;
        cout << "\nEnter an option:";
        cin >> option;
        switch (option) {
            case 1:
                char word[15];
                cout << "Enter the word you want to generate a UNIQUE hexadecimal code:";
                scanf("%s", word);
                cout <<"\nThe word " << word <<" in hexadecimal unique code is " <<sha1(word) << endl;
                cout<<"Please make a change to the above word to generate another single hexadecimal"<<endl;
                break;
            case 2:
                cout << "\nThanks for use SHA1 PROGRAM\n";
                loop = false;
                break;

            default:
                cout << "\nOption is not in range. Please enter a valid option\n";

                return 0;
        }
    }
}