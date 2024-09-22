/*

5. Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : 
  Go to the editor
  Temp < 0 then Freezing weather
  Temp 0-10 then Very Cold weather
  Temp 10-20 then Cold weather
  Temp 20-30 then Normal in Temp
  Temp 30-40 then Its Hot
  Temp >=40 then Its Very Hot

  */

 #include<stdio.h>
 int main(int argc, char const *argv[])
 {
    
    int temperature;
    printf("Enter Temperature: ");
    scanf("%d",&temperature);

    if (temperature>40)
    {
        printf("Its Very Hot");
    }
    else if (temperature>=30)
    {
       printf("Its Hot");
    }
    else if (temperature>=20)
    {
       printf("Normal in Temp");
    }
    else if (temperature>=10)
    {
       printf("Cold weather");
    }
    else if(temperature>=0){
        printf("Very Cold weather");
    }
    else{
        printf("Freezing weather");
    }
    
    return 0;
 }
 
