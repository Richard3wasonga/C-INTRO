#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    /*Data types*/

    /*
    int age = 10;
    printf("Age = %d\n", age);
    */
    /*
    double number = 12.45;
    float number1 = 10.9f;
    double number2 = 5.5e6;
    printf("%.2lf\n", number);
    printf("%.1f\n", number1);
    printf("%lf\n", number2);
    */
    /*
    char character = 'z';
    printf("%c\n", character);
    printf("%d\n", character);
    */
    /*
    int age;
    double number;
    printf("int size = %zu\n", sizeof (age));
    printf("double size = %zu\n", sizeof (number));
    */

    /*Conversion*/

    /*
    double a = 5.67;
    int b =9;
    double result = a + b;

    printf("%lf\n", result);
    */

    /*Implicit conversion*/

    /*
    int a = 3.65;
    printf("%d", a);
    */

    /*Explicit conversion*/
    
    /*
    double a = 5.67;
    int b =9;
    int result = (int)a + b;

    printf("%d\n", result);
    */
    /*
    int a = 9, b = 2;
    double result = (double)a / b;
    printf("%lf\n", result);
    */

    /*While loop*/
    /*
    int count = 1;

    while(count < 5){
        printf("while loop in C\n");
        printf("count = %d\n", count);
        count = count + 1;
    }
    */
    /*
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int count = 1;

    while(count <= 10){
     int product = number * count;
     printf("%d*%d = %d\n",number, count, product);
     count = count + 1;
    }
    */

    /*Do while loop*/
    /*
    int count = 1;
    do{
        printf("%d\n", count);
        count = count + 1;
    }while (count < 5);
    */

    /*The diffrence between the do while and the while loop is that do while loop is run once no matter what*/
    /*
    int number;
    int count = 10;

    printf("Enter the number: ");
    scanf("%d", &number);

    while(count != 0){
        int product = number * count;
        printf("%d*%d = %d\n", number, count, product);
        count = count - 1;
    }

    */

    /*For loop*/

    /*
    int sum = 0;
    for(int i = 2; i <= 100; i+2){
        sum = sum + i;
    }
    printf("%d\n", sum);

    */

    /*Break and Continue*/
    
    /*
    for(int i = 1; i <= 5; i++){
        if (i == 3){
            break;
        }
        printf("%d\n", i);
        
    }

    */
    /*
    while(1){
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if(number < 0){
            break;
        }
    }

    */

    /*

    for(int i = 1; i <= 5; i++){
        if (i == 3){
            continue;
        }
        printf("%d\n", i);
        
    }

    */

    /*break statement stops the loop completly while in continue it skips the current iteration*/

    /*
    while(1){
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number <= 0){
            break;
        }
        if((number % 2) != 0){
            continue;
        }
        printf("%d\n", number);
    }

    */

    /*

    while(1){
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number >= 0){
            printf("Positive Value\n");
            break;
        }
        if(number % 2 == 0){
            printf("Negative Even\n");
            continue;
        }
        printf("%d\n", number);
    }

    */
    
    
    /*If else statement*/
    /*
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    if(age > 120 || age < 0){
        printf("Invalid age\n");
    }
    else if(age >= 18){
        printf("You are eligible to vote\n");
    }
    else{
        printf("Sorry you are not eligible to vote\n");
    }

    */

    /*Ternary operator*/

    /*

    char operator = '+';

    int num1 = 8;
    int num2 = 7;


    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("%d\n", result);

    */

    /*switch statement*/

    /*Printing one satatement for every options*/

    /*
    int number;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &number);

    switch(number){
        case 1:
        printf("sunday\n");
        break;

        case 2:
        printf("Monday\n");
        break;

        case 3:
        printf("Tuesday\n");
        break;

        case 4:
        printf("wednesday\n");
        break;

        case 5:
        printf("Thursday\n");
        break;

        case 6:
        printf("Friday\n");
        break;

        case 7:
        printf("Saterday\n");
        break;

        default:
        printf("Invalid Number\n");
    }

    */

    /*Printing one satatement for multiple options*/

    /*
    int number;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &number);

    switch(number){
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        printf("Weekday\n");
        break;

        case 1:
        case 7:
        printf("Weekend\n");
        break;

        default:
        printf("Invalid Number\n");
    }

    */

    /*

    char operator;
    printf("Choose an operator ['+', '-', '*', '/']: ");
    scanf("%c", &operator);
  
    double num1, num2;
  
    printf("Enter first number: ");
    scanf("%lf", &num1);
  
    printf("Enter second number: ");
    scanf("%lf", &num2);
  
    double result;

    switch(operator) {
      case '+':
        result = num1 + num2;
        break;
      case '-':
        result = num1 - num2;
        break;
      case '/':
        result = num1 / num2;
        break;
      case '*':
        result = num1 * num2;
        break;

      default:
        printf("Invalid Operator");
    }
  
    printf("%.2lf\n", result);

    */

    /*Boolean and comparison operators*/
    /*
    bool value1 = true;
    bool value2 = false;

    printf("%d ",value1);
    printf("%d ", value2);
    */

    /*Greater than and lesser tahn operator*/
    /*
    bool value = (12 > 9);
    bool value2 = (12 < 9);
    printf("%d\n", value);
    printf("%d\n", value2);
    */

    /*Equals to  and not equal to operator*/
    /*
    bool value = (9 == 6);
    bool value1 = (9 != 6);

    printf("%d\n", value);
    printf("%d\n", value1);
    */
    /*Greater than or equal and lesser than or equal operator */
    /*
    bool value = (9 >= 6);
    bool value1 = (9.34 <= 6.87);

    printf("%d\n", value);
    printf("%d\n", value1);
    */

    /*Comparison between variables*/

    /*

    int num1 = 9;
    int num2 = 6;

    bool value = (num1 > num2);
    bool value1 = (num1 > 6);

    printf("%d\n", value);
    printf("%d\n", value1);
    */

    /*Logical operator (and(&&),or(||),Not(!))*/
    /*
    int age = 16;
    double height = 6.3;

    bool result = (age >= 18) && (height > 6.0);

    printf("%d\n", result);
    */
    /*
    int age = 16;
    double height = 6.3;

    bool result = (age >= 18) || (height > 6.0);

    printf("%d\n", result);

    */

    /*Not can be used to compare only one thing*/

    /*

    int age = 16;
   
    bool result = !(age <= 18);

    printf("%d\n", result);
    */

    /*Bitwise operator*/

    /*

    int a = 4, b = 8;
    int c;

    c = a & b;
    printf("a & b : %d\n", c);

    c = a | b;
    printf("a | b : %d\n", c);

    c = a << 2;
    printf("a << 2 : %d\n", c);

    c = a >> 2;
    printf("a >> 2 : %d\n", c);

    c = a ^ b;
    printf("a ^ b : %d\n", c);
    */

    /*Array*/

    /*Assigning values directly*/
    /*
    int age[5] = {25, 29, 25, 32, 17};
    */
    /*Assigning values using index number*/
    /*
    int age[5];

    printf("Enter 5 input values: ");
    scanf("%d", &age[0]);
    scanf("%d", &age[1]);
    scanf("%d", &age[2]);
    scanf("%d", &age[3]);
    scanf("%d", &age[4]);

    printf("%d ", age[0]);
    printf("%d ", age[1]);
    printf("%d ", age[2]);
    printf("%d ", age[3]);
    printf("%d ", age[4]);
    */
    /*
    int age[5] = {21, 29, 25, 32, 17};
    age[2] = 26;
    printf("%d", age[2]);
    */
    /*Loop and array*/
    /*
    int age[5];

    printf("Enter 5 input values: ");

    for (int i = 0; i < 5; ++i){
        scanf("%d", &age[i]);
    }

    for(int i = 0; i < 5; ++i){
        printf("%d ", age[i]);
    }
    */

    /*Multidimensional array*/
    /*
    int arr [2][3] = {{1,3,5} , {2,4,6}};
    arr[0][2] = 7;
    arr[1][1] = 8;

    printf("%d\n",arr[0][2]);
    printf("%d",arr[1][1]);
    */
    /*Loop and mulitidimetional array*/
    /*
    int arr [2][3] = {{1,3,5} , {2,4,6}};

    for (int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    */

    /*Bubble sorting*/

    /*

    int i, j, flag, A[5] = {15,16,6,8,5};

    for(i=0;i<5-1;i++){
        flag = 0;
        for(j=0;j<5-1-i;j++){
            if(A[j] > A[j+1]){
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }

    */

    /*Pointers*/

    /*Accessing a value using pointer varibale*/
    /*
    int age = 25;

    int* ptr = &age;

    printf("Address: %p\n", ptr);

    printf("Value: %d\n", *ptr);
    */

    /*Change Value using Pointer*/
    /*
    int age = 25;

    int* ptr = &age;
    
    *ptr = 31;

    printf("%d", age);
    */

    /*Pointers and arrays*/
    /*
    int numbers[5] = {1,3,5,7,9};

    for(int i = 0; i < 5; ++i){
        printf("%d = %p\n", numbers[i], numbers + 1);
    }

    */

    /*Access array elements using pointers*/
    /*
    int numbers[5] = {1,3,5,7,9};

    for(int i = 0; i < 5; ++i){
        printf("%d = %p\n", *(numbers + i), numbers + 1);
    }
    */

    /*Change array element using pointers*/
    /*
    int numbers[5] = {1,3,5,7,9};

    *numbers = 2;
    *(numbers + 4) = 11;

    printf("First Element: %d\n", *numbers);
    printf("Last Element: %d\n", *(numbers + 4));
    */
    /*
    int *max, arr[] = {34,12,21,54,48};

    max = arr;
    *max = *arr;

    for(int i; i < 4; ++i){
        if(arr[i] < arr[i + 1]){
            *max = arr[i + 1];
        }
    }
    printf("Max value: %d\n", *max);
    */

    /*Use of sprint*/
    // I imported a string.h header file that contains strlen to find the length of a string
    /*
    char string[100];

    sprintf(string, "Hello %d %f", 2, 10.5);

    printf("%s", string);
    printf("\n");

    printf("%s", string);
    printf("\n");

    int length = strlen(string);
    for(int i = 0; i < length; i++){
        printf("string[%d] = %c\n", i, string[i]);
    }

    */

    /*strings*/

    /*String input*/
    /*
    char str[20];

    printf("Enter Your name: ");
    
    // Notice that when you use scanf and input two names it only reads the name untill it encouters a space
    // scanf("%s", str);

    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);
    */

    /*String functions*/

    /*strlen function*/
    /*
    char langauage[] = "C programming";

    printf("%s\n", langauage);
    printf("Length: %zu\n", strlen(langauage));
    */

    /*strcpy function*/
    /*
    char food[] = "Pizza";
    char bestFood[strlen(food)];

    strcpy(bestFood, food);
    printf("%s\n", bestFood);
    */

    /*strcat function*/
    /*
    char text1[] = "Hey, ";
    char text2[] = "How are you?";

    strcat(text1, text2);
    printf("%s\n", text1);
    */

    /*strcmp function*/
    /*IF they match it returns an integer 0 but if false it returns a random non 0 value*/
    /*
    char text1[] = "abcd";
    char text2[] = "efgh";
    
    int result = strcmp(text1, text2);

    printf("%d\n", result);
    */

    /*Palindrom*/

    /*
    char word[100];
	char palindrom[100];
	
	printf("Enter a word: ");
	scanf("%s", word);
	
	for(int i = 0; i < strlen(word); i++){
	    palindrom[i] = word[strlen(word)- i - 1];
	}

    palindrom[strlen(word)] = '\0'
	
	printf("%s\n", palindrom);
    */

    return 0;

    
}