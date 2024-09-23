#include<stdio.h>
float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_celsius(float fahrenheit);
float celsius_to_kelvin(float celsius);
float kelvin_to_celsius(float kelvin);
float fahrenheit_to_kelvin(float fahrenheit);

float kelvin_to_fahrenheit(float kelvin);

int main(){
    int choice;
    float temp,convert_temp;
    printf("temperature converter\n");
    printf("choose the conversion type:\n");
    printf("1.celsius to fahrenheit\n");
    printf("2.fahrenheit to celsius\n");
    printf("3.celsius to kelvin\n");
    printf("4.kelvin to celsius\n");
    printf("fahrenheit to kelvin\n");
    printf("kelvin to fahrenheit\n");
    printf("enter your choice from 1 to 6\n");
    scanf("%d",&choice);
    printf("enter the temperature value");
    scanf("%f",&temp);
    switch(choice){
        case 1:convert_temp= celsius_to_fahrenheit(temp);
                printf("%.2f degree celsius=%.2f degree fahrenheit\n", temp,convert_temp);
                break;
        case 2:convert_temp= fahrenheit_to_celsius(temp);
                printf("%.2f degree fahrenheit=%.2f degree celsius\n",temp,convert_temp);
                break;
         case 3:convert_temp=celsius_to_kelvin(temp);
               printf("%.2f degree celsius=%.2f kelvin\n", temp,convert_temp);
               break;
        case 4:convert_temp=kelvin_to_celsius(temp);
              printf("%.2f kelvin=%.2f degree celsius\n",temp,convert_temp);
              break;
        case 5:convert_temp=fahrenheit_to_kelvin(temp);
               printf("%.2f degree fahrenheit=%.2f kelvin\n",temp,convert_temp);
               break;
        case 6:convert_temp=kelvin_to_fahrenheit(temp);
               printf("%.2f kelvin=%.2f degree fahrenheit\n", temp,convert_temp);
               break;
        default: printf("invalid choice\n");
                break;
    }
    return 0;
}
float celsius_to_fahrenheit(float celsius){
    return (celsius*9/5)+32;
}
float fahrenheit_to_celsius(float fahrenheit){
    return (fahrenheit-32)*5/9;
}
float celsius_to_kelvin(float celsius){
    return celsius+273.15;
}
float kelvin_to_celsius(float kelvin){
    return kelvin-273.15;
}
float fahrenheit_to_kelvin(float fahrenheit){
    return celsius_to_kelvin(fahrenheit_to_celsius(fahrenheit));
}
float kelvin_to_fahrenheit(float kelvin)
{
    return celsius_to_fahrenheit(kelvin_to_celsius(kelvin));
}