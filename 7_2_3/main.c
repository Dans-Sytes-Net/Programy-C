#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pkt{
    double x,y,z;
};

double odleglosc(struct pkt tab[], int n){
    double min,temp;
    min=sqrt(pow(tab[1].x-tab[0].x,2))+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2);
    for(int i=0;i<n;i++){
        for(int o=i+1;o<n;o++){
             temp=sqrt(pow(tab[o].x-tab[i].x,2))+pow(tab[o].y-tab[i].y,2)+pow(tab[o].z-tab[i].z,2);
        }
        if(temp<min) min=temp;
    }
    return min;
}

int main()
{
    struct pkt tab[] = {{.x=5,.y=7,.z=8},
                        {.x=3,.y=4,.z=5},
                        {.x=1,.y=2,.z=3},
                        {.x=1,.y=2,.z=3}};
    printf("%lf",odleglosc(tab,2));
    return 0;
}
