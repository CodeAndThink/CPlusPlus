#include<vector>
#include<iostream>

using namespace std;

int main()
{
	vector<vector<string>> data;
	vector<string> array1 = {"1", "2", "3"};
	vector<string> array2 = {"A", "B", "c"};
	data = {array1, array2};
	for(const auto & combo : data)
	{
		for(const auto & item : combo)
		{
			cout << item << endl;	
		}		
	}
	vector<vector<string>> result;
	vector<string> sub1;
	int index = 0;
	for (const string & subitem : data[index])
	{
		sub1.push_back(subitem);
		for( const string & mini : sub1)
		{
			cout << mini << ",";
		}	
		cout << endl;
		sub1.pop_back();
	}
	return 0;
}
