# How to Run this Code:

- This project is written in **C++**, so please ensure that you have a C++ compiler installed.
- This project utilizes features from the **C++17** standard, specifically `std::optional`. Please make sure that your compiler supports C++17 or higher.
- It was written using CLion, so if Clion or an IDE such as Visual Studio code is installed, you can simply download the project and build/run through the IDE.
	- If compiling through the command line, please compile with the accurate version flag: `g++ -std=c++17 main.cpp -o my_program`
 	- Go to `CMakeLists.txt` and ensure that it contains the following line:

  ```cmake
  set(CMAKE_CXX_STANDARD 17) 


- Please be sure to download "functions.h", as it contains the functions required for this project. Additionally, be sure to not rename "functions.h," as main.cpp requires it.

## Structure of the Files:

The repo consists of two files necessary for the code to run:
  1. main.cpp
  2. functions.h

main.cpp currently has code in it to run the programs. It follows the sample provied in the instructions (Fig. 2), but since some of the commands returns null (nullptr) or throws an error, **the entire main cannot be ran as is.** 
It *will* throw exceptions. Please feel free to adjust the main accordingly to test different features.

Additionally, the instructions provide directions to return, not print, so there will be little insight given through the command line feedback.

---

# Notes for making this an Official Assignment:

### Personal recommendations for integrating this assignment into the official coursework:

- **Clarify error handling expectations:** Be more specific on what sort of error/exception to throw.
  
- **Streamline instructions:** Organizing the instructions more like standard lab documentation. This would be better organized, and also allow the requirements and expectations to be better outlined and understood by students.
	- As it is right now, it is a bit cramped and just a series of bullet points that aren't particularly in any order. 

- **Test cases:** As some functions and edgecases can return null or throw exceptions, perhaps providing or requiring the student to handle developed test cases would be more useful and both user and student-friendly.
	- This would *also* allow for easier grading for the TA's, as they would be able to just run the testcases (either student-made, or run the code through their own) and grade accordingly.
	- Or, perhaps a more detailed skeleton code for testing every student to implement for testing (and thus ta's just have to run the code and skim the logic/syntax).

- **Integrate print statements:** This is useful for debugging, but also to allow the user to understand what is happening, as return statements are essential to the code, but not inherently seen by the user.
	- I used this in debugging, where I would print "done" or "database not found" and such to ensure my code was working properly.

