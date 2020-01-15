//Fibonacci series = 0,1,1,2,3,5,8,13,21,34,........................
//Golden Ratio = (1+sqrt(5))/2=1.6180339887
//Golden ratio may give us incorrect answer , we can get correct result if we round up the result at each point
// nth fibonacci number = round(n-1 th fibonacci number * golden ratio)
//This method can calculate first 34 fibonacci number correctly after taht there may be difference from the correct value

//C++ program for nth fibonacci number using golden ratio
#include<bits/stdc++.h>
using namespace std;

double golden_ratio = 1.6180339;
//fibonacci number upto n=5 
int fibonacci[6]={0,1,1,2,3,5};

int fib(int number)
{
	if(number<6)
	{
		return fibonacci[number];
	}
	int i=5, value=5;
	
	while(i<number)
	{
		value = round(value *golden_ratio);
		i++;
	}
	return value;
}

//Driver Code
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int number;
	cout<<"Enter the number & for correct result number should be less than 35"<<endl;
	cin>>number;
	cout<<number<<"th fibonacci number = "<<fib(number)<<endl;
	return 0;
}
