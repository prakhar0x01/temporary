#include <stdio.h>

################################## BASIC QUESTIONS : loops,conditonal statements etc. ################################################

//Write a program to calculate the area of sqaure
int main() {
  float side;
  printf("Enter the value of side :");
  scanf("%f",&side);
  printf("The area of Square is : %f",side+side);
  return 0;
}



//Write a program to calculate the area of circle
int main(){
  float radius;
  printf("Enter the Radius :");
  scanf("%f",&radius);
  printf("Area of circle : %f",radius*radius*3.14);
  return 0;
}



//Write a no. to check whether a no. is divisble by 2 or not ..?
int main(){
  int no;
  printf("\n[+]If the output is 1 : No. IS DIVISBLE by 2 \n[+]If the output is 0 : No. is NOT DIVISBLE by 2\n\n");
  
  //Taking user input
  printf("Enter a no. : ");
  scanf("%d",&no);

  printf("%d", no%2 == 0);
  return 0;
}




//WAP to check is a student is pass or fail.
int main(){
  int marks;
  printf("Enter the marks : ");
  scanf("%d",&marks);

  if (marks>30 && marks<=100){
    printf("Passed..!!");
  } else if (marks<=30){
    printf("Failed..!!");

  } else{
    printf("Invalid Input..!!");
  }
  return 0;
}




//If we want to do same ques with conditional operator(Ternary)
int main(){
  int marks;
  printf("Enter the marks : ");
  scanf("%d",&marks);

  //Solve by  conditional operator
  marks<=30 ? printf("You Failed..!!"):printf("You passed..!!");

return 0;
} 




//WAP to give Grades to students
int main(){
  int marks;
  printf("Enter the marks : ");
  scanf("%d",&marks);

  if (marks<=100 && marks>=90){
    printf("You grade is A+");
  }
  else if(marks>=70 && marks<90){
    printf("Your grade is A");
  }  
  else if(marks>=30 && marks<70){
    printf("Your Grade is B");
  }else if(marks<30){
    printf("Your Grade is C");
  }else{printf("Invalid input..!!");}
  return 0;
}



//WAP to print the day via numbers
int main(){
  int number;
  printf("Enter the number(1-7): ");
  scanf("%d",&number);

  switch(number){
    case 1 : printf("Monday");
      break;
    case 2 : printf("Tuesday");
      break;
    case 3 : printf("Wednesday");
      break;
    case 4 : printf("Thrusday");
      break;
    case 5 : printf("Friday");
      break;
    case 6 : printf("Saturday");
      break;
    case 7 : printf("Sunday");
      break;
  default : printf("Invalid Input");
  }      
}



//WAP to check if the character entered by user is uppercase or not.
int main(){
  char var;
  printf("Enter any character(a-z,A-Z) : ");
  scanf("%c",&var);

  if(var>='A' && var<='Z'){
    printf("Entered Character is Uppercase..!!");
  } else if(var>='a' && var<='z'){
    printf("Entered Character is lowercase..!!");
  }
}



//Ramesh basic salary is input through the keyboard, His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.Write a program to calculate his gross salary.
int main() {
    float basic_salary,dearness_allowance,gross_salary;
    printf("Enter the basic salary :");
    scanf("%f",&basic_salary);
    
    dearness_allowance=0.4 * basic_salary;
    printf("Your dearness_allowance is :%f  \n",dearness_allowance);
    
    float ha=0.2 * basic_salary;
    gross_salary=basic_salary+dearness_allowance+ha;
    
    printf("Your gross_salary is : %f  \n",gross_salary);

    return 0;
}



//The distance betweeen two cities(km.) is input through the keyboard,write a program to conver and print theis distance in meters, feer, inches and centimeters.
int main() {
  int distance;
  //taking user input
  printf("Enter the  Distance(in km.) : ");
  scanf("%d",&distance);

  //changing into meters
  float meters=distance*1000;
  printf("Distance in meters is : %f meters\n", meters);

  //changing into inches
  float inches=distance*39370.1;
  printf("Distance in inches is : %f inches\n", inches);  

  //changing into centimeters
  float centimeter=distance*100000;
  printf("Distance in centimeters is : %f centimeters\n", centimeter);
}



