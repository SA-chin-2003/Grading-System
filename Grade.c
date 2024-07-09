#include<stdio.h>
int main()
{
    //code for  Grade System//
    printf("....Welcome To the Marks Portal....\n");
    printf("Enter Your Name- ");
    char name[50];
    scanf("%s",&name);
    printf("Hiii %s,\n",name);
    printf("Enter Total Marks of Your Exam = \n");
    float marks1;
    scanf("%f",&marks1);
    printf("Enter Your Secured Marks= \n");
    float marks2;
    scanf("%f",&marks2);
    float percentage = (marks2/marks1)*100;
    if(marks2 > marks1){
            printf("Invalid\n");
    }
    else{
    printf("Your Total Percentage is = %.2f\n",percentage);
    if(100>= percentage && percentage >= 90){
        printf("Your credited Grade is O. \n");
    }
    else if(90> percentage && percentage >= 80){
        printf("Your credited Grade is E. \n");
    }
    else if(80> percentage && percentage >= 70){
        printf("Your credited Grade is A. \n");
    }
        else if(70> percentage && percentage >= 60){
            printf("Your credited Grade is B. \n");
        }
        else if(60> percentage && percentage >= 50){
            printf("Your credited Grade is C. \n");
        }
        else if(50> percentage && percentage >= 37){
            printf("Your credited Grade is D. \n");
        }
    else{
       printf("Sorry!!! You have got failed \n");
    }
    }
    printf("Thank You for visiting our Portal\n");
    printf("........ALL THE BEST :)........\n");
    printf("....SLAY YOUR UPCOMING EXAMS....\\/");
return 0;
}

