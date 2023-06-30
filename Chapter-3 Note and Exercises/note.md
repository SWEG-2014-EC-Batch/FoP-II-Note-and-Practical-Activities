📗 Table of Contents

- [File Handling (Management)](#file_handling)
- [C++ Stream Class Hierarchy](#stream_classes)
- [Types of File](#file_types)
- [File Manipulation Process](#file_manipulation)
- [File modes/offsets](#file_modess)
- [File Random Access](#random_access)


# 📖 Contents

### 🖥️ File Handling (Management) <a name="file_handling"></a>

- File handling is a mechanism to store the output of a program in a file and perform various operations on it.
- The flow of data between file and program is referred to as File stream.
   - **File Input Stream** – reads data from a disk  file to the program
   - **File output Stream** – writes data to the disk file from the program
     
![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Note-and-Practical-Activities/assets/73167960/1a34ba76-bb87-4d0c-998b-dcf596d5cb62)


### 🖥️ C++ Stream Class Hierarchy <a name="stream_classes"></a>

- Each file stream is associated with a particular class, which contains member functions and definitions for dealing with a particular kind of data flow.
- The I/O system of C++ provides the following stream classes which have access to standard I/O stream objects and file functions.

  ![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Note-and-Practical-Activities/assets/73167960/67e21f95-6b42-4db2-8877-d25398b0b41d)

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Note-and-Practical-Activities/assets/73167960/f8db3016-a736-42e3-a29a-cbafd488abb5)


### 🖥️ Types of File <a name="file_types"></a>

- There are two types of files in which the streams are linked, namely **Text File** and **Binary File**.

 ### Text File
- A sequence of readable characters separated by space and newline characters.
- Character translations may occur as required by the host environment
- There may not be a one-to-one relationship between the characters that are written (or read) and those on the external device. 

### Binary File
- A sequence of bytes with a one-to-one correspondence to those in the external device.
   - _The number of bytes written (or read) is the same as the number on the external device_
- No character translations required
   - _Data stored to disk in the same  form in which it is represented in main  memory_
   - _As a result, saving data in binary format is faster and takes less space_
- Human unreadable
   - _If you ever try to edit a binary file for example containing numbers you will see that the numbers  appear as nonsense characters_
   - _Do not normally use  anything to separate the data into lines_
- Binary format data can not easily be transferred from one computer to another due to variations in the internal representation of the data from computer to computer.

  ![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Note-and-Practical-Activities/assets/73167960/e819eb7b-df38-4f72-af43-0a4ce70175f9)


### 🖥️ File Manipulation Process <a name="file_manipulation"></a>

- Before actually start using and manipulate files, it is important to discuss the steps to be followed in order to process files.
- Here are the steps that need to be followed in order to perform successful file operations through your program
   - **_Step 1: Declaration of the file stream object_**
   - **_Step 2: Opening a file (attach file stream with a specific file)_**
   - **_Step 3: Check for the successful opening of the file (optional)_**
   - **_Step 4: Perform File Read/Write Operations_**
   - **_Step 5: Closing a file_**
   
- To perform file read and write (I/O), it is mandatory to include the header file **fstream.h** which defines several classes and functions.

### (a) Declaration of File Stream Object 

- In order to process files through the program, a logical file must be created on the RAM.
- This logical file is nothing but a file data type.
- **Syntax:**
  
      File_Stream File_Stream_Object;
  - Where the **“File_Stream”** refers to either of the three file stream classes **ifstream, ofstream, fstream**
  - On the other hand the **“File_Stream_Object”** is referring to any valid identifier

- **Example:**

        fstream file; 	//file stream object both for reading and writing

### (b) Opening a file

- In order to perform read and write operations on the file through a program, the file should be opened.
- Opening a file attaches the stream link to a specific file.

- **Syntax:**
  
      File_Stream_Object.Open(“FileName”, File modes) ; 
  - **“File Name”** - refers to the name of the file on which we are going to perform file operations.
  - It should be provided with it’s full path (where the file is located) and file extension
  - **“File modes”** – specify the for what purpose the file is opened and it can be a single mode or multiple file modes. 

- **Example:**

        fstream file; 	//file stream object both for reading and writing

### Note
- the File stream object creation and opening of a file can be merged and performed in a single statement

        fstream file (“myfile.txt”,  ios::in | ios::out) //file can be opened while declaring the stream object like this
- If the source code file and the file you are operating are raised in the same folder the “file name” is enough to open the file.
- Otherwise you should provide the proper path of the file. 


### (c) Check for the success of file opening 

- When opening a file, especially opening a file for reading, is it critical to test whether the open operation succeeded or not.
- There are several alternatives available to check for the success of file opening
  
**Alternative 1:** comparing stream object with NULL

        fstream file(“sales.txt”);
        if (file != NULL) {
           // perform file read/write
        } else {
           //Through error
        }
  
**Alternative 2:** Check if the stream object is not empty

        fstream file(“sales.txt”);
        if (file) {
           // perform file read/write
        } else {
           //Through error
        }

**Alternative 3:** using is_open() file state function 

        fstream file(“sales.txt”);
        if (file.is_open()) {
           // perform file read/write
        } else {
           //Through error
        }

### (d) File Read/Write Operations 

**(I) Write to a file**

- The file should open in writing mode **(ios::out)**
- The following three alternatives are available to write to file

**Alternative 1:** Using the **_Output stream object_** in combination with **_<< (insertion operator)_**
- **Example**
  
        ofstream Out;
        Out<<variable;
        out<<“Hello, World);
  
**Alternative 2:** Using the **write()** function
- **Syntax:**
  
        streamObject.write(string data, size)

- **Example:**
  
       ifstream Out;
       Out.write (“Hello, World”, 10);

**Alternative 3:** Using the **put()** function which used to write one character only
- **Example:**
  
       ifstream Out;
       Out.put(character);
      
**(II) Read from a file**

- The file should open in reading mode **(ios::in)**
- The following three alternatives are available to read data from a file

**Alternative 1:** Using the **_Input stream object_** in combination with **_>> (extraction operator)_**
- **Example**
  
        ifstream Inf;
        Inf>>variable;
  
**Alternative 2:** Using the **read()** function
- **Syntax:**
  
        streamObject.read(string data, size)

- **Example:**
  
       ifstream Inf;
       Inf.read (“Hello, World”, 10);

**Alternative 3:** Using the **get() or getline()** function which is used to read one character and one line string respectively
- **Example:**
  
       ifstream Inf;
       inf.get(character); or
       inf.get(string data, size); or
       inf.getline(string data, size);

### Note

- **read()** and **write()** functions are binary functions used to write or read an object or record (sequence of bytes) to/from a binary file mainly.
- To write to and/or read from a binary, the file should open in a binary file mode **(ios::binary)**

### (d) Closing a file 

**Why we need to close a file?**
- To make the stream object to be free and can be used with more than one file.  
- To avoid a logical error that will occur because of not closing the opened file
- How to close a file?
   - using either **close()**  or **clear()** functions

- **Syntax:**
  
       stream-object.close();
           or
       stream-object.clear()

- **Example:**

        fstream myfile;
       myfile.close();
           or
       myfile.clear();
    
- In both cases, the file that opened using the “myfile” file stream will be closed 


### 🖥️ File modes/offsets <a name="file_modess"></a>

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Note-and-Practical-Activities/assets/73167960/d55b2021-9441-45b2-b190-6f3c13f49b80)

### 🖥️ File Random Access <a name="random_access"></a>

- Basically, there are two types of file access: sequential and random

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Note-and-Practical-Activities/assets/73167960/694eaeda-4b6b-4d53-ab33-55e97591ae2e)

### File Pointers

- Each file object has two integer values  associated with it
  
  - **_get pointer_**
   - **_put pointer_**

- The values of the pointers specify the byte number in the  file where reading or writing will take  place.
- By default
  
  - **_reading pointer_** is set at the **_beginning_**
   - **_writing pointer_** is set at the **_end_** (when the file open is opened in ios::app or ios::ate mode)

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Note-and-Practical-Activities/assets/73167960/4271c72a-fe9e-49e3-9856-64529717fff5)

### Random Access 

- Allow you to read from and write to an arbitrary location in the file.
- The **seekg()** and **tellg()** functions allow you to set and examine the get pointer.
- The **seekp()** and **tellp()** functions allow you to set and examine the put pointer.

**(1) tellg() and tellp()**

- Does not has any parameter
- Used to get the current file pointer position
- **_tellg()_** – returns the current pointer position for reading
- **_tellp()_** – returns the current pointer position for writing

**(2) seekg() and seekp()**

- Used to set (specify) the file pointer position for reading and writing respectively
- Syntax:
  
        stream-object.seekg(size in byte, offset)
        stream-object.seekp(size in byte, offset)

- Example

        fstream inf;
   	    inf.open(“myfile.txt”, ios::in | ios::out);
   	    inf.seekg(24, ios::beg);    //move get pointer 24 bytes from beginning 
   	    inf.seekp(-8, ios::end);   //move put pointer 8 bytes from end of file 
   	    inf.seekg(4, ios::curr);  //move get pointer 4 bytes from current position