//If the Marks obtained by a student in five different subjects are input throught the keyboard, write a program to find out the aggregate marks and percentage marks obtainded by the student, Assume that the maximum marks that can be obtained by student in each subject is 100
int main(){
  float hindi,english,maths,science,computer_science,total,percentage;

  //Input marks in 1st subject
  printf("Enter the marks obtained in Hindi : ");
  scanf("%f",&hindi);

  //Input marks in 2nd subject
  printf("Enter the marks obtained in English : ");
  scanf("%f",&english);

  //Input marks in 3rd subject
  printf("Enter the marks obtained in Maths : ");
  scanf("%f",&maths);

  //Input marks in 4th subject
  printf("Enter the marks obtained in Science : ");
  scanf("%f",&science);

  //Input marks in 5th subject
  printf("Enter the marks obtained in ComputerScience : ");
  scanf("%f",&computer_science);

  total=hindi+english+maths+science+computer_science;
  printf("Your Total marks is : %f \n", total);

  percentage=total/5;
  printf("Your Total percentage is : %f",percentage);

  return 0;      
}



//Tempreture of a city in Fahrenheit degrees in input through the keyboard. write a  prgram to convert this tempreture into centigrade degrees.
int main(){
  float fahrenheit, centigrade;

  //Taking input of tempreture in fahrenheit
  printf("Enter the Tempreture (in fahrenheit) : ");
  scanf("%f",&fahrenheit);

  //Convert fahrenheit into centigrade
  centigrade=(fahrenheit-32)*0.5555;
  printf("The tempreture in Centigrade is : %f ",centigrade);

  return 0;
}



//The length and breadth of a rectangle and radius of a circle are input through the keyboard. write a program to calculate the area and perimeter of the rectenangle, and the area and circumference of the circle.
int main(){
  float length,breadth,area_rect,perimeter,radius,area_circle,circumference;

  printf("[-]Enter the Lenght : ");
  scanf("%f",&length);

  printf("[-]Enter the Breadth : ");
  scanf("%f",&breadth);
  
  area_rect=length*breadth;
  printf("[+]Area of Rectangle : %f \n",area_rect);
  
  perimeter=2*(length+breadth);
  printf("[+]Perimeter of Rectangle : %f \n",perimeter);
  
  printf("Enter the Radius of Circle : ");
  scanf("%f",&radius);
  
  area_circle=3.14*radius*radius;
  printf("Area of Circle : %f \n",area_circle);
  
  circumference=2*3.14*radius;
  printf("Circumference of Circle : %f \n",circumference);
  
  return 0;
}


// LOOP PROBLEMS

// Print the numbers from 0 to 10 with the help of loop.
int main(){
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
}


// Print the numbers from 0 to n , n is given by user input.
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=0;i<=num;i++){
        printf("%d\n",i);
    }
    return 0;
}


// Print the sum of first n natural numbers, n is given by user.
int main() {
    int num,sum;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=0;i<=num;i++){
        sum=sum+i;
    }
    printf("The sum is : %d\n",sum);
    return 0;
}

// Print the table of any number with the help of loop , number input by the user
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d \n",num,i,num*i);
    }
}

// Keep taking numbers as input from user , until the user enter an odd number
int main() {
    int num;
    for(int i=1;;i++){
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num%2 != 0){
            printf("You Entered odd number..!!\nProgram end..!!");
            break;
        }
    }
}

// Keep taking numbers as input from user , until the user enter an number which is multiple of 7
int main() {
    int num;
    for(int i=1;;i++){
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num%7 == 0){
            printf("You Entered multiple of 7..!!\nProgram end..!!");
            break;
        }
    }
}

// Print all the odd numbers from 5 to 50
int main() {
    for(int i=1;i<=50;i++){
        if(i%2 != 0){
            printf("%d\n",i);
        }
    }
}

// Print the factorial of number 'n'
int main() {
    int num,fact=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        fact=i*fact;
    }
    printf("The factorial of %d is %d",num,fact);
    return 0;
}

// Print reverse of a table of number 'n'
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=10;i>=1;i--){
        printf("%d x %d = %d \n",num,i,i*num);
    }
}


// Calculate the sum of all numbers from 5 to 50 (including 5 and 50).
int main() {
    int sum;
    for(int i=5;i<=50;i++){
        sum=sum+i;
    }
    printf("The Total sum is : %d",sum);
}


