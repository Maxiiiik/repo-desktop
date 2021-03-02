#include <iostream>
#include <string>

//one more nice code block
using namespace std;


int main(int argc, char* argv[])
{
	for (size_t i = 0; i < argc; i++)
	{

		if (strcmp(argv[i], "-h") == 0)
		{
			cout << "This program WORK" << endl;
				return 0;
		}
	}
    string str;
    int numwrds = 0;
    cout << "Enter the sentence : ";
    getline(cin, str);
    for (size_t i = 0; i <= str[i]; i++)
    {
        if (str[i] == ' ')
            numwrds++;
    }
    cout << "Total words = " << numwrds + 1;





    cout << endl;
    system("pause");
    return 0;
}