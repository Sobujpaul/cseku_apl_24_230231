#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);

int main(){
    float a=5.0,b=10.0,side=4.0,rad=5.0;

    printf("AREA IS:%f\n",squareArea(side));

    printf("AREA IS:%f\n",circleArea(rad));

    printf("AREA IS:%f\n",rectangleArea(a,b));

return 0;
}
float squareArea(float side){
return side*side;
}
float circleArea(float rad){

return 3.14*rad*rad;
}
float rectangleArea(float a,float b){
return a*b;
}

