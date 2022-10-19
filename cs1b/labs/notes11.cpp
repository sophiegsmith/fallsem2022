//advanced file operations part 2 --> working with binary file
//read book on binary file
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    //declare varaibles
    char ch;

    fstream file("notes11.txt", ios::in);

    file.seekg(5L, ios::beg);

    file.get(ch);

    cout << ch << endl << endl;

    file.seekg(6L, ios::end);

    file.get(ch);

    cout << ch << endl << endl;

    //it will get the letter 5 spaces in from the end

    file.seekg(0L, ios::cur);

    file.get(ch);

    cout << ch << endl << endl;
    
    return 0;
}


//so far, have learned about text file
//text vs binary file: 
//text file contains ascii characters, bytes are read as ascii character, length is not fixed
//binary contains strings of bits, should have fixed length
//you have write and read, first paramenter of write() function is assigned to a char, anything except char has to be typecast