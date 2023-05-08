#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

int P1,C,PQ[520],i,DW;
char Pass[520],NN0[520],NN1[520],NN2[520],NN3[520],NN4[520],NN5[520],NN6[520],NN7[520],NN8[520],NN9[520],NN10[520];
char NN11[520],NN12[520],NN13[520],NN14[520],NN15[520],NN16[520],NN17[520],NN18[520],NN19[520],NN20[520],NN21[520],NN22[520],NN23[520],NN24[520],NN25[520];
char NN26[520],NN27[520],NN28[520],NN29[520],NN30[520],NN31[520],NN32[520],NN33[520];
float TP, P[520],D[520];



int hours, minutes, seconds, day, month, year;
time_t now;

void Canteen()
{
  	printf("     ____                     __                         ______                   ___                    ______     \n");
  	printf("    /\\  _`\\                  /\\ \\__                     /\\__  _\\       __        /\\_ \\                  /\\  _  \\    \n");
  	printf("    \\ \\ \\/\\_\\     __      ___\\ \\ ,_\\    __     __    ___\\/_/\\ \\/ _ __ /\\_\\  _____\\//\\ \\      __         \\ \\ \\L\\ \\   \n");
  	printf("     \\ \\ \\/_/_  /'__`\\  /' _ `\\ \\ \\/  /'__`\\ /'__`\\/' _ `\\ \\ \\ \\/\\`'__\\/\\ \\/\\ '__`\\\\ \\ \\   /'__`\\ _______\\ \\  __ \\  \n");
  	printf("      \\ \\ \\L\\ \\/\\ \\L\\.\\_/\\ \\/\\ \\ \\ \\_/\\  __//\\  __//\\ \\/\\ \\ \\ \\ \\ \\ \\/ \\ \\ \\ \\ \\L\\ \\\\_\\ \\_/\\  __//\\______\\\\ \\ \\/\\ \\ \n");
  	printf("       \\ \\____/\\ \\__/.\\_\\ \\_\\ \\_\\ \\__\\ \\____\\ \\____\\ \\_\\ \\_\\ \\ \\_\\ \\_\\  \\ \\_\\ \\ ,__//\\____\\ \\____\\/______/ \\ \\_\\ \\_\\\n");
  	printf("        \\/___/  \\/__/\\/_/\\/_/\\/_/\\/__/\\/____/\\/____/\\/_/\\/_/  \\/_/\\/_/   \\/_/\\ \\ \\/ \\/____/\\/____/          \\/_/\\/_/\n");
  	printf("                                                                              \\ \\_\\                                 \n");
  	printf("                                                                               \\/_/                                 \n\n\n");	
}

void Welcome()
{
	printf("\t\t __      __          ___                                           __             \n");
	printf("\t\t/\\ \\  __/\\ \\        /\\_ \\                                         /\\ \\__          \n");
	printf("\t\t\\ \\ \\/\\ \\ \\ \\     __\\//\\ \\     ___    ___     ___ ___      __     \\ \\ ,_\\   ___   \n");
	printf("\t\t \\ \\ \\ \\ \\ \\ \\  /'__`\\\\ \\ \\   /'___\\ / __`\\ /' __` __`\\  /'__`\\    \\ \\ \\/  / __`\\ \n");
	printf("\t\t  \\ \\ \\_/ \\_\\ \\/\\  __/ \\_\\ \\_/\\ \\__//\\ \\L\\ \\/\\ \\/\\ \\/\\ \\/\\  __/     \\ \\ \\_/\\ \\L\\ \\\n");
	printf("\t\t   \\ `\\___x___/\\ \\____\\/\\____\\ \\____\\ \\____/\\ \\_\\ \\_\\ \\_\\ \\____\\     \\ \\__\\ \\____/\n");
	printf("\t\t    '\\/__//__/  \\/____/\\/____/\\/____/\\/___/  \\/_/\\/_/\\/_/\\/____/      \\/__/\\/___/ \n");
}

int Page1()
{
	printf("\t\t\t\t\t\t      1. LOGIN\n");
	printf("\t\t\t\t\t\t      2. EXIT\n\n");
	
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&P1);
}

