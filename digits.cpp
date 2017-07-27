#include <iostream>
#include <string>
#include <vector>
using namespace std;
string getminRemove(const string& m, int n)
{
	string result = m;
	if( n<= 0 )
		return m;
	else if( m.size() > 0 && m.size() > n)
	{
		int i;
		for( i = 0; i < n; i++ )
		{
			int index;
			for(index = 0; index < result.size()-1; index++ )
			{
				if( result[index] > result[index+1] )
				{
					result.erase(result.begin() + index);
					break;
				}
			}
			if( index == result.size()-1 )
			{
				result.erase(result.end()-1);
			}
		}
	}
	return result;
}

void main()
{
	cout << getMinRemove("670124", 2) << endl;
	cout << getMinRemove("8361957", 3) << endl;
	cout << getMinRemove("13", 1) << endl;
	cout << getMinRemove("9999", 2) << endl;
	cout << getMinRemove("1000", 0) << endl;
	cout << getMinRemove("8561357", 3) << endl;
	cout << getMinRemove("12311", 1) << endl;
	return 0;
}