// WAP to check a number is prime or not.
int main(){
    int num,count;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("%d is a prime no.\n",num);
    }
    else{
        printf("%d is not a prime no.\n",num);
    }    
}


// WAP to print prime numbers in given range, range is input by user
int main(){
    int range,count;
    printf("Enter the range : ");
    scanf("%d",&range);
    
    for(int j=1;j<=range;j++){
        for(int i=1;i<=j;i++){
            if(j%i == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d is a prime no.\n",j);
            count=0;
        }   
        else{
            printf("%d is not a prime no.\n",j);
            count=0;
        }     
    }   
}



// Print the below pattern, using loop
   *
   **
   ***
   ****
   *****
int main(){
    int range;
    printf("Enter range :");
    scanf("%d",&range);
    
    for(int i=1;i<=range;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
  


// Print the below pattern, using loop
   *****
   ****
   ***
   **
   *  
int main(){
    int range;
    printf("Enter range :");
    scanf("%d",&range);
    
    for(int i=range;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}   


//Write a function that print namastey is user is indian and hello if user is american. use(#include<string.h>)
void greets(char greet);
int main(){
    char greet;
    printf("Enter 'I' if you're indian and 'A' if american..!! : ");
    scanf("%c",&greet);
    greets(greet);
    return 0;
}
void greets(char greet){
    
    if(greet=='I'){
        printf("Namastey..!!");
    }
    else if(greet=='A'){
        printf("Hello..!!");
    }
    else{
        printf("Invalid input");
    }
}


//Use a library function to calcualte sqaure.
int square(s);
int main(){
    int side;
    printf("Enter side : ");
    scanf("%d",&side);
    square(side);
    return 0;
}
int square(int side){
    int area=side*side;
    printf("Area of square is : %d",area);
    return 0;
}

//Write 3 functions to calcualte area of sqaure,circle and rectangle
int square(s);
int circle(r);
int rect(lb);

int main(){
    int side,radius,length,breadth;
    printf("Enter sides of sqaure : ");
    scanf("%d",&side);
    printf("Enter radius of circle : ");
    scanf("%d",&radius);
    printf("Enter length of rectangle : ");
    scanf("%d",&length);
    printf("Enter breadth of rectangle : ");
    scanf("%d",&breadth);    
    square(side);
    circle(radius);
    rect(length,breadth);
    return 0;
}
int square(int side){
    int area=side*side;
    printf("Area of square is : %d\n",area);
    return 0;
}

int circle(int radius){
    float area=3.14*radius*radius;
    printf("Area of circle is : %f\n",area);
    return 0;
}

int rect(int length, int breadth){
    int area=length*breadth;
    printf("Area of rectangle is : %d\n",area);
    return 0;
}



################################# RECURSION ##########################

// WAP to calculate sum of first n natural numbers using recursion.
int main() {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    sum(num);
    printf("Sum is : %d\n",sum(num));
    return 0;
}

int sum(int num) {
    if (num <= 0) {
        return 0;
    } else {
        return num + sum(num-1);
    }
}


// WAP to calculate factorial of number 'n' using recursion. 
int main() {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    fact(num);
    printf("Factorial is : %d\n",fact(num));
    return 0;
}

int fact(int num) {
    if (num >= 1) {
        return num * fact(num-1);
    } else {
        return 1;
    }
}


// Write a function to convert celcius to fahrenhiet using recursion.
float ctf(float temp);
int main() {
    float temp;
    printf("Enter Tempreture(Celcius) :");
    scanf("%f",&temp);
    ctf(temp);
    printf("%f°F",ctf(temp));
    return 0;
}

float ctf(float temp) {
    if (temp == 0) {
        return 32;
    } else {
        return temp*9.0/5.0 + 32.0;
    }
}



//Write a function to calculate marks of stdudent using recursion.

int marks(int H,int E,int M);

int main() {
    int H,E,M;
    printf("Enter the marks in Hindi,English & Maths(out of 100) : ");
    scanf("%d%d%d",&H,&E,&M);
    marks(H,E,M);
    printf("Total Percentage are : %d",marks(H,E,M));
    
    return 0;
}

int marks(int H, int E, int M){
    return (H+E+M)/3;
}


//Write a function to print nth term of fibonacci sequence
int fib(num);

int main() {
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    
    fib(num);
    printf("The fibonacci number at %d is : %d \n",num,fib(num));
    return 0;
}
int fib(num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    
    return (fib(num-1))+(fib(num-2));
}




//Write a recursive function to find a fibnacci series for first 'n' numbers.
int fib(int num);

int main() {
    int num;
    
    printf("Enter the number ::");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        printf("%d\n",fib(i));
    }  
}

int fib(int num){
    if(num==1){
        return 1;
    }
    if(num==0){
        return 0;
    }
    return (fib(num-1))+(fib(num-2));
}

// Binary search(normal)
int main() {
    int arr[10]={1,2,4,5,7,8,9,11,34,54},low=0,high=10,num;
    printf("Enter a number to search ::");
    scanf("%d",&num);
    
    while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == num) {
                printf("%d is found at index %d\n",num,mid);
                break;
            } 
            else if (arr[mid] < num) {
                low = mid + 1; 
            } 
            else if (arr[mid] > num) {
                high = mid - 1; 
            } 
        }

}

// Linear Search
int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int num, found = 0;

    printf("Enter a value to search: ");
    scanf("%d", &num);

    for (int i = 0; i < 6; i++) {
        if (arr[i] == num) {
            printf("Value %d found at index %d.\n", num, i);
            found = 1;
            break;
        }
    }
    if (found==0) {
        printf("Value %d not found in the array.\n", num);
    }
    return 0;
}

