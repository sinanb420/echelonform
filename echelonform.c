#include <stdio.h>
int main()
{
	float matris[3][3]={1,2,3, 2,3,2, 3,1,4}; // Kendi kafama g�re bir matris tan�mlad�m, 3*3 l�k bir matrisi kullan�c�dan 
	//girmesini de isteyebilirdim.
	int i;
	int j;
	float katsayi1,katsayi2,katsayi3;
	printf("Verilen matris\n");
	for(i=0;i<3;i++)

{

	for(j=0;j<3;j++)
		printf("     %8f",matris[i][j]);
	    printf("\n");
}
		
   katsayi1=(matris[1][0])/(matris[0][0]); //katsay� ki bu say� ile 0 yap�caz.
      printf("\nkatsayi1  %f  \n",katsayi1); //burada katsay�y� g�r�yoruz.
      matris[1][0]=((matris[0][0])*katsayi1)-matris[1][0]; //bu i�lemde ise 2.satir�n 1. eleman�n� s�f�r yap�yoruz.
      matris[1][1]=((matris[0][1])*katsayi1)-matris[1][1]; // 2.sat�r 2.eleman i�in
      matris[1][2]=((matris[0][2])*katsayi1)-matris[1][2]; //   ""    3.  ""     ""
      
      
	katsayi2=(matris[2][0])/(matris[0][0]);        
	printf("\nkatsayi2  %f  \n",katsayi2);
	matris[2][0]=((matris[0][0])*katsayi2)-matris[2][0]; //ayni i�lemler 3.satirin ilk elemanini 0 yapmak i�in
	matris[2][1]=((matris[0][1])*katsayi2)-matris[2][1];
	matris[2][2]=((matris[0][2])*katsayi2)-matris[2][2];
	
	
	katsayi3=(matris[2][1])/(matris[1][1]);
	printf("\nkatsayi3  %f\n",katsayi3);
	matris[2][1]=((matris[1][1])*katsayi3)-matris[2][1]; //3. satirin ikinci elamanin 0 yapma i�lemi//
	matris[2][2]=((matris[1][2])*katsayi3)-matris[2][2];
	matris[2][2]=matris[2][2]/matris[2][2];
	printf("\n echelon form of matrix\n");
	
	
	 
	 for(i=0;i<3;i++)

{

	for(j=0;j<3;j++)
		printf("     %8f",matris[i][j]);
	printf("\n");
}

	return 0;

}

