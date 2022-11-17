#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int y;
	int z = 0;
	int binNumb1 [] = {0, 0, 0, 0, 0, 0 ,0 ,0};
	int binNumb2 [] = {0, 0, 0, 0, 0, 0 ,0 ,0};
	int binNumb3 [] = {0, 0, 0, 0, 0, 0 ,0 ,0};
	printf ("Please Enter a Number: ");
	scanf("%d", &x);
	printf ("Please Enter a Number: ");
	scanf("%d", &y);
	
	if(x > 127){
		printf("The Number you entered need more than 8 bits\n");
	}
	
	else if(x < -128){
		printf("The Number you entered need more than 8 bits\n");
	}
	
	else if(x < 0){
		//printf("the number is: %d\n", x);
	    x *= -1;
		
		if (x >= 128){
			x -= 128;
		    binNumb1 [7] = 1;
		}
		
		if (x >= 64 && x <= 127){
		    x -= 64;
		    binNumb1 [6] = 1;
		}
		if (x >= 32 && x < 64){
		    x -=32;
		    binNumb1 [5] = 1;
		}
		if (x >= 16 && x < 32){
		    x -=16;
		    binNumb1 [4] = 1;
		}
		if (x >= 8 && x < 16 ){
		    x -=8;
		    binNumb1 [3] = 1;
		}
		if (x >= 4 && x < 8){
		    x -=4;
		    binNumb1 [2] = 1;
		}
		if (x >= 2 && x < 4){
		    x -=2;
		    binNumb1 [1] = 1;
		}
		if (x >= 1 && x < 2){
		    x -=1;
		    binNumb1 [0] = 1;
		}
	
		// 1'st Complement start
	
		if (binNumb1 [0] == 0){
		    binNumb1 [0] = 1;
		}
		else {
		    binNumb1 [0] = 0;
		}
		if (binNumb1 [1] == 0){
		    binNumb1 [1] = 1;
		}
		else {
		    binNumb1 [1] = 0;
		}
		if (binNumb1 [2] == 0){
		    binNumb1 [2] = 1;
		}
		else {
		    binNumb1 [2] = 0;
		}
		if (binNumb1 [3] == 0){
		    binNumb1 [3] = 1;
		}
		else {
		    binNumb1 [3] = 0;
		}
		if (binNumb1 [4] == 0){
		    binNumb1 [4] = 1;
		}
		else {
		    binNumb1 [4] = 0;
		}
		if (binNumb1 [5] == 0){
		    binNumb1 [5] = 1;
		}
		else {
		    binNumb1 [5] = 0;
		}
		if (binNumb1 [6] == 0){
		    binNumb1 [6] = 1;
		}
		else {
		    binNumb1 [6] = 0;
		}
		if (binNumb1 [7] == 0){
		    binNumb1 [7] = 1;
		}
		else {
		    binNumb1 [7] = 0;
		}
		
		// 1'st Complement end
		
		// 2'nd Complement start
		if(binNumb1[0] == 0){
		    binNumb1 [0] = 1;
		}
		else if(binNumb1 [0] == 1 && binNumb1 [1] == 0){
		    binNumb1 [0] = 0;
		    binNumb1 [1] = 1;
		}
		else if(binNumb1 [0] == 1 && binNumb1 [1] == 1 && binNumb1 [2] == 0){
		    binNumb1 [0] = 0;
		    binNumb1 [1] = 0;
		    binNumb1 [2] = 1;
		}
		else if(binNumb1 [0] == 1 && binNumb1 [1] == 1 && binNumb1 [2] == 1 && binNumb1 [3] == 0){
		    binNumb1 [0] = 0;
		    binNumb1 [1] = 0;
		    binNumb1 [2] = 0;
		    binNumb1 [3] = 1;
		}
		else if(binNumb1 [0] == 1 && binNumb1 [1] == 1 && binNumb1 [2] == 1 && binNumb1 [3] == 1 && binNumb1 [4] == 0){
		    binNumb1 [0] = 0;
		    binNumb1 [1] = 0;
		    binNumb1 [2] = 0;
		    binNumb1 [3] = 0;
		    binNumb1 [4] = 1;
		}
		else if(binNumb1 [0] == 1 && binNumb1 [1] == 1 && binNumb1 [2] == 1 && binNumb1 [3] == 1 && binNumb1 [4] == 1 && binNumb1 [5] == 0){
		    binNumb1 [0] = 0;
		    binNumb1 [1] = 0;
		    binNumb1 [2] = 0;
		    binNumb1 [3] = 0;
		    binNumb1 [4] = 0;
		    binNumb1 [5] = 1;
		}
		else if(binNumb1 [0] == 1 && binNumb1 [1] == 1 && binNumb1 [2] == 1 && binNumb1 [3] == 1 && binNumb1 [4] == 1 && binNumb1 [5] == 1 && binNumb1 [6] == 0){
		    binNumb1 [0] = 0;
		    binNumb1 [1] = 0;
		    binNumb1 [2] = 0;
		    binNumb1 [3] = 0;
		    binNumb1 [4] = 0;
		    binNumb1 [5] = 0;
		    binNumb1 [6] = 1;
		}
		else if(binNumb1 [0] == 1 && binNumb1 [1] == 1 && binNumb1 [2] == 1 && binNumb1 [3] == 1 && binNumb1 [4] == 1 && binNumb1 [5] == 1 && binNumb1 [6] == 1 && binNumb1 [7] == 0){
		    binNumb1 [0] = 0;
		    binNumb1 [1] = 0;
		    binNumb1 [2] = 0;
		    binNumb1 [3] = 0;
		    binNumb1 [4] = 0;
		    binNumb1 [5] = 0;
		    binNumb1 [6] = 0;
		    binNumb1 [7] = 1;
		}
		
		
		printf ("The 1st Binary number is : %d %d %d %d %d %d %d %d\n", binNumb1 [7], binNumb1[6], binNumb1[5], binNumb1[4], binNumb1[3], binNumb1[2], binNumb1[1], binNumb1[0]);
		
		// 2'nd Complement end
	}
	
	else if (x > 0){
		
		//printf ("The number is: %d\n", x);
		
		if (x >= 64 && x <= 127){
		    x -= 64;
		    binNumb1 [6] = 1;
		}
		if (x >= 32 && x < 64){
		    x -=32;
		    binNumb1 [5] = 1;
		}
		if (x >= 16 && x < 32){
		    x -=16;
		    binNumb1 [4] = 1;
		}
		if (x >= 8 && x < 16 ){
		    x -=8;
		    binNumb1 [3] = 1;
		}
		if (x >= 4 && x < 8){
		    x -=4;
		    binNumb1 [2] = 1;
		}
		if (x >= 2 && x < 4){
		    x -=2;
		    binNumb1 [1] = 1;
		}
		if (x >= 1 && x < 2){
		    x -=1;
		    binNumb1 [0] = 1;
		}
		
		printf ("The 1st Binary Number is : %d %d %d %d %d %d %d %d\n", binNumb1 [7],binNumb1[6], binNumb1[5], binNumb1[4], binNumb1[3], binNumb1[2], binNumb1[1], binNumb1[0]);
	}

	
	if(y > 127){
		printf("The Number you entered need more than 8 bits\n");
	}
	
	else if(y < -128){
		printf("The Number you entered need more than 8 bits\n");
	}
	
	else if(y < 0){
		//printf("the number is: %d\n", y);
	    y *= -1;
		
		if (y >= 128){
			y -= 128;
		    binNumb2 [7] = 1;
		}
		
		if (y >= 64 && y <= 127){
		    y -= 64;
		    binNumb2 [6] = 1;
		}
		if (y >= 32 && y < 64){
		    y -=32;
		    binNumb2 [5] = 1;
		}
		if (y >= 16 && y < 32){
		    y -=16;
		    binNumb2 [4] = 1;
		}
		if (y >= 8 && y < 16 ){
		    y -=8;
		    binNumb2 [3] = 1;
		}
		if (y >= 4 && y < 8){
		    y -=4;
		    binNumb2 [2] = 1;
		}
		if (y >= 2 && y < 4){
		    y -=2;
		    binNumb2 [1] = 1;
		}
		if (y >= 1 && y < 2){
		    y -=1;
		    binNumb2 [0] = 1;
		}
	
		// 1'st Complement start
	
		if (binNumb2 [0] == 0){
		    binNumb2 [0] = 1;
		}
		else {
		    binNumb2 [0] = 0;
		}
		if (binNumb2 [1] == 0){
		    binNumb2 [1] = 1;
		}
		else {
		    binNumb2 [1] = 0;
		}
		if (binNumb2 [2] == 0){
		    binNumb2 [2] = 1;
		}
		else {
		    binNumb2 [2] = 0;
		}
		if (binNumb2 [3] == 0){
		    binNumb2 [3] = 1;
		}
		else {
		    binNumb2 [3] = 0;
		}
		if (binNumb2 [4] == 0){
		    binNumb2 [4] = 1;
		}
		else {
		    binNumb2 [4] = 0;
		}
		if (binNumb2 [5] == 0){
		    binNumb2 [5] = 1;
		}
		else {
		    binNumb2 [5] = 0;
		}
		if (binNumb2 [6] == 0){
		    binNumb2 [6] = 1;
		}
		else {
		    binNumb2 [6] = 0;
		}
		if (binNumb2 [7] == 0){
		    binNumb2 [7] = 1;
		}
		else {
		    binNumb2 [7] = 0;
		}
		
		// 1'st Complement end
		
		// 2'nd Complement start
		if(binNumb2[0] == 0){
		    binNumb2 [0] = 1;
		}
		else if(binNumb2 [0] == 1 && binNumb2 [1] == 0){
		    binNumb2 [0] = 0;
		    binNumb2 [1] = 1;
		}
		else if(binNumb2 [0] == 1 && binNumb2 [1] == 1 && binNumb2 [2] == 0){
		    binNumb2 [0] = 0;
		    binNumb2 [1] = 0;
		    binNumb2 [2] = 1;
		}
		else if(binNumb2 [0] == 1 && binNumb2 [1] == 1 && binNumb2 [2] == 1 && binNumb2 [3] == 0){
		    binNumb2 [0] = 0;
		    binNumb2 [1] = 0;
		    binNumb2 [2] = 0;
		    binNumb2 [3] = 1;
		}
		else if(binNumb2 [0] == 1 && binNumb2 [1] == 1 && binNumb2 [2] == 1 && binNumb2 [3] == 1 && binNumb2 [4] == 0){
		    binNumb2 [0] = 0;
		    binNumb2 [1] = 0;
		    binNumb2 [2] = 0;
		    binNumb2 [3] = 0;
		    binNumb2 [4] = 1;
		}
		else if(binNumb2 [0] == 1 && binNumb2 [1] == 1 && binNumb2 [2] == 1 && binNumb2 [3] == 1 && binNumb2 [4] == 1 && binNumb2 [5] == 0){
		    binNumb2 [0] = 0;
		    binNumb2 [1] = 0;
		    binNumb2 [2] = 0;
		    binNumb2 [3] = 0;
		    binNumb2 [4] = 0;
		    binNumb2 [5] = 1;
		}
		else if(binNumb2 [0] == 1 && binNumb2 [1] == 1 && binNumb2 [2] == 1 && binNumb2 [3] == 1 && binNumb2 [4] == 1 && binNumb2 [5] == 1 && binNumb2 [6] == 0){
		    binNumb2 [0] = 0;
		    binNumb2 [1] = 0;
		    binNumb2 [2] = 0;
		    binNumb2 [3] = 0;
		    binNumb2 [4] = 0;
		    binNumb2 [5] = 0;
		    binNumb2 [6] = 1;
		}
		else if(binNumb2 [0] == 1 && binNumb2 [1] == 1 && binNumb2 [2] == 1 && binNumb2 [3] == 1 && binNumb2 [4] == 1 && binNumb2 [5] == 1 && binNumb2 [6] == 1 && binNumb2 [7] == 0){
		    binNumb2 [0] = 0;
		    binNumb2 [1] = 0;
		    binNumb2 [2] = 0;
		    binNumb2 [3] = 0;
		    binNumb2 [4] = 0;
		    binNumb2 [5] = 0;
		    binNumb2 [6] = 0;
		    binNumb2 [7] = 1;
		}
		
		
		printf ("The 2nd Binary number is : %d %d %d %d %d %d %d %d\n", binNumb2 [7], binNumb2[6], binNumb2[5], binNumb2[4], binNumb2[3], binNumb2[2], binNumb2[1], binNumb2[0]);
		
		// 2'nd Complement end
	}
	
	else if (y > 0){
		
		//printf ("The number is: %d\n", y);
		
		if (y >= 64 && y <= 127){
		    y -= 64;
		    binNumb2 [6] = 1;
		}
		if (y >= 32 && y < 64){
		    y -=32;
		    binNumb2 [5] = 1;
		}
		if (y >= 16 && y < 32){
		    y -=16;
		    binNumb2 [4] = 1;
		}
		if (y >= 8 && y < 16 ){
		    y -=8;
		    binNumb2 [3] = 1;
		}
		if (y >= 4 && y < 8){
		    y -=4;
		    binNumb2 [2] = 1;
		}
		if (y >= 2 && y < 4){
		    y -=2;
		    binNumb2 [1] = 1;
		}
		if (y >= 1 && y < 2){
		    y -=1;
		    binNumb2 [0] = 1;
		}
		
		printf ("The 2nd Binary Number is : %d %d %d %d %d %d %d %d\n", binNumb2 [7],binNumb2[6], binNumb2[5], binNumb2[4], binNumb2[3], binNumb2[2], binNumb2[1], binNumb2[0]);
	}
	
	
	// adding 2 binary numbers
	
	binNumb3 [0] = binNumb1 [0] + binNumb2 [0];
	binNumb3 [1] = binNumb1 [1] + binNumb2 [1];
	binNumb3 [2] = binNumb1 [2] + binNumb2 [2];
	binNumb3 [3] = binNumb1 [3] + binNumb2 [3];
	binNumb3 [4] = binNumb1 [4] + binNumb2 [4];
	binNumb3 [5] = binNumb1 [5] + binNumb2 [5];
	binNumb3 [6] = binNumb1 [6] + binNumb2 [6];
	binNumb3 [7] = binNumb1 [7] + binNumb2 [7];
	
		if(binNumb3[0] == 2){
		    binNumb3[0] = 0;
		    binNumb3[1] += 1;
		}
		if(binNumb3[1] == 2){
		    binNumb3[1] = 0;
		    binNumb3[2] += 1;
		}
		else if(binNumb3[1] == 3){
		    binNumb3[1] = 1;
		    binNumb3[2] += 1;
		}
		if(binNumb3[2] == 2){
		    binNumb3[2] = 0;
		    binNumb3[3] += 1;
		}
		else if(binNumb3[2] == 3){
		    binNumb3[2] = 1;
		    binNumb3[3] += 1;
		}
		if(binNumb3[3] == 2){
		    binNumb3[3] = 0;
		    binNumb3[4] += 1;
		}
		else if(binNumb3[3] == 3){
		    binNumb3[3] = 1;
		    binNumb3[4] += 1;
		}
		if(binNumb3[4] == 2){
		    binNumb3[4] = 0;
		    binNumb3[5] += 1;
		}
		else if(binNumb3[4] == 3){
		    binNumb3[4] = 1;
		    binNumb3[5] += 1;
		}
		if(binNumb3[5] == 2){
		    binNumb3[5] = 0;
		    binNumb3[6] += 1;
		}
		else if(binNumb3[5] == 3){
		    binNumb3[5] = 1;
		    binNumb3[6] += 1;
		}
		if(binNumb3[6] == 2){
		    binNumb3[6] = 0;
		    binNumb3[7] += 1;
		}
		else if(binNumb3[6] == 3){
		    binNumb3[6] = 1;
		    binNumb3[7] += 1;
		}
		if(binNumb3[7] == 2){
		    binNumb3[7] = 0;
		}
		else if(binNumb3[7] == 3){
		    binNumb3[7] = 1;
		}
	
		printf ("The Sum of Binary Numbers is: %d %d %d %d %d %d %d %d\n", binNumb3 [7],binNumb3[6], binNumb3[5], binNumb3[4], binNumb3[3], binNumb3[2], binNumb3[1], binNumb3[0]);
	
	// Converting Binary to Decimal
	
	
	if(binNumb3  [0] == 1){
		z += 1;
	}
	if(binNumb3  [1] == 1){
		z += 2;
	}
	if(binNumb3  [2] == 1){
		z += 4;
	}
	if(binNumb3  [3] == 1){
		z += 8;
	}
	if(binNumb3  [4] == 1){
		z += 16;
	}
	if(binNumb3  [5] == 1){
		z += 32;
	}
	if(binNumb3  [6] == 1){
		z += 64;
	}
	if(binNumb3  [7] == 1){
		z -= 128;
	}
	
	printf("The Sum in decimal is: %d", z);
	
	return 0;
}
