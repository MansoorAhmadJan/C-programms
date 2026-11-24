scanf("%f %f %f",&a,&b,&c);

if (a+b&&b+c>a+c)
{
    /* code */printf("valid traingle\n");
}
else if (b+c&&a+c>a+b)
{
    /* code */printf("valid triangle\n");
}
else if (a+b&&b+c>a+c)
{
    /* code */printf("valid triangle\n");
}

else{
    printf("not a triangle\n");
}


return 0;