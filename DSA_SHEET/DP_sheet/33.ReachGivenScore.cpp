
//https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1

//Reach a given score

//Recurrsion

/*
long long int recc(int i,int k,int arr[]){
    if(i == 3) return 0;
    if(k == 0) return 1;
    int take = 0;
    if(arr[i] <= k) take = recc(i,k-arr[i],arr);
    int not_take = recc(i+1,k,arr);
    return take+not_take;
}
long long int count(long long int n)
{
	int arr[3] = {3,5,10};
	return recc(0,n,arr);
}
*/

//tabulation

/*
long long int count(long long int n)
{
	long long int table[n+1],i;
	memset(table, 0, sizeof(table));
	table[0]=1;                 // If 0 sum is required number of ways is 1.
	
    for(int i=3;i<=n;i++) table[i]+=table[i-3];
    for(int i=5;i<=n;i++) table[i]+=table[i-5];
    for(int i=10;i<=n;i++) table[i]+=table[i-10];
	
	return table[n];
}
*/