#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int a, int b);
void print_menu(); 

int main()  {

    int choice;
    double first, second, result;
    while(1) {
        print_menu() ;
        scanf("%d", &choice);
        if(choice== 7 ) {
            break;
        }

        if(choice <1 || choice >7 ) {
            fprintf(stderr, "invalid menu choice.");
            continue;
        }
        
        printf("\nplease enter the first number: ");
        scanf("%lf", &first);
        printf("\nplease enter the second number: ");
        scanf("%lf", &second);

    switch (choice)
    {
    case 1: //add
            result= first + second;
        break;
    case 2:// subtract
            result =first - second;
        break;
    case 3://multiply
            result = first*second;
        break;
    case 4://division
            result = division(first, second);
        break;
    case 5://modulus 
            result =modulus(first, second);
        break;
    case 6:// power
            result = pow(first, second);
        break;
    default:
        break;
    }
    
    printf("\nresult of operation is: %.2f",  result);
        };
    
    return 0;
}
double division(double a, double b) {
    if( b == 0 )  {
        fprintf(stderr, "Invalid Argument for division");
        return NAN;
    }  else {
        return a / b ;
    }
}
double modulus(int a, int b)  {
    if( b==0 )  {
        fprintf(stderr, "Invalid Argument for modulus");
        return NAN;
    }  else {
        return a % b ;
    }

}

    void print_menu() {
    printf("\n----------------------------------------");   
    printf("\nwelcome to simple calculator.");
    printf("\nchoose one of the following option");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power"); 
    printf("\n7. exits");
    printf("\n now enter your choice: ");
    
    }
