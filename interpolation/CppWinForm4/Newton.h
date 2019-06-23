#pragma once
#include <cliext\vector>
ref class Newton
{
private:

public:
	Newton() {}
	double methodNewtow(cliext::vector<double> x, cliext::vector<double> f, double a) {
		int n = 7, i, j, q;
		double sum = 0, mult;
		for (j = 0; j<n - 1; j++)
		{
			for (i = n - 1; i>j; i--)
				f[i] = (f[i] - f[i - 1]) / (x[i] - x[i - j - 1]);
		}
		for (i = n - 1; i >= 0; i--)
		{
			mult = 1;
			for (j = 0; j < i; j++) {
				mult *= (a - x[j]);
			}
			mult *= f[j];
			sum += mult;
			
		}
		return sum;
	}
};

