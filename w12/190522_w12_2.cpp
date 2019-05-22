#include <stdio.h>
#include <math.h>

float add_func(float, float);
float minus_func(float, float);
float mult_func(float, float);
float div_func(float, float);
float mod_func(float, float);
float exp_func(float, float);

int main(void)
{
    FILE *fp = fopen("res.txt","w");
    float op1=0, op2=0, result;
    char op;

    printf("============================\n");
    printf("operator: +, -, *, /, %%, ^\n");
    printf("============================\n");

    fprintf(fp,"============================\n");
    fprintf(fp,"operator: +, -, *, /, %%, ^\n");
    fprintf(fp,"============================\n");
    ///
    printf("operand>>");
    fprintf(fp,"operand>>");
    scanf("%f",&op1);
    fprintf(fp,"%f\n",op1);
    while(1)
    {
        printf("operator>>");
        fprintf(fp,"operator>>");
        scanf(" %c",&op);
        if(op=='.') break;
        fprintf(fp,"%c\n",op);
        printf("operand>>");
        fprintf(fp,"operand>>");
        scanf("%f",&op2);
        fprintf(fp,"%f\n",op2);
        if(op=='+') result = add_func(op1,op2);
        if(op=='-') result = minus_func(op1,op2);
        if(op=='*') result = mult_func(op1,op2);
        if(op=='/') result = div_func(op1,op2);
        if(op=='%') result = mod_func(op1,op2);
        if(op=='^') result = exp_func(op1,op2);
        op1 = result;
        printf("%.1f\n",result);
        fprintf(fp,"%.1f\n",result);
    }
    fclose(fp);
    return 0;
}


float add_func(float a, float b)
{
    return a+b;
}

float minus_func(float a, float b)
{
    return a-b;
}

float mult_func(float a, float b)
{
    return a*b;
}

float div_func(float a, float b)
{
    return a/b;
}

float mod_func(float a, float b)
{
    ///modular operator cannot be defined with float operands. need type casting (float -> int)
    return (float)((int)a%(int)b);
}

float exp_func(float a, float b)
{
    return pow(a,b);
}

