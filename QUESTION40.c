# include<stdio.h>// write a function to print hot or cold as per the temperature.
void Temp(float celcius);
int main() {
   Temp(37.5);
    return 0;
}
void Temp(float celcius) {
    if (celcius>=25.00){
        printf("it is hot");
    }
    else{
        printf("it is cold");
    }
    
}