################################ ARRAY #############################################


// WAP to input the price of 3 items in an array and print their final cost.
int main() {
    int cost[3];
    printf("Enter the cost of 1st Item : ");
    scanf("%d",&cost[0]);
    printf("Enter the cost of 2nd Item : ");
    scanf("%d",&cost[1]);
    printf("Enter the cost of 3rd Item :");
    scanf("%d",&cost[2]);    
    
    printf("Total sum of cost is : %d",cost[0]+cost[1]+cost[2]);

    return 0;
}

// Write a function to count the number of odd numbers in an array.
void oddnumbers(int *num,int n);

int main() {
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    oddnumbers(num,9);
    return 0;
}

void oddnumbers(int *num,int n){
    int count;
    for(int i=0;i<=n;i++){
        if(num[i]%2!=0){
            count++;
        }
    }
    printf("Total Odd numbers are : %d",count);
}



// Write a function to reverse an array.
#include <stdio.h>
void reverse(int *num,int n);
void printarr(int arr[],int n);

int main(){
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(num,10);
    printarr(num,10);
    return 0;
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
}

void reverse(int *num,int n){
    for(int i=0;i<n/2;i++){
        int firstval=num[i];
        int secondval=num[n-i-1];
        num[n-i-1]=firstval;
        num[i]=secondval;
    }   
}



// WAP to store first n fibonacci numbers.
int main(){
    int n;
    printf("Enter number n(n>2) :");
    scanf("%d",&n);
    
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    
    for(int i=2;i<=n;i++){
        fib[i] = fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);
    }
    printf("\n");
    return 0;
}



// Create a 2D array to store the tables of 2 & 3.
void tables(int tab[][10],int n,int m,int num);

int main() {
    
    int tab[2][10];
    tables(tab,0,10,5);
    tables(tab,1,10,6);
    
    for(int i=0;i<10;i++){
        printf("%d\t",tab[0][i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d\t",tab[1][i]);
    }
    
    return 0;
}

void tables(int tab[][10],int n,int m,int num){
    for(int i=0;i<m;i++){
        tab[n][i]=num*(i+1);
    }
}

// In an array of numbers find how many times does the number 'n' occurs.
#include <stdio.h>

int findnum(int arr[],int num);

int main() {
    int arr[]={1,2,3,4,3,1,2,3,2,1,3,1,2,3,4,1,2,4,5,6,1,7,8,9,10},num;
    
    printf("Enter the number : ");
    scanf("%d",&num);
    
    findnum(arr,num);
    printf("The number %d occurs %d times..!!",num,findnum(arr,num));

    return 0;

}

int findnum(int arr[],int num){
    int count=0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}


// WAP to print the largest number in an array.
int findlargest(int arr[]);

int main() {
    int arr[10];
    
    for(int i=0;i<10;i++){
        printf("Enter the %d number in an array : ",i);
        scanf("%d",&arr[i]);
    }
    
    findlargest(arr);
    printf("The largest number is : %d",findlargest(arr));
    return 0;

}

int findlargest(int arr[]){
    int largest = arr[0];
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}


//WAP to find the second largest no from an unsorted array
int main() {
    int arr[] = {5, 2, 3, 10, 1, 66, 3, 1, 4, 7};
    int largest = 0,sec_largest = 0,i;
    
    for (i = 0; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    } 
    for (i = 0; i < 10; i++) {
        if (arr[i] < largest && arr[i] > sec_largest) {
            sec_largest = arr[i];
        }
    }   
    printf("The second largest number is: %d\n", sec_largest);
}


//Multiplication of two matrix of size 3x4 and 4x2.
int main() {
    
    int matrix1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int matrix2[4][2]={{1,2},{3,4},{5,6},{7,8}};
    int matrix3[3][4]={};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            matrix3[i][j]=0;
            for (int k = 0; k < 4; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
        }
        printf("%d\t",matrix3[i][j]);
        }
        printf("\n");
    }

}

