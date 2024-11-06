#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // nemusim pak neustale psat std::cout


vector<int> sectiVector(vector<int> a, vector<int> b);
vector<int> otocVector(vector<int> a);
vector<int> seradVector(vector<int> a);

void vypis(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << "\t";
	}
}

int main()
{
	vector<int> test = { 1,2,3,4,5,6,7};
	vector<int> test1 = { 1,2,3,4,5 };
	vector<int> toSort = { 7,4,6,1,5,3,2 };
	vector<int> result = sectiVector(test, test1);
	vector<int> reverse = otocVector(test);
	vypis(result);
	cout << endl;
	vypis(reverse);
	cout << endl;
	vector<int> sorted = seradVector(toSort);
	vypis(sorted);
}


vector<int> sectiVector(vector<int> a, vector<int> b)
{
	vector<int> result;
	int len = a.size();
	// podminkami zjistime jestli jsou vectory stejne dlouhe
	//pokud nejsou, pouzije se delka mensiho vectoru 
	if (a.size() > b.size())
	{
		len = b.size();
	}
	if (a.size() < b.size())
	{
		len = a.size();
	}
	//samotne scitani jednotlivych elementu 
	for (int i = 0; i < len; i++)
	{
		result.push_back(a.at(i) + b.at(i));
		//alternativni zapis
		//result.push_back(a[i] + b[i]);
	}
	return result;
}

vector<int> otocVector(vector<int> a)
{
	vector<int> result;
	int len = a.size() - 1;
	for (int i = len; i >= 0 ; i--)
	{
		result.push_back(a.at(i));
	}
	return result;
}


vector<int> seradVector(vector<int> a)
{
	int len = a.size() - 1; // delku vectoru snizime o 1 abychom se vyhli volani indexu ktery vector nema
							// tzn. abychom nereferovali index 7 kdyz vector konci indexem 6
	bool sortingInProgres = true;

	//bubble sort algorithm
	while (sortingInProgres)
	{
		bool sorted = true; // kontrolni promena, pokud nejsou prvky srovnane spravne prepise se na false a cyklus se znovu opakuje
		for (int i = 0; i < len; i++)
		{
			if (a.at(i) > a.at(i + 1))
			{
				sorted = false;
				int low = a.at(i + 1);
				int hi = a.at(i);
				a.at(i) = low;
				a.at(i + 1) = hi;
			}
		}
		if (sorted)
		{
			sortingInProgres = false;
		}
	}

	//selection sort algorithm

	/*int startIndex = 0;
	int len = a.size();
	bool sortingInProgres = true;
	while (sortingInProgres)
	{
		int min = a.at(startIndex);
		int indexOfMin = startIndex;
		for (int i = startIndex; i < len; i++)
		{
			if (a.at(i) < min)
			{
				min = a.at(i);
				indexOfMin = i;
			}
		}
		int start = a.at(startIndex);
		a.at(indexOfMin) = start;
		a.at(startIndex) = min;
		startIndex++;
		bool sorted = true;
		for (int i = 0; i < len-1; i++)
		{
			if (a.at(i) > a.at(i+1))
			{
				sorted = false;
			}
		}
		if (sorted)
		{
			sortingInProgres = false;
		}
	}*/
	return a;
}