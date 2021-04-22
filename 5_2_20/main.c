#include <stdio.h>

char * zegar(int godz, int min , int sek)
{
	char *wyn = malloc(9*sizeof(char));
	sprintf(wyn,"%02d:%02d:%02d",godz ,min,sek);
	return wyn;
}

int main()
{
	int godz = 9;
	int min = 12;
	int sek = 4;
	printf("%s",zegar(godz,min,sek));

}
