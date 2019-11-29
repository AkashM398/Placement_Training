#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,c,m,p,flag=1,i;
    int arr[100];
    scanf("%d",&n);
    scanf("%d",&c);
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p = c*m;
    for(i=0;i<n;i++)
    {
        if(p<arr[i])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
        
    return 0;
}