#include <stdio.h>

void main()

{
	int kiinan_vakiluku = 1400000000;
	int autojen_lukumaara = 100;
	char merkki = 'A';
	double paino = 100;


	kiinan_vakiluku = kiinan_vakiluku + 100;
	autojen_lukumaara = autojen_lukumaara + 200;

	printf("\nAnna kiinan vakiluku ");
	scanf_s("%d", &kiinan_vakiluku); //luetaan arvo kiinan_vakiluku
	printf("\nAnna autojen lukumaara ");
	scanf_s("%d", &autojen_lukumaara);
	printf("\nAnna merkki ");
	scanf_s("%c", &merkki);
	printf("\nAnna paino ");
	scanf_s("%lf", &paino);


		printf("\nKiinan vakiluku on %d", kiinan_vakiluku);
		printf("\nautojen_lukumaara on %d", autojen_lukumaara);
		printf("\nautojen_lukumaara on %c", autojen_lukumaara);

		getchar();
	

}
