// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <vector>
using namespace std;
// Task 3.
void swap_el(std::vector<int>& input) {
int i=0, n=2, t;
while (i<=n)
{
	t=input[i+17];
	input[i+17]=input[i];
	input[i]=t;
}
}
