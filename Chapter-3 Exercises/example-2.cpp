// Create a sequential file.  
#include <iostream> 
#include <fstream>  
using namespace std;

int main()
{
  ifstream inClientFile; // creating ifstream object
  inClientFile.open( "clients.txt", ios::in);  	// opening a file
  
  // check if unable to create file
  if ( !inClientFile.is_open() ) {	
    cout << "File could not be opened" << endl;  
    exit( 1 );
  }

  int account;
  char name[ 30 ];
  double balance;

  // read account, name and balance from file and display on screen
  cout <<"The User bank account details\n";
  cout<<"Account \t Name\t  Balance\n ";

  while (inClientFile.eof() == false) 
  {
    inClientFile >> account >> name >> balance;
    cout<< account << ‘\t' << name << ‘\t' << balance<< endl;  
  }

  inClientFile.close();	 // close ifstream file

return 0; 
}
