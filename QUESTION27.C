# include<stdio.h>// final price of the product after counting of gst.
void calculatePrice( float value);
int main() {
    float value =100.00;
    calculatePrice(value);
    return 0;

}
void calculatePrice( float value) {
    value= value + (value * 0.18);
    printf("final price is : %f" ,value );
}