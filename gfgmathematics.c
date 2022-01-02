#include<stdio.h>
#include<math.h>

    void countDigit(int n)
     {
     	int count=0,p=n;
     	while(n!=0)
     	{
     		count++;
     		n=n/10;
     		
		 }
		 	printf("no. of digits in %d is %d ",p , count);
    }
    
    
    
    void countDigitv2(int n)
    {
    int p= floor(log10(n))+1;
    printf("no. of digits in %d is %d ",n ,p );
	}
	
	void palindrome(int n)
	{
		int rev=0,p=n;
		while(p!=0)
		{
			rev=rev*10+p%10;
			p=p/10;
		}
		if(rev==n)
		{
			printf("%d is a palindrome." ,n);
		}
		else
		printf("%d is not a palindrome",n);
		
	}
	
	int factorial(int n)
	{
		if(n==0)
		return 1;
		else
		return factorial(n-1)*n;
	}
	
		 factorialv2(int n)
		{
			int p=n;
			while(n>1)
			{
					n--;
				p=p*n;
			
			//	printf("%d   ,      %d \n",n,p);
			}
			printf("--%d--\n",p);
		}
		
		
		trailing0(int n)
		{
			//simply find factorial and traverse 'ill non zero and print count  dividing by 10 check for remaindre usin  but it is not good code for large domain
		}
		
		trailing0v2(int n)
		{
			// 5*2  ==  1 zero 
			int ct=0,i,j;
			for(j=5; j<=n ; j*=5)
			{
				ct+=n/j;
				
			}
          /*  for(j=5; j<=n ; j+=5)
            {
            	i=j;
            	while(i!=0)
            	{
            	
            		if(i%5==0&&i/5>0)
            		{
            			ct++;
            			
            			
					}
            		i=i/5;	
				}
            	
			}*/
			printf("%d hsve %d zeroes in its factorial.",n,ct);
            
		}
		
		findHcf(int a, int b)
		{
		//	2,4 cf  is  2
			int res =  min(a,b);
			return res;
			while(res>0)
			{
				if(a%res==0&&b%res==0)
				;
				else
				res--;
			}
			
			
		}
		
		findHcfv2(int a, int b)
		{
		// eulers method
		if(a>b)
		return findHcfv2(a, a%b);
		else
		return findHcfv2(b, b%a);
		
			
		}
	
	int main()
	{
		int a,b;
		printf("Enter  number : ");
		scanf("%d%d",&a,&b);
	//	int m=findHcfv2(a,b) ;
		int  n=findHcf(a,b);
		printf("%d   -------  %d",n);
		return 0 ;
	}

