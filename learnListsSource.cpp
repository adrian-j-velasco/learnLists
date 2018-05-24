#include <iostream>
#include <string>
#include <list>

using namespace std;

void die(const string & msg);

int main()
{
	list<string> shopItemNames;
	shopItemNames.push_back("Gloves");
	shopItemNames.push_front("Axes");
	shopItemNames.push_back("Kittens");
	shopItemNames.push_back("Swords");
	shopItemNames.push_back("Cars");
	shopItemNames.push_back("Kittens");

	list<string>::iterator it;
	for (it = shopItemNames.begin(); it != shopItemNames.end(); it++)
	{
		cout << *it << endl;	//	print out what it is pointing at
	}

	//	shopItemNames.remove("Kittens");	//	removes ALL Kittens

	for (it = shopItemNames.begin(); it != shopItemNames.end(); it++)
	{
		int count = 0;
		if (*it == "Kittens" && count == 0)
		{
			it = shopItemNames.erase(it);
			break;
		}
		cout << *it << endl;	//	print out what it is pointing at
	}

	for (it = shopItemNames.begin(); it != shopItemNames.end(); it++)
	{
		cout << *it << endl;	//	print out what it is pointing at
	}

	system("PAUSE");
	return 0;
}

void die(const string & msg)
{
	cerr << "Error: " << msg << endl;
	exit(EXIT_FAILURE);
}