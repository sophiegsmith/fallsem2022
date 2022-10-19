//text and binary files notes
//^ this is a class

using namespace std;

//function protoype
//fstream in formal parameter
bool openFile(fstream& file, string name); //pass by reference
void showFile(fstream& file);

//main function
int main()
{
    //declaring variables
    fstream file;
    //string name;
    //string namea = "notes10b.txt";
    //const int ROW = 3;
    //const int COL = 3;

   //int num[ROW][COL] = {1,2,3,4,5,6,7,8,9};

    if(openFile(file,  "notes10b.txt"))
    {
        cout << "file opened.";
        cout << "reading from file";
        
        showFile(file);

        file.close();

        cout << "done.";
    }
    else
    {
        cout << "file didnt open.";
    }

    /*
    file.open("notes10a.txt", ios::out);
    for(int i = 0; i < ROW;i++)
    {
        for(int j=0; j < COL; j++)
        {
            file << setw(8) << num[i][j];
        }
        file << endl;
    }
    file.close();
    */

    //writing to the file
    //dot operator is part of calling a function
    //lets put another flag for in
    
    /*
    file.open("notes10.txt", ios::out);
    cout << "writing to the file. \n";

    //add setw and iomanip on top, can do anything with the formatting
    file << "Bob\n";
    file << "Tom\n";
    file << "Lee\n";
    file << "Lane\n";
    //dont need get line

    //before we close

    while(file.eof())
    {
        file>>name;
        cout << name; 
    }
    error when away because of this
    */

    //opening and reading the file cannot happen 
 
    //previously defined function -> public member function of a class, and uses dot operator to call a function
    /*
    file.close();

    file.open("notes10.txt", ios::in);

    //fail state should go here
    //get line and file: getline(file, name)
    while(file.eof())
    {
        //file>>name;
        getline(file, name);
        cout << name; 
        file.close();
    }
     file.close();

    cout << "done!";
    
*/

    return 0;
}

bool openFile(fstream& file, string name) //fstream file, passed by reference, namea is assigned "notes10b.txt"
{
    file.open(name, ios::in); //no double quotes

    if(file.fail())
    {
        return false;
    }
    else
    {
        return true;
    }
}

void showFile(fstream& file)
{
    //create a variable to store
    string words;
    //as long as it has something to read
    while(getline(file, words))
    {
        cout << words << endl << endl; //returning true or false -> returning 1 or 0
    }
}