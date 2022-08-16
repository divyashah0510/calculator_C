#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int add1();
int add2();
int add3();
int add4();
int subtract1();
int subtract2();
int subtract3();
int subtract4();
int multiply1();
int multiply2();
int multiply3();
int multiply4();
int division1();
int division2();
int division3();
int division4();
void power();
void modulus();
void squareroot();
void factorial();
/*Main function*/
void main()
{
    int j;
    while(j!=1)
    {int choice;
    printf("Enter your choice for following:\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n6.modulus\n7.squareroot\n8.factorial");
    printf("\nFeed in your choice:\n");
    scanf("%d",&choice);
    int decision;
        
    switch (choice)
    {
        
        case 1:
        printf("Enter how many terms you want to add ?\n");
        printf("1.Addition for two terms\n2.Addition for three terms\n3.Addition for four terms\n4.Addition for five terms\n");
        scanf("%d",&decision);
        
             switch (decision)
            {
                case 1:
                    add1();
                    break;
        
                case 2:
                    add2();
                    break;
        
                case 3:
                    add3();
                    break;
        
                case 4:
                    add4();
                    break;
        
                    default:printf("Wrong choice choosen!");
                    break;
            }
            break;
        case 2:
        printf("Enter how many terms you want to subtract ?\n");
        printf("1.Subtraction for two terms\n2.Subtraction for three terms\n3.Subtraction for four terms\n4.Subtraction for five terms\n");
        scanf("%d",&decision);
        
             switch (decision)
            {
                case 1:
                    subtract1();
                    break;
        
                case 2:
                    subtract2();
                    break;
        
                case 3:
                    subtract3();
                    break;
        
                case 4:
                    subtract4();
                    break;
        
                    default:printf("Wrong choice choosen!");
                    break;
            }
            break;
        case 3:
        printf("Enter how many terms you want to multiply ?\n");
        printf("1.Multiplication for two terms\n2.Multiplication for three terms\n3.Multiplication for four terms\n4.Multiplication for five terms\n");
        scanf("%d",&decision);
        
             switch (decision)
            {
                case 1:
                    multiply1();
                    break;
        
                case 2:
                    multiply2();
                    break;
        
                case 3:
                    multiply3();
                    break;
        
                case 4:
                    multiply4();
                    break;
        
                    default:printf("Wrong choice choosen!");
                    break;
            }
            break;
        case 4:
        printf("Enter how many terms you want to multiply ?\n");
        printf("1.Division for two terms\n2.Division for three terms\n3.Division for four terms\n4.Division for five terms\n");
        scanf("%d",&decision);
        
             switch (decision)
            {
                case 1:
                    divide1();
                    break;
        
                case 2:
                    divide2();
                    break;
        
                case 3:
                    divide3();
                    break;
        
                case 4:
                    divide4();
                    break;
        
                    default:printf("Wrong choice choosen!");
                    break;
            }
            break;
        case 5:
        power();
        break;
        case 6:
        modulus();
        break;
        case 7:
        squareroot();
        break;
        case 8:
        factorial();
        break;
    
    default:printf("Applied logic have missing flaws!");
    }
    
    printf("\n\n\n\nDo you want to continue calculating?\n1.No\n2.Yes\n");
    scanf("%d",&j);
    if (j==1)
    {
        exit(1);
    }
    else
    {
        continue;
    }
    
    
    }
}
int add1()
{
    int add1,add2,sum;
    printf("Enter two numbers:\n");
    scanf("%d\n%d",&add1,&add2);
    sum=add1+add2;
    printf("The sum is %d",sum);
    return sum;
}
int add2()
{
    int add1,add2,add3,sum;
    printf("Enter three numbers:\n");
    scanf("%d\n%d\n%d",&add1,&add2,&add3);
    sum=add1+add2+add3;
    printf("The sum is %d",sum);
    return sum;
}
int add3()
{
    int add1,add2,add3,add4,sum;
    printf("Enter four numbers:\n");
    scanf("%d\n%d\n%d\n%d",&add1,&add2,&add3,&add4);
    sum=add1+add2+add3+add4;
    printf("The sum is %d",sum);
    return sum;
}
int add4()
{
    int add1,add2,add3,add4,add5,sum;
    printf("Enter five numbers:");
    scanf("%d\n%d\n%d\n%d\n%d",&add1,&add2,&add3,&add4,&add5);
    sum=add1+add2+add3+add4+add5;
    printf("The sum is %d",sum);
    return sum;
}
int subtract1()
{
    int add1,add2,sum;
    printf("Enter two numbers:\n");
    scanf("%d\n%d",&add1,&add2);
    sum=add1-add2;
    printf("The subtraction is %d",sum);
    return sum;
}
int subtract2()
{
    int add1,add2,add3,sum;
    printf("Enter three numbers:\n");
    scanf("%d\n%d\n%d",&add1,&add2,&add3);
    sum=add1-add2-add3;
    printf("The subtraction is %d",sum);
    return sum;
}
int subtract3()
{
    int add1,add2,add3,add4,sum;
    printf("Enter four numbers:\n");
    scanf("%d\n%d\n%d\n%d",&add1,&add2,&add3,&add4);
    sum=add1-add2-add3-add4;
    printf("The subtraction is %d",sum);
    return sum;
}
int subtract4()
{
    int add1,add2,add3,add4,add5,sum;
    printf("Enter five numbers:\n");
    scanf("%d\n%d\n%d\n%d\n%d",&add1,&add2,&add3,&add4,&add5);
    sum=add1-add2-add3-add4-add5;
    printf("The subtraction is %d",sum);
    return sum;
}
int multiply1()
{
    int add1,add2,sum;
    printf("Enter two numbers:\n");
    scanf("%d\n%d",&add1,&add2);
    sum=add1*add2;
    printf("The multiplication is %d",sum);
    return sum;
}
int multiply2()
{
    int add1,add2,add3,sum;
    printf("Enter three numbers:\n");
    scanf("%d\n%d\n%d",&add1,&add2,&add3);
    sum=add1*add2*add3;
    printf("The multiplication is %d",sum);
    return sum;
}
int multiply3()
{
    int add1,add2,add3,add4,sum;
    printf("Enter four numbers:\n");
    scanf("%d\n%d\n%d\n%d",&add1,&add2,&add3,&add4);
    sum=add1*add2*add3*add4;
    printf("The multiplication is %d",sum);
    return sum;
}
int multiply4()
{
    int add1,add2,add3,add4,add5,sum;
    printf("Enter five numbers:\n");
    scanf("%d\n%d\n%d\n%d\n%d",&add1,&add2,&add3,&add4,&add5);
    sum=add1*add2*add3*add4*add5;
    printf("The multiplication is %d",sum);
    return sum;
}
int divide1()
{
    float add1,add2,sum;
    printf("Enter two numbers:\n");
    scanf("%f\n%f",&add1,&add2);
    sum=add1/add2;
    printf("The division is %f",sum);
    return sum;
}
int divide2()
{
    float add1,add2,add3,sum,div;
    printf("Enter three numbers:\n");
    scanf("%f\n%f\n%f",&add1,&add2,&add3);
    sum=(add1/add2);
    div=sum/add3;
    printf("The division is %f",div);
    return sum;
}
int divide3()
{
    float add1,add2,add3,add4,sum,div,div1;
    printf("Enter four numbers:\n");
    scanf("%f\n%f\n%f\n%f",&add1,&add2,&add3,&add4);
    sum=(add1/add2);
    div=sum/add3;
    div1=div/add4;
    printf("The division is %f",div1);
    return sum;
}
int divide4()
{
    float add1,add2,add3,add4,add5,sum,div,div1,div2;
    printf("Enter five numbers:\n");
    scanf("%f\n%f\n%f\n%f\n%f",&add1,&add2,&add3,&add4,&add5);
    sum=(add1/add2);
    div=sum/add3;
    div1=div/add4;
    div2=div1/add5;
    printf("The division is %f",div2);
    return sum;
}
void power()
{
    float base,power;
    printf("Enter the base and power :\n");
    scanf("%f\n%f",&base,&power);
    double e=pow(base,power);
    printf("%lf\n",e);
}
void modulus()
{
    int a,b;
    printf("Enter the two number for modulation :\n");
    scanf("%d\n%d",&a,&b);
    printf("%d\n",a%b);
}
void squareroot()
{
    float c;
    float root;
    printf("Enter the number for finding its squareroot\n");
    scanf("%f",&c);
    root=sqrt(c);
    printf("The squareroot of %f is %f",c,root);
}
void factorial()
{
    int n,fact=1;
    printf("Enter the number for finding factorial :\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    printf("The factorial of entered number %d is %d",n,fact);
}