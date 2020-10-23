// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <vector>
using namespace std;
// Task 1.
void multi_2(std::vector<int>& input) {
	int n, i=0;
	n=input.size();
	while (i<n)
	{
		input[i]=input[i]*2;
		i++;
	}
}

void reduce_a(std::vector<int>& input, int a) {
	int i=0, n;
	n=input.size();
	while (i<n)
	{
		input[i]=input[i]-a;
		i++;
	}
}

void div_on_first(std::vector<int>& input) {
	int i=0, n;
	n=input.size();
	while (i<n)
	{
		input[i]=input[i]./input[1];
		i++;
	}
}
