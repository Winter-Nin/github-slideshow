{
    int n,x;
    scanf("%d", &n);
    x=0;
    if(n==1)
    {
        x=x+pow(n,4);
        printf("%d", x);
    }
    else if(n==2)
     {
         x=x+1+pow(n,4);
         printf("%d", x);
     }
    else if(n==3)
    {
        x=x+1+pow(2,4)+pow(4,4);
        printf("%d", x);
    }
    else if(n==4)
     {
     x=x+1+pow(2,4)+pow(4,4)+pow(7,4);
     printf("%d", x);
     }
    else if(n==5)
    {
        x=x+1+pow(2,4)+pow(4,4)+pow(7,4)+pow(11,4);
        printf("%d", x);
    }
    else if(n==6)
    {
        x=x+1+pow(2,4)+pow(4,4)+pow(7,4)+pow(11,4)+pow(16,4);
        printf("%d", x);
    }
    else if(n==7)
    {
        x=x+1+pow(2,4)+pow(4,4)+pow(7,4)+pow(11,4)+pow(16,4)+pow(22,4);
        printf("%d", x);
    }
    else if(n>=8)
        printf("INVALID INPUT");

    return 0;
}
