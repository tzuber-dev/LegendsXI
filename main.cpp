

#include <iostream>
#include <fstream>
#include <string>


using namespace  std;

// variables to save

string name;
string dateofbirth;
int age;
string flag;




int menugame() {

    int choice;

    std::cout<<"Welcome to Legends XI"<<"\n";

    std::cout<<"1. Create user"<<"\n";
    std::cout<<"2. Play quick match"<<"\n";
    std::cout<<"3. Credits"<<"\n";
    std::cout<<"4. About"<<"\n";
    std::cout<<"\n";

    std::cout<<"Enter a selection: "<<"\n";
    std::cin>>choice;


    // input validation


    if (choice == 1) {





        std::cout<<"Enter in details below for your avatar."<<"\n";
        std::cout<<"Name of avatar: "<<"\n";
        std::cin>>name;


        std::cout<<"Age of avatar: "<<"\n";
        std::cin>>age;

        std::cout<<"Country of avatar: "<<"\n";

        std::cin>>flag;





    } else {
        if (choice == 2) {
            std::cout<<"Coming soon";
        }
    };

};

void loadData() {
    ifstream inFile("savedata.txt");

    if (!inFile) {
        cout << "File could not be opened.\n";
        return;
    }

    getline(inFile, name);
    getline(inFile, dateofbirth);
    inFile >> age;
    inFile.ignore();
    getline(inFile, flag);

    inFile.close();
}










int main() {

    // functions initialization
     menugame();
    loadData();

}