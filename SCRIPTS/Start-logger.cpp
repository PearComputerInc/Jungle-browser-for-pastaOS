#include <iostream>
#include <fstream>

using std::cout; using std::fstream;
using std::endl; using std::string;

int main()
{
    string text("Jungle.app was opened.");
    string filename("Jungle-log.txt");
    fstream file;

    file.open(filename, std::ios_base::app);
    if (file.is_open())
        file.write(text.data(), text.size());
    cout << "Added new item to log." << endl;

    return 0;
}