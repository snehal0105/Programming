#include <stdio.h>
float AdditionNumbers(float No1, float No2)
{
    float fAns = 0.0f;
    fAns = No1 + No2;
    return fAns;
}
int main()
{
    float fValue1 = 0.0f;       //To store the first input
    float fValue2 = 0.0f;       //To sore the second input
    float fResult = 0.0f;       //To store the Result

    printf("Enter first number : ");
    scanf("%f",&fValue1);

    printf("Enter second number : ");
    scanf("%f",&fValue2);

    fResult = AdditionNumbers(fValue1,fValue2); //perform the addition

    printf("Addition is : %f \n",fResult);


    return 0;
}