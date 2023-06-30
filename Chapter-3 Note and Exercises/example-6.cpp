/* C++ File Pointers and Random Access. This program demonstrates the concept of file pointers and random access */
#include <iostream> 
#include <fstream>  
#include <string.h>
using namespace std;

// declare a structure to store student information
struct Student{
  int roll;
  char name[25];
  float marks; 	
	char grade;
} stud1, stud;

// read student information from the user
void getData(){
  cout<<"Student Inof:\n";
  cout<<"Rollno: ";   
  cin>>stud1.rollno;
  cout<<"Name: ";    
  cin>>stud1.name;
  cout<<"Marks: ";   
  cin>>stud1.marks;
   
  float marks = stud1.marks;
  if(marks>=75)	{
    stud1.grade = 'A'; 
  }
  else if(marks>=60){
    stud1.grade = 'B'; 
  }
  else if(marks>=50){
    stud1.grade = 'C'; 
  }
   else if(marks>=40){
    stud1.grade = 'D'; 
  }
  else{	
    stud1.grade = 'F'; 
  }
} 
  
// return the roll number of the student
int getrno(){
  return stud1.rollno;
}

// display student information on the screen
void putdata(){
  cout<<"Rollno: "<<rollno;
  cout<<"\tName: "<<name<<"\n";
  cout<<"Marks: "<<marks;
  cout<<"\tGrade: "<<grade<<"\n";
}
        
// update student information 
void modify(){
  cout<<"Rollno: "<<rollno<<"\n";
  cout<<"Name: "<<name;
  cout<<"\tMarks: "<<marks<<"\n";
        
  cout<<"Enter new details.\n";
  char nam[20]=" ";
  float mks;
  cout<<"New name:(Enter '.' to retain z old): ";
  cin>>nam;
  cout<<"New marks:(Press -1 to retain z old):";
  cin>>mks;

  // retain old values if user enters '.'
  if(strcmp(nam, ".")!=0){
    strcpy(name, nam);	
  }
  
  if(mks != -1){ 
    stud1.marks = mks;
    if(stud1.marks>=75){
      stud1.grade = 'A';
    }
    else if(stud1.marks>=60){
      stud1.grade = 'B';
    }
    else if(marks>=50){
      stud1.grade = 'C';
    }
    else if(stud1.marks>=40){
      stud1.grade = 'D';
    }
    else { 
          grade = 'F';	
    }
  }
  
  int main()
  {
    fstream fio; // declare a file pointer
    fio.fio("marks.dat", ios::in | ios::out); // open file in read and write mode
    if(!fio){
      cout<<"Error in opening file..!!\n";
    }
    
    char ans='y';
    while(ans=='y' || ans=='Y'){
      getdata();
      fio.write((char *)&stud1, sizeof(stud1));
      cout<<"Record added to the file\n";
      cout<<"\nWant to enter more ? (y/n)..";
      cin>>ans;
    }
    
    // search and modify a record on the file 
    int rno;
    long pos;
    char found='f';

    cout<<"Enter rollno of student whose record is to be modified: ";
    cin>>rno;
        
    fio.seekg(0) // move the file pointer to the beginning of the file

    int size = sizeof(stud1);
    while(!fio.eof()) // while not end of file
    {
      pos = fio.tellg(); // get the current position of the file pointer
      fio.read((char *)&stud1, size); // read a record from the file
      
      if(getrno() == rno){
        modify();           // modify the record
        fio.seekg(pos);     // move the file pointer to the beginning of the record
        fio.write((char *)&stud1, size); // write the modified record to the file
        found = 't';
        break;
      }
    }
    
    if(found=='f'){
      cout<<"\nRecord not found in the file..!!\n";
      cout<<"Press any key to exit...\n";
      exit(2);
    }
          
    fio.seekg(0); // move the file pointer to the beginning of the file
    cout<<"Now the file contains:\n";
    while(!fio.eof())
    {
      fio.read((char *)&stud, size);
      stud.putdata();
    }
    fio.close();
  return 0;
}
                                             
