//This program has O(3^n) time complexity
A()
{
    m=1;
    for(i=1;i<=n;i++)           // ---> n
    {
        m= m*3;                 // ---> n^2
        for(j=1;j<=m^2;j++)     // ---> n^2
        {
            printf("*");
        }
    }
}