# include<stdio.h>
int calculateperc(int science, int math, int sanskrit);
int main() {
    int science= 99;
    int math = 99;
    int sanskrit = 99;
    printf(" percentage is : %d", calculateperc(science, math,sanskrit));

}
int calculateperc(int science, int math, int sanskrit ) {
    return ((science+math+sanskrit)/3);
}