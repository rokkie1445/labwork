#include <stdio.h>


int main(){
int x;
printf("Please enter your grade:");
scanf("%d",&x);
if(x<45 && x>=0)
{
    printf("You failed the course");
}
else if(x>=45 && x<=100)
{
printf("You passed the course");
}
else
{
printf("Error");
}




return(0);
}