#include <stdio.h>
#include <stdlib.h>

struct pkt{
    double x,y,z;
};

void wyspisz_struct_tab(struct pkt tab[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Index %d: %lf %lf %lf\n",i,tab[i].x,tab[i].y,tab[i].z);
    }
    printf("\n");
}

void przepisz(struct pkt tab1[] , struct pkt tab2[],int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i].x=tab1[i].x;
        tab2[i].y=tab1[i].y;
        tab2[i].z=tab1[i].z;
    }
}

int main()
{
    struct pkt tab[] = {{.x=5,.y=7,.z=8},{.x=3,.y=4,.z=5},{.x=1,.y=2,.z=3},{.x=1,.y=2,.z=3}};
    struct pkt tab2[] = {{.x=7,.y=3,.z=9},{.x=1,.y=2,.z=4},{.x=7,.y=5,.z=4},{.x=9,.y=2,.z=5}};
    wyspisz_struct_tab(tab,4);
    wyspisz_struct_tab(tab2,4);
    przepisz(tab,tab2,4);
    wyspisz_struct_tab(tab,4);
    wyspisz_struct_tab(tab2,4);
    return 0;
}
