// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <vector>
using namespace std;
// Task 2.
int sum(const std::vector<int>& input) {
	int n, i=0, sum=0;
	n= input.size();
	while (i<n)
	{
		sum=sum+input[i];
		i++;
	}
	return sum;
}
int square_sum(const std::vector<int>& input) {
	int n, i=0, square_sum=0;
	n= input.size();
	while (i<n)
	{
		square_sum=square_sum+(input[i]*input[i]);
		i++;
	}
	return square_sum);
}
int sum_six(const std::vector<int>& input) {
	int n, i=0, sum_six=0;
	n= 6;
	while (i<n)
	{
	sum_six=sum_six+input[i];
	i++;
	}
	return sum_six;
}
int sum_k(const std::vector<int>& input, int k1, int k2) {
	int k1, k2, sum_k=0;
	cin>>k1>>k2>>endl;
	while (k1<k2)
		{
		sum_k=sum_k+input[k1];
		k1++;
		}
	return sum_k;
}
int mean(const std::vector<int>& input) {
	int n, i=0, s=0
	double mean;
	n= input.size();
	while (i<n)
	{
		s=s+(input[i]*input[i]);
		i++;
	}
	i=0;
	mean=s/n;
	return mean;
}
int mean_k(const std::vector<int>& input, int s1, int s2) {
	int s1, s2, s=0
	double mean_k;
	while (s1<s2)
		{
		s=s+input[s1];
		s1++;
		}
	 mean_k=s/(s2-s1+1);
	 return  mean_k;
}
