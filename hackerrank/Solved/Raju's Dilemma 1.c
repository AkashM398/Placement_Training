#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,i;
    int arr[100];
    int count=0;
    scanf("%d%d",&n,&x);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
            if(arr[i]%x==0)
            {
                count++;
            }
    }
    printf("%d ",count);
    
    return 0;
}