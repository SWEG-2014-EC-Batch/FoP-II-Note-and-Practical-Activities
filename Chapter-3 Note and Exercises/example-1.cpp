// Create a sequential file.  
#include <iostream> 
#include <fstream>  // including file stream
using namespace std;

int main(){
 ofstream outClientFile( "clients.txt", ios::out ); 	 //creating ofstream object and opening a file

// check if unable to create file
if (!outClientFile ) {	
   cout << "File could not be opened" << endl;  
   exit( 1 );
}

int account;
char name[ 30 ], ch=‘y’;  
double balance;

// read account, name and balance from user with cin, then place in file  
cout << "Enter the account, name, and balance separate by space." << endl;
cout<< "Enter \’N\’ to end input.\n? ";
while (ch == ‘y’) 
{
   cin >> account >> name >> balance;
   outClientFile << account << ' ' << name << ' ' << balance<< endl;  
    cout << "? ";
     cin>>ch;
} 

outClientFile.close();	 // // close ofstream file

return 0; 
} 
