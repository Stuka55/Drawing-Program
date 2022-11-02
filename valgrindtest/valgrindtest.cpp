#include "Vector.h"
#include <cstdlib>

using namespace std;

template <typename Iterator>
void selection_sort(Iterator first, Iterator last)
	// sort container elements from smallest to largest using the selection sort method
{
	int n = last - first;
	for(int x=0; x<n; x++)
	{
		int index_of_min = x;
		for(int y=x; y<n; y++)
		{
			if(*(first+index_of_min) > *(first+y))
			{
				index_of_min = y;
			}
		}

		auto temp = *(first+x);
		*(first+x) = *(first+index_of_min);
		*(first+index_of_min) = temp;
	}
}

int main ()
{
  vector<double> testDouble(100);
  double test = 100.0;
  for (int i = 0; i < 100; i++)
  {
     test = i * 1.0;
     testDouble[i] = test;
  }

  selection_sort(testDouble.begin(),testDouble.end());

  testDouble.push_back(11.0);
  
  vector<string> testString(100);
  string word = "yes";
  string sentence = "y";
  int testStringSize = testString.size();
  for (int i = 0; i < testStringSize; i++)
  {
     word = " yes";
     testString[i] = word;
     sentence += testString[i] + " ";
  }


}
