#include <stdio.h>
 int main()
 {
 	int Toan,Ly,Hoa;
 	int Tong,TB;
 	
 	printf("Enter pirst integer\n");
 	scanf("%d", &Toan);
 	
 	printf("Enter pirst integer\n");
 	scanf("%d", &Ly);
 	
 	printf("Enter pirst integer\n");
 	scanf("%d", &Hoa);
 	
 	Tong = Toan + Ly + Hoa ;
 	printf(" Tong la %d\n", Tong);
 	
 	TB = Tong / 3 ;
 	printf(" TB la %d\n", TB);
 	
 	return 0;
}
