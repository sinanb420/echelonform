#include <stdio.h>
int main()
{
	float matris[3][3]={1,2,3, 2,3,2, 3,1,4}; // Kendi kafama göre bir matris tanýmladým, 3*3 lük bir matrisi kullanicidan 
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
		
   katsayi1=(matris[1][0])/(matris[0][0]); //katsayý ki bu sayi ile 0 yapýcaz.
      printf("\nkatsayi1  %f  \n",katsayi1); //burada katsayiyi görüyoruz.
      matris[1][0]=((matris[0][0])*katsayi1)-matris[1][0]; //bu islemde ise 2.satirin 1. elemanini sýfýr yapýyoruz.
      matris[1][1]=((matris[0][1])*katsayi1)-matris[1][1]; // 2.satýr 2.eleman için
      matris[1][2]=((matris[0][2])*katsayi1)-matris[1][2]; //   ""    3.  ""     ""
      
      
	katsayi2=(matris[2][0])/(matris[0][0]);        
	printf("\nkatsayi2  %f  \n",katsayi2);
	matris[2][0]=((matris[0][0])*katsayi2)-matris[2][0]; //ayni islemler 3.satirin ilk elemanini 0 yapmak için
	matris[2][1]=((matris[0][1])*katsayi2)-matris[2][1];
	matris[2][2]=((matris[0][2])*katsayi2)-matris[2][2];
	
	
	katsayi3=(matris[2][1])/(matris[1][1]);
	printf("\nkatsayi3  %f\n",katsayi3);
	matris[2][1]=((matris[1][1])*katsayi3)-matris[2][1]; //3. satirin ikinci elamanin 0 yapma islemi//
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

