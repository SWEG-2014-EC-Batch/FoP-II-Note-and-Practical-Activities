#include <iostream> 
#include <fstream>  
using namespace std;

// define the struct Student
struct Student{
  int roll;
  char name[25];
  float marks;
} stud;

// print the student details to console
void putData()
{
  cout<<"\n"<<stud.Roll;
  cout<<"\t"<<stud.Name;
  cout<<"\t"<<stud.Marks;
}

void read_file()
{
  fstream inf;
  inf.open("Student.dat", ios::in|ios::binary); // open file in binary read mode

  cout<<"\n\tRoll\tName\tMarks\n";

  inf.read( (char *) &Stu, sizeof(stud) ); // read first object from file

  while(inf != NULL){
    putData();  // print the object to console
    inf.read( (char *) &Stu, sizeof(stud) ); // read next object from file
  }
  inf.close();
}

int main() {
   read_file ();
}

