//program to calculate electricity bill
/*
program to calculate electricity bill 
Author:stella jepkirui 
Date:10/10/2024
*/
# include<stdio.h>
int main(){
int customerID;
char customername;
float unitconsumed,totalbill, surchange;
printf("enter customerID:");
scanf("%d",& customerID);
printf("enter customername:");
scanf("%c",&customername);
printf("enter unitconsumed:");
scanf("%f",&unitconsumed);
printf("enter totalbill:");
scanf("%f",totalbill);
 calculate unitconsumed 
if (0<=199){
bill=unitconsumed*1.20;
printf(" charge is %.2f\n",totalbill); 
}
 else if(200<400){
bill=unitconsumed*1.50;
printf("charge is %.2f\n",totalbill);
}
else if(400<600){
bill=unitconsumed*1.80;
printf("charge is %.2f\n",totalbill);
}
if (totalbill>400){
surchange =totalbill*0.15;
printf("surchange id %.2f\n",surchange);
}
else if(bill>=100)
//totalbill=bill*surchange;
printf("totalbill is%f\n",totalbill);
printf("customerID is%d\n", customerID);
printf("customername is%c\n",customername);
printf("unitconsumed is%f\n",unitconsumed);
return 0;
}




