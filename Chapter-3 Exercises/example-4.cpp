#include <iostream> 
#include <fstream>  
using namespace std;

// declaring student structure
struct Student{
    int roll;
    char name[25];
    float marks;
  } stud;

// reading student details from user
void getdata(){
  cout<<"\n\nEnter Roll : ";
  cin>>stud.roll;
  cout<<"\nEnter Name : ";
  cin>>stud.name;
  cout<<"\nEnter Marks : ";
  cin>>stud.marks;
}

// writing student details to file
void AddRecord(){
  fstream outf;
  outf.open("Student.dat",ios::app|ios::binary);

  getdata();
  outf.write( (char *) &stud, sizeof(stud) );
  outf.close();
}

int main()
{	
  char ch='n';
  do{
    AddRecord();
    cout<<"\nwant to add more (y/n) : ";
    get(ch);
  } while(ch=='y' || ch=='Y');
  
  cout<<"\nData written successfully...";

  return 0;
}

