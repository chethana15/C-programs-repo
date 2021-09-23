int main(void) 
{
	// your code goes here
	int a[]={10,20,30,40,50};
	int y=sizeof(a);
	int z=sizeof(a[0]);
	int l=y/z;
	int max1,max2,i;
	max1=max2=a[0];
	
	for(i=1;i<l;i++)
	{
	    if(max1<a[i])
	    {
	        max2=max1;
	        max1=a[i];
	    }
	    else if(max2<a[i] && a[i]!=max1)
	    {
	        max2=a[i];
	    }
	}
	printf("%d\n",max2);
	return 0;
}

