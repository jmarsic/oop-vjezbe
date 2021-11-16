#include <iostream>
#include <vector>

using namespace std;

void u(vector<int>& vec)
{
	int del, i;
	bool check;

	cout << "Enter element to remove: " << endl;
	cin >> del;

	for (i = 0; i < vec.size(); i++)
	{
		if (vec[i] == del)
		{
			vec.erase(vec.begin() + i);
			break;
		}
	}
}

int main()
{
	int i = 0, num, n;
	vector<int> vec;

	cout << "Enter number of elements: " << endl;
	cin >> n;

	cout << "Enter " << n << " elements: " << endl;

	while (i < n)
	{
		cin >> num;
		vec.push_back(num);
		i++;
	}

	u(vec);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	return 0;
}