// WAP to insert an element at the end of an array

######################################## STRINGS ###################################################

// Create a String first-name,last-name to store the details fo user, and print all the characters using loop.
int main() {
    char fname[]={'P','r','a','k','h','a','r','\0'};
    char lname[]={'P','o','r','w','a','l','\0'};
    
    for(int i=0;i<7;i++){
        printf("%c",fname[i]);
    }
    
    for(int i=0;i<7;i++){
        printf("%c",lname[i]);
    }    
    return 0;
}


// Ask user to enter their firstname and print it back
int main() {
    char fname[20];
    printf("Enter your Firstname : ");
    fgets(fname,sizeof(fname), stdin);
    puts(fname);   
    return 0;
}


// Ask user to enter their full-name(with space) and print it back
int main() {
    char name[20];
    printf("Enter Your FullName : ");
    fgets(name,sizeof(name), stdin);
    puts(name);
    return 0;
}


// WAP to input users name & print it's length.
       // short menthod
int main() {
    char name[20];
    printf("Enter Your lName : ");
    fgets(name,sizeof(name),stdin);
    
    int length=strlen(name)-1;
    
    printf("The Length of you name is : %d", length);
    return 0;
}

      // long method
int length(char name[]);

int main() {
    char name[20],count=0;
    printf("Enter your name :");
    fgets(name,sizeof(name),stdin);
    
    length(name);
    printf("Length of name : %d\n", length(name));

    return 0;
}

int length(char name[]){
    int count=0;
    
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count-1;
    
}


// Take string input from user using "%c"
int main(){
    char string[100],ch;
    int i=0;
    
    printf("Enter the string :: ");
    while(ch!='\n'){
        scanf("%c",&ch);
        string[i]=ch;
        i++;
    }
    
    ch='\0';
    puts(string);
    return 0;
}


// Find the salted form of a password entered by user is the salt is "salty_prakhar" & added at the end
int main(){
    char passwd[20],saltedpasswd[50], salt[]="salty_prakhar";
    
    printf("Enter your Password :: ");
    scanf("%s",passwd);
    
    strcpy(saltedpasswd,passwd);
    strcat(saltedpasswd,salt);
    
    printf("You salted password is :: ");
    puts(saltedpasswd);
    return 0;
}


// Write a function, which takes a string and return a slice string from index 'n' to 'm'.
void slice(char string[],int start,int end);


int main() {
    char string[100];
    int start,end;
    
    printf("Enter the string ::");
    fgets(string,sizeof(string),stdin);
    
    printf("Enter the starting p ::");
    scanf("%d",&start);
    
    printf("Enter the Ending point ::");
    scanf("%d",&end);    
    
    slice(string,start,end);

    return 0;
}

void slice(char string[],int start,int end){
    int j=0;
    char newstr[100];
    for(int i=start;i<=end;i++,j++){
        newstr[j]=string[i];
    }
    puts(newstr);
} 


// Write a function to count the occurence of vowels in a string.
void countvowels(char string[]);

int main() {
    char string[100];
    
    printf("Enter the string ::");
    fgets(string,sizeof(string),stdin);
    
    countvowels(string);

    return 0;
}

