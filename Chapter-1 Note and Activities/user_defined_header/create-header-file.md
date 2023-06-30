## Header Files in C/C++ and its uses

In C/C++ language, header files contain a set of predefined standard library functions. The **.h** is the extension of the header files in C/C++ and we request to use a header file in our program by including it 
with the C/C++ preprocessing directive **“#include”**. These preprocessor directives are used to instruct the compiler that these files need to be processed before compilation.
C/C++ language has numerous libraries that include predefined functions to make programming easier. In C++, all the header files may or may not end with the “.h” extension.

### 📖 Syntax of Header Files in C/C++

We can include header files in C/C++ by using one of the given two syntaxes whether it is a pre-defined or user-defined header file.

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/e7ac2389-7990-44e6-955f-b4bee688e9aa)

The **“#include”** preprocessor directs the compiler that the header file needs to be processed before compilation and includes all the necessary data types and function definitions.

**Types of Header Files**

There are two types of header files in C and C++:

- Standard / Pre-existing header files
- Non-Standard / User-defined header files

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/543adf79-5fab-42ea-a08b-4338adb9cfff)

### 📖 Create your own Header File in C/C++

Instead of writing a large and complex code, we can create our own header files and include them in our program to use whenever we want. It enhances code functionality and readability. Below are the steps to create our own header file:

**Step 1:** Write your own C/C++ code and save that file with the “.h” extension. Below is the illustration of the header file:

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/62d0d7b5-7098-473d-9050-c5f62d047d1e)

**Step 2:** Include your header file with “#include” in your C/C++ program as shown below: 

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/58f14eb4-38ad-40ca-94cd-b6191b0a7eb9)

### 📖 Including Multiple Header Files

You can use various header files in a program. When a header file is included twice within a program, the compiler processes the contents of that header file twice. This leads to an error in the program. To eliminate this error, conditional preprocessor directives are used.

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/74ba2c80-41b4-41e7-af76-06b233b2ac95)

This construct is called wrapper **“#ifndef”**. When the header is included again, the conditional will become false, because **HEADER_FILE_NAME** is defined. The preprocessor will skip over the entire file contents, and the compiler will not see it twice.

**Example:**

Let's save the below code file with the multiply.h name.

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/894eff9e-7d5d-4edb-930a-0c88ff0cd3b1)

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/3742d584-357b-4136-bd7e-67a525fa4c8c)


Sometimes it’s essential to include several diverse header files based on the requirements of the program. For this, multiple conditionals are used.

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/10b12f00-0f6d-4ac4-af86-a6ffc7943728)




