#include<stdio.h>
#include<string.h>
double sin(),cos();
int main(){
    int size=30;/*change the value to control the size*/
    int y_posi=0;/*change the value to control the y-position of the donut (positive = up)*/
    int x_posi=0;/*change the value to control the x-position of the donut (positive = right)*/
    float speed_x=1.0;/*change the value to control the rotating speed about x-axis*/
    float speed_z=1.0;/*change the value to control the rotating speed about z-axis*/
    float R_1=1.0;/*thichness*/
    float R_2=2.0;/*radius*/
    float A=0,B=0,i,j,z[1760];
    char b[1760];
    printf("\x1b[2J");
    for(;;){memset(b,32,1760);
        memset(z,0,7040);
        for(j=0;6.28>j;j+=0.07)
            for(i=0;6.28>i;i+=0.02){
                float c=sin(i),d=R_1*cos(j),e=sin(A),f=sin(j),g=cos(A),h=d+R_2,D=1/(c*h*g+R_1*f*e+5),l=cos(i),m=cos(B),n=sin(B),t=c*h*e-f*g*R_1;
                int x=40+size*D*(l*h*m+t*n)+x_posi,
                        y=12+size/2*D*(l*h*n-t*m)-y_posi,
                        o=x+80*y,
                N=8*(l*d/R_1*n-g*d/R_1*c-e*f+m*(g*f-d/R_1*e*c));
                if(22>y&&y>0&&x>0&&80>x&&D>z[o]){
                    z[o]=D;
                    b[o]=".,-~:;=!*#$@"[N>0?N:0];
                }
            }
        printf("\x1b[H");
        for(int k=0;1761>k;k++)putchar(k%80?b[k]:10);
        A+=0.02*speed_x;B+=0.01*speed_z;
    }
}