void countvowels(char string[]){
    int count=0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
            count++;
        }
    }
    printf("Total no. of vowels : %d",count);
}


// Check whether a given character is present in string or not ??
void checkchar(char string[],char chr);

int main() {
    char string[100],chr;
    
    printf("Enter the string ::");
    fgets(string,sizeof(string),stdin);
    
    printf("Enter the character ::");
    scanf("%c",&chr);
    
    checkchar(string,chr);

    return 0;
}

void checkchar(char string[],char chr){
    int count=0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==chr){
            count++;
        }
    }
    if(count!=0){
        printf("%c is present in string..!!",chr);
    }
    else{
        printf("%c is not present in string..!!",chr);
    }
}


// WAP to convert all the lowercase vowels to uppercase vowels
void convertltu(char string[]);

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    convertltu(string);

    printf("Modified string: %s\n", string);

    return 0;
}

void convertltu(char string[]) {

    for (int i=0;string[i]!='\0';i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            string[i] = toupper(string[i]);
        }
    }
}




######################################## STRUCTURES #################################################

// WAP to store the data of 3 students
struct student {
  int rollno;
  char name[20];
  float cgpa;
};

int main() {
    struct student s[3];
    for(int i=1;i<4;i++){
        printf("Enter your Name :: ");
        scanf("%s", s[i].name);
      
        printf("Enter your Rollno. :: ");
        scanf("%d",&s[i].rollno);
      
        printf("Enter your CGPA :: ");
        scanf("%f",&s[i].cgpa);
    }
    printf("\n\n");
    for(int j=1;j<4;j++){
        printf("Your Name is : %s\n",s[j].name);
        printf("Your Rollno is : %d\n",s[j].rollno);
        printf("Your cgpa is : %f\n",s[j].cgpa);
    }

  return 0;
}


// Enter address(houseno., block, city, state) of 5 people.
struct address {
    int houseno;
    char block[2];
    char city[20];
    char state[20];
};

int main() {
    struct address addrs[5];

    for (int i = 0; i < 5; i++) {

        printf("House-no.: ");
        scanf("%d", &addrs[i].houseno);

        printf("Block: ");
        scanf("%s", &addrs[i].block);

        printf("City: ");
        scanf("%s", &addrs[i].city);
        
        printf("State: ");
        scanf("%s", &addrs[i].state);

        printf("\n");
    }

    printf("Users Address details:\n");
    for (int i = 0; i < 5; i++) {
        printf("House-no: %d\n", addrs[i].houseno);
        printf("Block: %s\n", addrs[i].block);
        printf("City: %s\n", addrs[i].city);
        printf("State: %s\n", addrs[i].state);
        printf("\n");
    }

    return 0;
}


// Create a sturctutre to store vectors. Then make a function to return sum of 2 vectors
struct vector{
    int x;
    int y;
};

void calcsum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    struct vector v1={1,4};
    struct vector v2={4,2};
    struct vector sum={0,0};
    calcsum(v1,v2,sum);
    return 0;
}

void calcsum(struct vector v1, struct vector v2, struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    
    printf("Sum of vectors is :%di+%dj",sum.x,sum.y);
}


// Create a structure to store complex numbers
struct complex{
    int real;
    int imgnry;
};

int main(){
    struct complex numbers={5,2};
    struct complex *ptr=&numbers;
    printf("Real number is :: %d\n",ptr->real);
    printf("Imaginary number is :: %d\n",ptr->imgnry);
    return 0;
}


// Make a structure to store Bank Account Information(acc_no.,name ) of a customer using alias.
typedef struct AccountInformation {
    int account_no;
    char name[30];
} accinfo;

int main() {
    accinfo user1 = {1729369812, "Prakhar Porwal"};
    accinfo user2 = {1729897323, "Adarsh Dwivedi"};
    accinfo user3 = {1726534345, "Udai Jaiswal"};
    accinfo user4 = {1726547634, "Utkarsh Tiwari"};
    accinfo user5 = {1721232465, "Achyutanand Chaudhary"};
    accinfo users[] = {user1, user2, user3, user4, user5};
    
    for (int i = 0; i < 5; i++) {
        printf("Account No ::%d \t Name :: %s\n", users[i].account_no, users[i].name);
    }

    return 0;
}


