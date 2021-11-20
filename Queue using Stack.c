#include<stdio.h>
int q[5];
int Max_Size=5;
int last=-1;
int start=-1;
int inque(int data)
{
	if(!isFull())
	{
		last+=1;
		q[last]=data;
	}
	else	
	printf("overflow\n");
}
int deque()
{int data;
	if(!isEmpty())
	{
		data=q[start];
		start+=1;
		return data;
	}
	else
	printf("underflow");
}
int peek()
{
	if (!isEmpty())
	return q[start];
else
return 0;
}
int getlast()
{
	if(!isEmpty())
	{
		return q[last];
	}
	else
	return 0;
}
int display()
{	int i;
	if(isEmpty())
	printf("underflow");
	else
	for (i =start;i<=last;i++)
	printf("%d\n",q[i]);
}
int isFull()
{
	if (last==Max_Size-1)
	{
		return 1;
	}
	else
	return 0;
}
int isEmpty()
{
	if (start<=-1||start>last)
	{
		return 1;
	}
	else
	return 0;
	
}
int main()
{start++;
inque(1);
inque(2);
inque(3);
inque(4);
inque(5);
inque(6);
inque(7);
display();
printf("\"%d\" is the last one and \"%d\" is the first",getlast(),peek());
return 0;
}
