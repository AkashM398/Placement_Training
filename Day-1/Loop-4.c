//this loop takes n^2logn time complexity
A()
{
    for(i=n/2;i<=n;i++)
    {
        for(j=1;j<=n/2;j++)
        {
            for(k=1;k<=n;k=k*2)
            {
                printf("#");
            }
        }
    }
}