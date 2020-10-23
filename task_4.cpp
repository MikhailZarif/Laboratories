// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <vector>
using namespace std;
// Task 4.
void remove_negative(std::vector<int>& input) {
int n, i=0;
n=input.size();
while (i<n)
{
	if (input[i]<0) then {
			delete input[1];
			i=n+1;
		`	};
	i++;
}
}
void remove_last_even(std::vector<int>& input) {
int n, i=0, c;
n=input.size();
while (i<n)
	{
		if (input[i]%2==0) then c=i;
		i++;
	}
delete input[c];
}
