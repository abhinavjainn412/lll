#include<stdio.h>
#include<math.h>
#define f(x) (x*log10(x)-1.2)
#define precision 0.00000005
int main()
{
    int i,iteration,qq=1;
    float a,b,c,cc,pre;
    printf("enter a and b - ");
    scanf("%f %f",&a,&b);
    printf("\nenter maximum no. of iterations - ");
    scanf("%d",&iteration);
    if(f(a)*f(b)>0){
        printf("wrong inputssss\n");
    }
    else if(f(a)==0){
        printf("Root is - %f",a);
    }
    else if(f(b)==0){
        printf("Root is - %f",b);
    }
    else{
        do{
            cc=c;
            c=(a+b)/2;
            if(f(a)*f(c)<0)
            {
                b=c;
            }
            else{
                a=c;
            }
            pre=fabs(c-cc);
            i++;
            iteration--;
            printf("\nIteration %d = %f",qq,c);
            qq++;
        }while(pre>precision && iteration>0);
        printf("\nRoot is - %f",c);
        printf("\nNo of iterations - %d",i);
    }
    return 0;
}
