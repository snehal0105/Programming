# include <stdio.h>
float AddTwoNumbers(
                        float fNo1,     // First input
                        float fNo2      // second input
                    )
{
    float fAns = 0.0f;                  // Variable to store the reult
    fAns = fNo1  + fNo2;                // Perform addition
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

    fResult = AddTwoNumbers(fValue1,fValue2); //perform the addition

    printf("Addition is : %f \n",fResult);

    return 0 ;
}