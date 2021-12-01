long int fibonatchi(long int);
int main()
{
	long int result,number;
	std::cout<<"please enter a number: ";
	std::cin>>number;
	result=fibonatchi(number);
	std::cout<<"\nFibonatchi ("<<number<<")="<<result<<"\n";
	return 0;
}

long int fibonatchi(long int n)
{
	    
	if(n==0||n==1)
		return n;
	else
		return fibonatchi(n-1)+fibonatchi(n-2);
}
