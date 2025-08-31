# include<stdio.h>
float converttemp(float celcius);
int main() {
    printf("fahrenheit is : %f" ,converttemp(32));
    return 0;
    

}
float converttemp(float celcius) {
    if( celcius==0.00) {
        return 32.00;
    }
   
    return celcius *9.0/5.0 + 32.00;
}
