#include <iostream>
#include <string>

//one more nice code block
using namespace std;


int main(int argc, char* argv[])
{
	char arr[100];
	int spacecounter = 1;
	for (size_t i = 0; i < argc; i++)
	{
		if (strcmp(argv[i], "-c") == 0)
		{
			strcpy_s(arr, argv[i + 1]);
			for (size_t j = i + 2; j < argc; j++)
			{
				spacecounter++;
				strcat_s(arr, " ");
				strcat_s(arr, argv[j]);
			}
			cout << "str: " << arr << endl;
			cout << "Number of words: " << spacecounter << endl;
			return 0;
		}
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