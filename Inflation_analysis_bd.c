#include <stdio.h>
#include <math.h>
int main (){

FILE *file;
file = fopen("bangladesh_inflation.csv", "r");
if (file == NULL)
{
  printf("Oops...Could not open the file!\n\n");
  return 1;
}

printf ("Yes! File opened successfully!\n\n");

char data [200];
fgets(data,sizeof(data),file);   
int year;
float inflation;
float sum = 0;
int count = 0;
float highest_inflation = -1;
int highest_inflation_year = 0;
float lowest_inflation = 999;
int lowest_inflation_year = 0;
float last_inflation = 0;
float diff = 0;
float s1 = 0;
float s2 = 0;
float s3 = 0;
int c1 = 0;
int c2 = 0;
int c3 = 0;
float sq1 = 0;
float sq2 = 0;
float sq3 = 0;


while ( fgets(data,sizeof(data),file) != NULL )
{sscanf(data,"%d,%f",&year,&inflation);
sum = sum + inflation;
    count++;
printf ("Bangladesh inflation rate for %d was %.2f,\n\n", year,inflation);

 if (inflation > highest_inflation)
 {
     highest_inflation = inflation;
     highest_inflation_year = year;

 }

 if ( inflation < lowest_inflation)
    {lowest_inflation = inflation;
    lowest_inflation_year = year;}

 if (count > 1)
 {
     diff = inflation - last_inflation;

     if (diff>0)
        {printf("Inflation increased %.2f.\n\n\n",diff);}
     else if (diff<0)
     {printf("Inflation decreased %.2f\n\n\n",-diff);}
     else printf("Inflation is same\n\n\n.");

 }
 last_inflation = inflation;

 if (year >= 1987 && year <= 1999)
    {
        s1 = s1 + inflation;
        c1++;
        sq1 = sq1 + inflation * inflation;
    }
    if (year >= 2000 && year <= 2012)
    {
        s2 = s2 + inflation;
        c2++;
        sq2 = sq2 + inflation * inflation;
    }
    if (year >= 2013 && year <= 2025)
    {
        s3 = s3 + inflation;
        c3++;
        sq3 = sq3 + inflation * inflation;
    }
        }
float sd1;
float sd2;
float sd3;
sd1 = sqrt((sq1/c1) - ((s1/c1) * (s1/c1)));
sd2 = sqrt((sq2/c2) - ((s2/c2) * (s2/c2)));
sd3 = sqrt((sq3/c3) - ((s3/c3) * (s3/c3)));
float avg = sum/count;
printf ("\nAverage of the inflation is %.2f%%\n\n", avg);
printf ("\nHighest inflation in %d was %.2f%%\n\n",highest_inflation_year,highest_inflation);
printf ("\nLowest inflation in %d was %.2f%%\n\n",lowest_inflation_year,lowest_inflation);
printf("\nTotal sample years = %d\n\n", count);

printf("Average inflation from 1987 to 1999: %.2f%%\n\n",s1/c1);
printf("Average inflation from 2000 to 2012: %.2f%%\n\n",s2/c2);
printf("Average inflation from 2013 to 2025: %.2f%%\n\n",s3/c3);
printf("Standard deviation from 1987 to 1999: %.2f\n\n", sd1);
printf("Standard deviation from 2000 to 2012: %.2f\n\n", sd2);
printf("Standard deviation from 2013 to 2025: %.2f\n\n", sd3);


fclose (file);

return 0;}






