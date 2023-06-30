#include <iostream> 
#include <fstream>  
using namespace std;

int main(){
  char str[80], c, d, ans; 
  ofstream outfl("try.txt");
  
  /* read a string from keyboard and write to a file.  */
  do{	
    cout<<"please give the string : ";  
    gets(str);
    outfl<<str;
    cout <<"do you want to write more...<y/n> : ";
    ans=getch();
  }while(ans=='y');  

  outfl<<'\0'; 
  outfl.close();

  // copying file content using get() and put() functions 
  Ifstream infl("try.txt");
  ofstream out("cod.dat");
     
  cout <<"reading from created file and copying to other file\n";
  infl.get(c);  
  do{
      d=c+1;
      cout<<c<<d<<'\n';  
      out.put(d);
      infl.get(c);
  }while (c!='\0');  
  
  out<<'\0';  
     
  infl.close();  
  out.close();
}
     
