#include <iostream>

using namespace std;

unsigned int my_strlen(const char * ptr)
{
	int i = 0;
	for (; i < 20; i++)
	{
		if (ptr[i] == '\0')
		{
			break;
		}
	}
	return i;
}

int my_strcmp(const char * ptr1, const char * ptr2)
{
	unsigned int ptr1_len = my_strlen(ptr1);
	unsigned int ptr2_len = my_strlen(ptr2);
	int i = 0;
	if (ptr1_len == ptr2_len)
	{
		for (; i < ptr1_len; i++)
		{
			if (ptr1[i] != ptr2[i])
			{
				break;
			}
		}
	}
	if (i == ptr1_len && i == ptr2_len)
	{
		return 0;
	}
	else if (ptr1_len < ptr2_len)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	const int len = 20;
	char array1[len] = { 0 };
	char array2[len] = { 0 };

	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(array1, len);
	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(array2, len);
	if (my_strcmp(array1, array2) == 0)
	{
		cout << "Die Texte sind identisch. Ergebnis my_strcmp(): " << my_strcmp(array1, array2) << endl;
	}
	else
	{
		cout << "Ergebnis my_strcmp(): " << my_strcmp(array1, array2) << endl;
	}
	system("PAUSE");
	return 0;
}