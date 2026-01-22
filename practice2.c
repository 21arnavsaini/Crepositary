#include<stdio.h> 
int sum(int a, int b) { return a + b; }
int multi(int a, int b) { return a * b; }
float div(float a, float b) { 
    if(b == 0) return 0; 
    return a / b; 
}
int subt(int a, int b) { return a - b; }

int main() {
    int x, y, p, result;
    printf("Enter two numbers x, y: ");
    scanf("%d %d", &x, &y); 
    
    printf("Enter 1-4: 1=add,2=sub,3=multi,4=div: ");
    scanf("%d", &p);
    
    switch (p) {  
        case 1: result = sum(x, y);
                printf("Result: %d\n", result);
                break;
        case 2: result = multi(x, y);
                printf("Result: %d\n", result);
                break;
        case 3: { float fresult = div((float)x, (float)y); 
                  printf("Result: %f\n", fresult);
                  break;
                }
        case 4: result = subt(x, y);
                printf("Result: %d\n", result);
                break;
        default: printf("Thank you\n");
    }
    return 0;
}
