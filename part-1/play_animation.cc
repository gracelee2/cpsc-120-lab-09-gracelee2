
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

using namespace std;

/// Entry point to the read_from_file program
/// \remark Must have 1 argument. The argument is a path to a file. In the
/// simpliest case, it can be the name of a file in the same directory
/// as the program.
int main(int argc, char const* argv[]) {
  // TODO: Using argv and argc, create a vector<string> args which contains the
  // command line arguments. Make sure there are at least two command line
  // arguments before continuing. If there are fewer than two, print an error
  // message and exit with an error code of 1.
  // TODO: Declare a string variable named input_file_name. Assign the first
  // argument from the command line arguments to this variable. Make sure to
  // catch any errors and print an error message if an error occurs.

  // TODO: Declare an ifstream variable named input_file_stream and initialize
  // it with the variable input_file_name. Next, verify that the file was
  // successfully opened. If it was not successfully opened, print an error
  // message and exit with an error code of 1.

  // TODO: Declare a char variable named letter and initialize it to the value
  // 0. This is one of the few times in this class where we will use a char
  // type. In order to make the animation work, we must copy a letter out of the
  // input file into a variable, then print the letter to the terminal. We
  // repeat this process until we reach the end of the file. To mimic the
  // performance of a terminal from the 1980s and 1990s, we cause the program to
  // stop for 10,000 microseconds after every iteration of the loop. An example
  // is provided in the README.

  // TODO: We're done reading the file because we got to the end of the file or
  // there was an error condition. Check to see if there was an error condition
  // similar to previous labs working with input file streams. If there was an
  // error, print a message and exit with an error code of 1. Otherwise, print a
  // message saying that the end of the file was reached successfully.

  // TODO: Close the file stream

  return 0;
}