int PP()
{
	printf("\t\t\t\t\t\t PLEASE ENTER THE PASSWORD\n\n");
	
	printf("\t\t\t\t\t\t -> ");
	scanf("%s",Pass);
}

int POrder()
{
	printf("\t\t\t\t\t\t      [MENU LIST]\n\n");
	printf("\t\t\t\t\t\t      1. NASI.\n");
	printf("\t\t\t\t\t\t      2. MEE/BIHUN/KUEY TIAW/MAGGIE.\n");
	printf("\t\t\t\t\t\t      3. MINUMAN.\n");
	printf("\t\t\t\t\t\t      4. SOFT DRINK.\n");
	printf("\t\t\t\t\t\t      5. ROTI.\n");	
	printf("\t\t\t\t\t\t      6. KUIH.\n");
	printf("\t\t\t\t\t\t      7. SOSEJ/NUGGET.\n");
	printf("\t\t\t\t\t\t      8. EXIT.\n\n");
	
	printf("\t\t\t\t\t\t      9. TOTAL.\n\n");
	
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int NL()
{
	C = 0;
	printf("\t\t\t\t\t\t      [NASI]\n\n");
	printf("\t\t\t\t\t\t      1. GORENG KAMPUNG - RM3.50.\n");
	printf("\t\t\t\t\t\t      2. MINYAK - RM4.00.\n");
	printf("\t\t\t\t\t\t      3. AYAM - RM4.00.\n");
	printf("\t\t\t\t\t\t      4. BERIYANI - RM4.00.\n");
	printf("\t\t\t\t\t\t      5. DAGANG - RM3.00.\n");
	printf("\t\t\t\t\t\t      6. BACK.\n\n");
				
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int ML()
{
	C = 0;
	printf("\t\t\t\t\t\t      [MEE/BIHUN/KUEY TIAW/MAGGIE]\n\n");
	printf("\t\t\t\t\t\t      1. GORENG - RM3.00.\n");
	printf("\t\t\t\t\t\t      2. SPECIAL - RM4.00.\n");
	printf("\t\t\t\t\t\t      3. BASAH - RM3.00.\n");
	printf("\t\t\t\t\t\t      4. SUP - RM4.00.\n");
	printf("\t\t\t\t\t\t      5. KARI - RM4.00.\n");
	printf("\t\t\t\t\t\t      6. BACK.\n\n");
				
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int M()
{
	C = 0;
	printf("\t\t\t\t\t\t      [MINUMAN]\n\n");
	printf("\t\t\t\t\t\t      1. MILO - RM2.00.\n");
	printf("\t\t\t\t\t\t      2. TEH - RM2.00.\n");
	printf("\t\t\t\t\t\t      3. SIRAP - RM1.50.\n");
	printf("\t\t\t\t\t\t      4. KOPI - RM2.50.\n");
	printf("\t\t\t\t\t\t      5. BUAH - RM2.50.\n");
	printf("\t\t\t\t\t\t      6. BACK\n\n");
				
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int SD()
{
	C = 0;
	printf("\t\t\t\t\t\t      [SOFT DRINK]\n\n");
	printf("\t\t\t\t\t\t      1. PEPSI - RM2.00.\n");
	printf("\t\t\t\t\t\t      2. COKE - RM2.00.\n");
	printf("\t\t\t\t\t\t      3. NESCAFE - RM2.50.\n");
	printf("\t\t\t\t\t\t      4. HAUS BOOM - RM3.00.\n");
	printf("\t\t\t\t\t\t      5. MARINDA - RM2.00.\n");
	printf("\t\t\t\t\t\t      6. BACK.\n\n");
				
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int RL()
{
	C = 0;
	printf("\t\t\t\t\t\t      [ROTI]\n\n");
	printf("\t\t\t\t\t\t      1. BURGER - RM1.80.\n");
	printf("\t\t\t\t\t\t      2. COKLAT - RM1.00.\n");
	printf("\t\t\t\t\t\t      3. HOTDOG - RM1.80.\n");
	printf("\t\t\t\t\t\t      4. TELUR - RM1.50.\n");
	printf("\t\t\t\t\t\t      5. KAYA PLUS MAYO - RM2.00.\n");
	printf("\t\t\t\t\t\t      6. BACK.\n\n");
				
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int KL()
{
	C = 0;
	printf("\t\t\t\t\t\t      [KUIH]\n\n");
	printf("\t\t\t\t\t\t      1. SERI MUKA x3 - RM1.00.\n");
	printf("\t\t\t\t\t\t      2. APAM x3 - RM1.00.\n");
	printf("\t\t\t\t\t\t      3. MELAKA x5 - RM1.00.\n");
	printf("\t\t\t\t\t\t      4. KARIPAP x3 - RM1.00.\n");
	printf("\t\t\t\t\t\t      5. PAU x2 - RM1.00.\n");
	printf("\t\t\t\t\t\t      6. BACK.\n\n");
				
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int SL()
{
	C = 0;
	printf("\t\t\t\t\t\t      [SOSEJ/NUGGET]\n\n");
	printf("\t\t\t\t\t\t      1. RAMLLY x2 - RM1.00.\n");
	printf("\t\t\t\t\t\t      2. AYAMAS x2 - RM1.00.\n");
	printf("\t\t\t\t\t\t      3. NUTRIPLUS x2 - RM1.50.\n");
	printf("\t\t\t\t\t\t      4. AISYAH x2 - RM1.00.\n");
	printf("\t\t\t\t\t\t      5. BACK.\n\n");
				
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int DISCOUNT()
{
	C = 0;
	printf("\t\t\t\t\t\t      [DISCOUNT]\n\n");
	printf("\t\t\t\t\t\t      1. NONE\n");
	printf("\t\t\t\t\t\t      2. 10%% DISCOUNT\n");
	printf("\t\t\t\t\t\t      3. 30%% DISCOUNT\n");
	printf("\t\t\t\t\t\t      4. 50%% DISCOUNT\n\n");
				
	printf("\t\t\t\t\t\t      ENTER CHOICE\n");
	printf("\t\t\t\t\t\t      -> ");
	scanf("%d",&C);
}

int Order()
{
	Order:
	time(&now);
	struct tm *local = localtime(&now);

    hours = local->tm_hour;      	// get hours since midnight (0-23)
	minutes = local->tm_min;     	// get minutes passed after the hour (0-59)
	seconds = local->tm_sec;     	// get seconds passed after minute (0-59)

 	day = local->tm_mday;        	// get day of month (1 to 31)
  	month = local->tm_mon + 1;   	// get month of year (0 to 11)	
  	year = local->tm_year + 1900;	// get year since 1900

  	system("cls");
  	Canteen();
  	POrder();
  	switch(C)
  	{
  		case 1: // Nasi
  			Nasi:
  			system("cls");
			Canteen();
			NL();
			switch(C)
			{
				case 1: 
					P[0] = 3.5;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[0]);
							
					strcpy(NN0 , "NASI GORENG KAMPUNG");
				
					P[0] = P[0] * PQ[0];
					goto Order;
					break;
					
				case 2:
					P[1] = 4;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[1]);
							
					strcpy(NN1 , "NASI MINYAK\t");
				
					P[1] = P[1] * PQ[1];
					goto Order;
				
				case 3:
					P[2] = 4;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[2]);
							
					strcpy(NN2 , "NASI AYAM\t");
				
					P[2] = P[2] * PQ[2];
					goto Order;
				
				case 4:
					P[3] = 4;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[3]);
							
					strcpy(NN3 , "NASI BERIYANI\t");
				
					P[3] = P[3] * PQ[3];
					goto Order;
					
				case 5:
					P[4] = 3;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[4]);
							
					strcpy(NN4 , "NASI DAGANG\t");
				
					P[4] = P[4] * PQ[4];
					goto Order;
					
				case 6:
					goto Order;
					break;
				
				default: 
					MessageBox(0,"INVALID NUMBER","ERROR",0);
					goto Nasi;
					break;
			}
  			break;
  		
		case 2: // Mee
			Mee:
  			system("cls");
			Canteen();
			ML();
			switch(C)
			{
				case 1: 
					P[5] = 3;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[5]);
							
					strcpy(NN5 , "M/B/KT/M GORENG");
				
					P[5] = P[5] * PQ[5];
					goto Order;
					break;
					
				case 2:
					P[6] = 4;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[6]);
							
					strcpy(NN6 , "M/B/KT/M SPECIAL");
				
					P[6] = P[6] * PQ[6];
					goto Order;
				
				case 3:
					P[7] = 3;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[7]);
							
					strcpy(NN7 , "M/B/KT/M BASAH\t");
				
					P[7] = P[7] * PQ[7];
					goto Order;
				
				case 4:
					P[8] = 4;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[8]);
							
					strcpy(NN8 , "M/B/KT/M SUP\t");
				
					P[8] = P[8] * PQ[8];
					goto Order;
					
				case 5:
					P[9] = 4;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[9]);
							
					strcpy(NN9 , "M/B/KT/M KARI\t");
				
					P[9] = P[9] * PQ[9];
					goto Order;
					
				case 6:
					goto Order;
					break;
				
				default: 
					MessageBox(0,"INVALID NUMBER","ERROR",0);
					goto Mee;
					break;
			}
			break;	
	
		case 3: // Miniman
			Minuman:
  			system("cls");
			Canteen();
			M();
			switch(C)
			{
				case 1: 
					P[10] = 2;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[10]);
							
					strcpy(NN10 , "AIR MILO\t");
				
					P[10] = P[10] * PQ[10];
					goto Order;
					break;
					
				case 2:
					P[11] = 2;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[11]);
							
					strcpy(NN11 , "AIR TEH\t");
				
					P[11] = P[11] * PQ[11];
					goto Order;
				
				case 3:
					P[12] = 1.5;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[12]);
							
					strcpy(NN12 , "AIR SIRAP\t");
				
					P[12] = P[12] * PQ[12];
					goto Order;
				
				case 4:
					P[13] = 2.5;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[13]);
							
					strcpy(NN13 , "AIR KOPI\t");
				
					P[13] = P[13] * PQ[13];
					goto Order;
					
				case 5:
					P[14] = 2.5;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[14]);
							
					strcpy(NN14 , "AIR BUAH\t");
				
					P[14] = P[14] * PQ[14];
					goto Order;
					
				case 6:
					goto Order;
					break;
				
				default: 
					MessageBox(0,"INVALID NUMBER","ERROR",0);
					goto Minuman;
					break;
			}
  			break;
  			
  		case 4: // SoftDrink
		  	SoftDrink:
  			system("cls");
			Canteen();
			SD();
			switch(C)
			{
				case 1: 
					P[15] = 2;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[15]);
							
					strcpy(NN15 , "PEPSI\t\t");
				
					P[15] = P[15] * PQ[15];
					goto Order;
					break;
					
				case 2:
					P[16] = 2;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[16]);
							
					strcpy(NN16 , "COKE\t\t");
				
					P[16] = P[16] * PQ[16];
					goto Order;
				
				case 3:
					P[17] = 2.5;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[17]);
							
					strcpy(NN17 , "NESCAFE\t\t");
				
					P[17] = P[17] * PQ[17];
					goto Order;
				
				case 4:
					P[18] = 3;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[18]);
							
					strcpy(NN18 , "HAUS BOOM\t\t");
				
					P[18] = P[18] * PQ[18];
					goto Order;
					
				case 5:
					P[19] = 2;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[19]);
							
					strcpy(NN19 , "MARINDA\t\t");
				
					P[19] = P[19] * PQ[19];
					goto Order;
					
				case 6:
					goto Order;
					break;
				
				default: 
					MessageBox(0,"INVALID NUMBER","ERROR",0);
					goto SoftDrink;
					break;
			}
			break;	
		  
		case 5:
			Roti:
  			system("cls");
			Canteen();
			RL();
			switch(C)
			{
				case 1: 
					P[20] = 1.8;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[20]);
							
					strcpy(NN20 , "ROTI BURGER\t");
				
					P[20] = P[20] * PQ[20];
					goto Order;
					break;
					
				case 2:
					P[21] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[21]);
							
					strcpy(NN21 , "ROTI COKLAT\t");
				
					P[21] = P[21] * PQ[21];
					goto Order;
				
				case 3:
					P[22] = 1.8;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[22]);
							
					strcpy(NN22 , "ROTI HOTDOG\t");
				
					P[22] = P[22] * PQ[22];
					goto Order;
				
				case 4:
					P[23] = 1.5;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[23]);
							
					strcpy(NN23 , "ROTI TELUR\t");
				
					P[23] = P[23] * PQ[23];
					goto Order;
					
				case 5:
					P[24] = 2;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[24]);
							
					strcpy(NN24 , "ROTI KAYA PLUS MAYO");
				
					P[24] = P[24] * PQ[24];
					goto Order;
					
				case 6:
					goto Order;
					break;
				
				default: 
					MessageBox(0,"INVALID NUMBER","ERROR",0);
					goto Roti;
					break;
			}
			break;  
		  
		case 6:
			Kuih:
  			system("cls");
			Canteen();
			KL();
			switch(C)
			{
				case 1: 
					P[25] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[25]);
							
					strcpy(NN25 , "KUIH SERI MUKA\t");
				
					P[25] = P[25] * PQ[25];
					goto Order;
					break;
					
				case 2:
					P[26] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[26]);
							
					strcpy(NN26 , "KUIH APAM\t");
				
					P[26] = P[26] * PQ[26];
					goto Order;
				
				case 3:
					P[27] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[27]);
							
					strcpy(NN27 , "KUIH MELAKA\t");
				
					P[27] = P[27] * PQ[27];
					goto Order;
				
				case 4:
					P[28] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[28]);
							
					strcpy(NN28 , "KARIPAP\t");
				
					P[28] = P[28] * PQ[28];
					goto Order;
					
				case 5:
					P[29] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[29]);
							
					strcpy(NN29 , "PAU\t\t");
				
					P[29] = P[29] * PQ[29];
					goto Order;
					
				case 6:
					goto Order;
					break;
				
				default: 
					MessageBox(0,"INVALID NUMBER","ERROR",0);
					goto Kuih;
					break;
			}
			break;	  
		
		case 7:
			Sosej:
  			system("cls");
			Canteen();
			SL();
			switch(C)
			{
				case 1: 
					P[30] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[30]);
							
					strcpy(NN30 , "SOSEJ/NUGGET RAMLLY");
				
					P[30] = P[30] * PQ[30];
					goto Order;
					break;
					
				case 2:
					P[31] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[31]);
							
					strcpy(NN31 , "SOSEJ/NUGGET AYAMAS");
				
					P[31] = P[31] * PQ[31];
					goto Order;
				
				case 3:
					P[32] = 1.5;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[32]);
							
					strcpy(NN32 , "SOSEJ/NUGGET NUTRIPLUS");
				
					P[32] = P[32] * PQ[32];
					goto Order;
				
				case 4:
					P[33] = 1;
					printf("\t\t\t\t\t\t      QUANTITY? = ");
					scanf("%d",&PQ[33]);
							
					strcpy(NN33 , "SOSEJ/NUGGET AISYAH");
				
					P[33] = P[33] * PQ[33];
					goto Order;
					
				case 5:
					goto Order;
					break;
					
				default: 
					MessageBox(0,"INVALID NUMBER","ERROR",0);
					goto Sosej;
					break;
			}
			break;
		  
		case 8: // Exit
		  	printf("\t\t\t\t\t\t      -> Exiting the program....\n");
   			sleep(1);
			exit(0);
			break;
		  	
		case 9: // Total
  			system("cls");
			Canteen();
			for(i = 0; i <= 33; i++)
			{
				TP += P[i];
			}
			Discount:
			DISCOUNT();
			switch(C)
				{
					case 1:
						DW = 0;
						break;
						
					case 2: 
						D[1] = (TP * 10)/100;
						TP = (TP - D[1]);
						DW = 10;
						break;
					case 3: 
						D[1] = (TP * 30)/100;
						TP = (TP - D[1]);
						DW = 30;
						break;
					case 4: 
						D[1] = (TP * 50)/100;
						TP = (TP - D[1]);
						DW = 50;
						break;
					default: MessageBox(0,"INVALID NUMBER","ERROR",0);
							 goto Discount;
						break;
				}
				
			system("cls");
			Canteen();
			printf("\t\t\t\t\t [FOOD]\t\t       [QTY]\t[Price]\n"); 
			if((PQ[0] == 0)&&(PQ[1] == 0)&&(PQ[2] == 0)&&(PQ[3] == 0)&&(PQ[4] == 0)&&(PQ[5] == 0)&&(PQ[6] == 0)&&(PQ[7] == 0)&&(PQ[8] == 0)&&(PQ[9] == 0)&&(PQ[10] == 0)&&(PQ[11] == 0)&&(PQ[12] == 0)&&(PQ[13] == 0)&&(PQ[14] == 0)&&(PQ[15] == 0)&&(PQ[16] == 0)&&(PQ[17] == 0)&&(PQ[18] == 0)&&(PQ[19] == 0)&&(PQ[20] == 0)&&(PQ[21] == 0)&&(PQ[22] == 0)&&(PQ[23] == 0)&&(PQ[24] == 0)&&(PQ[25] == 0)&&(PQ[26] == 0)&&(PQ[27] == 0)&&(PQ[28] == 0)&&(PQ[29] == 0)&&(PQ[30] == 0)&&(PQ[31] == 0)&&(PQ[32] == 0)&&(PQ[33] == 0))
			{
				printf("");
			}
			if(PQ[0] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN0,PQ[0],P[0]);
			}
			else
			{
				printf("");
			}
			
			if(PQ[1] > 0)
		    {
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN1,PQ[1],P[1]);
			} 
			else
			{
				printf("");
			}
			if(PQ[2] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN2,PQ[2],P[2]);
			}
			else
			{
				printf("");
			}
			if(PQ[3] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN3,PQ[3],P[3]);
			}
			else
			{
				printf("");
			}
			if(PQ[4] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN4,PQ[4],P[4]);
			}
			else
			{
				printf("");
			}
			if(PQ[5] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN5,PQ[5],P[5]);
			}
			else
			{
				printf("");
			}
			if(PQ[6] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN6,PQ[6],P[6]);
			}
			else
			{
				printf("");
			}
			if(PQ[7] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN7,PQ[7],P[7]);
			}
			else
			{
				printf("");
			}
			if(PQ[8] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN8,PQ[8],P[8]);
			}
			else
			{
				printf("");
			}
			if(PQ[9] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN9,PQ[9],P[9]);
			}
			else
			{
				printf("");
			}
			if(PQ[10] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN10,PQ[10],P[10]);
			}
			else
			{
				printf("");
			}
			if(PQ[11] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN11,PQ[11],P[11]);
			}
			else
			{
				printf("");
			}
			if(PQ[12] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN12,PQ[12],P[12]);
			}
			else
			{
				printf("");
			}
			if(PQ[13] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN13,PQ[13],P[13]);
			}
			else
			{
				printf("");
			}
			if(PQ[14] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN14,PQ[14],P[14]);
			}
			else
			{
				printf("");
			}
			if(PQ[15] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN15,PQ[15],P[15]);
			}
			else
			{
				printf("");
			}
			if(PQ[16] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN16,PQ[16],P[16]);
			}
			else
			{
				printf("");
			}
			if(PQ[17] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN17,PQ[17],P[17]);
			}
			else
			{
				printf("");
			}
			if(PQ[18] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN18,PQ[18],P[18]);
			}
			else
			{
				printf("");
			}
			if(PQ[19] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN19,PQ[19],P[19]);
			}
			else
			{
				printf("");
			}
			if(PQ[20] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN20,PQ[20],P[20]);
			}
			else
			{
				printf("");
			}
			if(PQ[21] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN21,PQ[21],P[21]);
			}
			else
			{
				printf("");
			}
			if(PQ[22] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN22,PQ[22],P[22]);
			}
			else
			{
				printf("");
			}
			if(PQ[23] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN23,PQ[23],P[23]);
			}
			else
			{
				printf("");
			}
			if(PQ[24] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN24,PQ[24],P[24]);
			}
			else
			{
				printf("");
			}
			if(PQ[25] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN25,PQ[25],P[25]);
			}
			else
			{
				printf("");
			}
			if(PQ[26] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN26,PQ[26],P[26]);
			}
			else
			{
				printf("");
			}
			if(PQ[27] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN27,PQ[27],P[27]);
			}
			else
			{
				printf("");
			}
			if(PQ[28] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN28,PQ[28],P[28]);
			}
			else
			{
				printf("");
			}
			if(PQ[29] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN29,PQ[29],P[29]);
			}
			else
			{
				printf("");
			}
			if(PQ[30] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN30,PQ[30],P[30]);
			}
			else
			{
				printf("");
			}
			if(PQ[31] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN31,PQ[31],P[31]);
			}
			else
			{
				printf("");
			}
			if(PQ[32] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN32,PQ[32],P[32]);
			}
			else
			{
				printf("");
			}
			if(PQ[33] > 0)
			{
				printf("\t\t\t\t\t %s\tx%d\tRM%.2f\n",NN33,PQ[33],P[33]);
			}
			else
			{
				printf("");
			}
			
				
			printf("\t\t\t\t\t TOTAL:\t\t\t\tRM%.2f\n\n",TP);
			printf("\t\t\t\t\t DISCOUNT:\t\t\t%d%%\n\t\t\t\t\t\t\t\t        RM%.2f\n\n",DW,D[1]);
				
			// print current date
			printf("\t\t\t\t\t DATE:\t\t\t\t%02d/%02d/%d\n", day, month, year);
				
			// print local time
			if (hours < 12)	// before midday
			printf("\t\t\t\t\t TIMES:\t\t\t\t%02d:%02d:%02d A.M.\n\n", hours, minutes, seconds);
			else	// after midday
			printf("\t\t\t\t\t TIMES:\t\t\t\t%02d:%02d:%02d P.M.\n\n", (hours-1)%12+1, minutes, seconds);
			
			printf("\t\t\t\t\t -> Press any key to take new order...");
			getch();
			// Return the value
			for (i = 0; i <= 33; i++)
			{
				P[i] = 0;
				PQ[i] = 0;
				D[i] = 0;
				TP = 0;
			}
			
			goto Order;
  			break;
		
		default:
			MessageBox(0,"INVALID NUMBER","ERROR",0);
			goto Order;
			break;
		  		
  		
	}
}

