
#include <iostream>
using namespace std;
void Groups(string Str)
{
	int counter = 0;
	if (!Str.empty())
	{

		for (int i = 0; i < Str.length();i++)
		{
			if (counter == Str.length())
				break;
			for (int j = 0;j < Str.length();j++)
			{
				counter++;
				if (Str[i] == Str[j])
				{
					cout << Str[i];

				}
				else
				{
					cout << "\n";

					i = j;
					cout << Str[i];
				}



			}

		}
	}
	else
	{
		cout << "the string is empty";
	}
}


int main()
{
	Groups("absdef");
	cout << "\n ********************* \n";
	Groups("111223344aabb");
	cout << "\n ********************* \n";
	Groups("HHHHHHHH");



}

