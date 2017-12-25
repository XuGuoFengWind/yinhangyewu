#include<stdio.h>
#define M 1024
void Gh(int num);
int main() 
{
    int n,k;
    scanf("%d",&n);
    int a[M];
    for(k=0; k<n; k++)
	{
        scanf("%d",&a[k]);
    }
    int i=0,j=0;
    while(i<n||j<n) {
        for(i;i<n; i++)
            if(1==a[i]%2) 
			{
                Gh(a[i++]);
                break;
            }
        for(i; i<n; i++) 
		{
            if(1==a[i]%2) 
			{
                Gh(a[i++]);
                break;
            }
        }
        for(j;j<n; j++) 
		{
            if(0==a[j]%2) 
			{
                Gh(a[j++]);
                break;
            }
        }
    }
    return 0;
}
void Gh(int num) 
{
    static int flag=0;
    if(flag)
	printf(" ");
    else 
	flag=1;
    printf("%d",num);

}