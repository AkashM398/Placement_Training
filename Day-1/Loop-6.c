//this program has O(sqrt(n)) time complexity
A()
{
    for(i=1;i^2<=n;i++)
    {
        printf("#");
    }
}

/*
explanation:
    i^2 <= n --> i<= sqrt(n)
    Loop executes for sqrt(n) times
    O(sqrt(n))
*/