// Make a system that acan store info. of all student,teachers & admin of your college in the form of sttuctures

#################################### FILE I/O #########################################

// Make a program to read 5 integers from a file.
int main(){
    FILE *fptr;
    fptr=fopen("test.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("number :: %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number :: %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number :: %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number :: %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number :: %d\n",n);
    
    fclose(fptr);
    
}

// WAP to write all the odd numbers from 1 to n in a file
int main(){
    int num,i=0;
    printf("Enter the Number ::");
    scanf("%d",&num);
    FILE *fptr;
    fptr=fopen("test.txt","w");
    
    while(i<=num){
        if(i%2!=0){
            fprintf(fptr,"%d\n",i);
            
        }
        i++;
    }
    fclose(fptr);
    
}


// 2 numbers(a&b) are written in a file. WAP to replace them with their sum.
int main(){
    int i=0,num;
    FILE *fptr;
    fptr=fopen("test.txt","r");
    
    fscanf(fptr,"%d",&num);
    printf("%d\n",num);
    int num1=num;
    fscanf(fptr,"%d",&num);
    printf("%d\n",num);
    int num2=num;
    
    printf("Sum :: %d",num1+num2);
    fclose(fptr);
    
}


// WAP to read string from a file.
int main(){
    char chr;
    FILE *fptr;
    fptr=fopen("test.txt","r");
    chr=fgetc(fptr);
    while(chr!=EOF){
        printf("%c",chr);
        chr=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    
}


// Format the information of 5 students(name,marks,course,cgpa) in a table like structure in a file.


########################### SORTING ###################################

// Bubble sorting
#include <stdio.h>
int main()
{
  int arr[100], n, i, j, temp;
  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (i = 0 ; i < n - 1; i++){
    for (j = 0 ; j < n - i - 1; j++){
      if (arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j]   = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++)
     printf("%d\n", arr[i]);
 return 0;
}

//Selection Sort
#include <stdio.h>
int main() {
   int arr[10]={6,12,0,18,11,99,55,45,34,2};
   int n=10; 
   int i, j, position, temp;
   
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         temp = arr[i];
         arr[i] = arr[position];
         arr[position] = temp;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}


###########################################
//Function Declaration
int volume(int l,int b,int h); // side = 4, (l,b,h) --> parameters

int main() {
    int l,b,h;
    
    //Input
    printf("Enter Length ::"); // eg. l = 2
    scanf("%d",&l);
    printf("Enter Breadth ::"); // eg. b = 3
    scanf("%d",&b);
    printf("Enter Height ::"); // eg. h = 2
    scanf("%d",&h);
    
    //Function Call
    printf("%d",volume(l,b,h)); // volume(2,3,2)
    
    return 0;
}

//Function ka code
int volume(int l,int b,int h){
    return l*b*h;
}

// Check Whether a number is Palidrome or not ??
int main() {
    int num,temp,rev=0,digit;
    printf("Enter a number ::");
    scanf("%d",&num);
    
    temp = num;
    
    if(temp % 10 == 0 || temp < 10){
        printf("Not Palindrome..!");
    }
    
    while(temp > 0){
        digit = temp % 10;
        rev = (rev * 10) + digit;
        temp = temp/10;
    }
    if(num == rev){
        printf("Number is Palindrome.!!");
    }
    else{
        printf("Number is not Palindrome..!");
    }
}

//Check whether number is Armstrong or not ??
#include <stdio.h>
int main() {
    int num,temp,digit,result=0;
    printf("Enter a number ::");
    scanf("%d",&num);
    
    temp = num;
    
    while(temp > 0){
        digit = temp % 10;
        result += digit * digit * digit;
        temp = temp/10;
    }
    if(result == num){
        printf("Palindrome..!!");
    }
    else{
        printf("Not Palindrome..!!");
    }

    return 0;
}

//Program to print 'n' number of Armstrong Numbers
#include <stdio.h>
int main() {
    int limit,temp,digit,result;
    printf("Enter a Limit ::");
    scanf("%d",&limit);
    
    for(int i=0;i <= limit;i++){
        result = 0;
        temp = i;
        while(temp > 0){
            digit = temp % 10;
            result += digit * digit * digit;
            temp = temp/10;
        }
        if(result == i){
            printf("%d\n",result);
        }
    }

    return 0;
}