int main()
{
	//console system - resize
	SMALL_RECT windowSize = {0, 0, 200, 50};
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
	//system to type
	system("title CANTEEN MANAGEMENT SYSTEM"); //title console
	system("color 03"); // a - Light Green, b - Light Aqua, c- Light Red, d- Light Purple, e- Light Yellow, f- Bright White
	system("cls");
	
	Welcome();
	Canteen();
	printf("\t\t\t\t\t     PRESS ENTER TO CONTINUE...\n");
	getch();
	
	Page1:
	system("cls");
	Canteen();
	Page1();
	switch(P1)
	{
		case 1: system("cls");
				goto LPage;
			break;
		case 2: printf("\t\t\t\t\t\t      -> Exiting the program....\n");
				sleep(1);
   				exit(0);
			break;
		default: system("cls");
				 Canteen();
				 goto Page1;
			break;	
	}
	
	LPage:
	Canteen();
	PP();
	//CheckPass
	if(strcmp(Pass, "@dmiN") == 0)
	{
		MessageBox(0,"ACCESS GRANTED","CANTEEN TRIPLE-A",0);
		Order();
	}
	else
	{
		MessageBox(0,"INVALID PASSWORD","CANTEEN TRIPLE-A",0);				
		system("cls");
		goto LPage;
	}
}
