//program for nth catalan number
/*
1.Count the number of expressions containing n pairs of parentheses that are correctly matched. For n = 3, possible expressions are ((())), ()(()), ()()(), (())(), (()()).

2.Count the number of possible Binary Search Trees with n keys (See this)
Count the number of full binary trees (A rooted binary tree is full if every vertex has either two children or no children) with n+1 leaves.

3.Given a number n, return the number of ways you can draw n chords in a circle with 2 x n points such that no 2 chords intersect.
*/

//recursive solution compexity exponentioal space complexity O(N)
/*
unsigned long int catalan(unsigned int n)
{
    // Base case
    if (n <= 1)
        return 1;
 
    // catalan(n) is sum of
    // catalan(i)*catalan(n-i-1)
    unsigned long int res = 0;
    for (int i = 0; i < n; i++)
        res += catalan(i) * catalan(n - i - 1);
 
    return res;
}
 
// Driver code
int main()
{
    for (int i = 0; i < 10; i++)
        cout << catalan(i) << " ";
    return 0;
}
*/

//dynamic program solution
/*
Time Complexity: O(n2)
Auxiliary Space: O(n)
*/

/*
unsigned long int catalanDP(unsigned int n)
{
    // Table to store results of subproblems
    unsigned long int catalan[n + 1];
 
    // Initialize first two values in table
    catalan[0] = catalan[1] = 1;
 
    // Fill entries in catalan[] using recursive formula
    for (int i = 2; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }
 
    // Return last entry
    return catalan[n];
}
*/

//binomial solution

/*
Time Complexity: O(n).
Auxiliary Space: O(1)
*/
/*
// C++ program for nth Catalan Number
#include <iostream>
using namespace std;

// Returns value of Binomial Coefficient C(n, k)
unsigned long int binomialCoeff(unsigned int n,
								unsigned int k)
{
	unsigned long int res = 1;

	// Since C(n, k) = C(n, n-k)
	if (k > n - k)
		k = n - k;

	// Calculate value of [n*(n-1)*---*(n-k+1)] /
	// [k*(k-1)*---*1]
	for (int i = 0; i < k; ++i) {
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

// A Binomial coefficient based function to find nth catalan
// number in O(n) time
unsigned long int catalan(unsigned int n)
{
	// Calculate value of 2nCn
	unsigned long int c = binomialCoeff(2 * n, n);

	// return 2nCn/(n+1)
	return c / (n + 1);
}

// Driver code
int main()
{
	for (int i = 0; i < 10; i++)
		cout << catalan(i) << " ";
	return 0;
}

*/


