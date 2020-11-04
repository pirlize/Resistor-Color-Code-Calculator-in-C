#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
//Nikos Kritikos
void colors();
void colors2();

int main() {
int clr;



  printf("Hello user\n");
  printf("How many colors shall we calculate 4 or 5?\n");
  scanf("%d",&clr);
  
  
 		if (clr==4){
  		printf("give me 4 colors,M for Black K for Brown N for Red O for Orange I for Yellow R for Green L for Blue ");
  		printf("V for Purple G for Grey A for White X for Gold S for silver and C for no color. \n");
		colors();
  		}
  		else if (clr==5){
  		printf("give me 5 colors,M for Black K for Brown N for Red O for Orange I for Yellow R for Green L for Blue ");
  		printf("V for Purple G for Grey A for White X for Gold S for silver and C for no color. \n");
  		colors2();
		  }
		  else
		  main();   //In case clr != 4 || 5
		
			



return 0;
}
//Function to Concatenate first two integers of resistor color code.It's not needed to make the program work but i added it because i found it interesting.
//You will see soon how else i do it.

int concat(int a, int b) 
{ 
  
    char s1[20]; 
    char s2[20]; 
  
    // Convert both the integers to string 
    sprintf(s1, "%d", a); 
    sprintf(s2, "%d", b); 
  
    // Concatenate both strings 
    strcat(s1, s2); 
  
    // Convert the concatenated string 
    // to integer 
    int c = atoi(s1); 
  
    // return the formed integer 
    return c; 
} 


//Function to Calculate 4 Band Resistor color code.
void colors(){
int c1,c2,i;
char color1[3];
long long int c3;
float c4,c5;
char t;

		for(i=0; i<4; i++){
		scanf(" %c",&t);
		color1[i]=t;	}

if (color1[0]=='M'){
	c1=0;}
else if (color1[0]=='K'){
	c1=1;}
else if (color1[0]=='N'){
	c1=2;}
else if (color1[0]=='O'){
	c1=3;}
else if (color1[0]=='I'){
	c1=4;}
else if (color1[0]=='R'){
	c1=5;}
else if (color1[0]=='L'){
	c1=6;}
else if (color1[0]=='V'){
	c1=7;}
else if (color1[0]=='G'){
	c1=8;}
else if (color1[0]=='A'){
	c1=9;}
else if (color1[0]=='C'){
	c1=NULL;}

if (color1[1]=='M'){
	c2=0;}
else if (color1[1]=='K'){
	c2=1;}
else if (color1[1]=='N'){
	c2=2;}
else if (color1[1]=='O'){
	c2=3;}
else if (color1[1]=='I'){
	c2=4;}
else if (color1[1]=='R'){
	c2=5;}
else if (color1[1]=='L'){
	c2=6;}
else if (color1[1]=='V'){
	c2=7;}
else if (color1[1]=='G'){
	c2=8;}
else if (color1[1]=='A'){
	c2=9;}
else if (color1[1]=='C'){
	c2=NULL;}

if (color1[2]=='M'){
	c3=100;}
else if (color1[2]=='K'){
	c3=1000;}
else if (color1[2]=='N'){
	c3=10000;}
else if (color1[2]=='O'){
	c3=100000;}
else if (color1[2]=='I'){
	c3=1000000;}
else if (color1[2]=='R'){
	c3=10000000;}
else if (color1[2]=='L'){
	c3=100000000;}
else if (color1[2]=='V'){
	c3=1000000000;}
else if (color1[2]=='G'){
	c3=10000000000;}
else if (color1[2]=='A'){
	c3=10000000000;}
else if (color1[2]=='X'){
	c3=10;}
else if (color1[2]=='S'){
	c3=1;}
else if (color1[2]=='C'){
	c3=NULL;}
	

if (color1[3]=='K'){
	c4=5;}
else if (color1[3]=='N'){
	c4=2;}
else if (color1[3]=='R'){
	c4=0.5;}
else if (color1[3]=='L'){
	c4=0.25;}
else if (color1[3]=='V'){
	c4=0.1;}
else if (color1[3]=='G'){
	c4=0.05;}
else if (color1[3]=='X'){
	c4=5;}
else if (color1[3]=='S'){
	c4=10;}
else if (color1[3]=='C'){
	c4=20;}


c5=concat(c1, c2)*c3;   				//Calling the interesting function to Concatenate c1 & c2
printf("%1.1fW +/-%f%% \n",c5,c4 ); 
//char str[16];
//int xl;
//sprintf(str, "%d", (c1*10) + c2);    //Another way to make the program work Concatenating c1 & c2 values together.
//xl =atoi(str);
//c5=xl*c3;
//printf("%1.1fW +/-%f%% \n",c5,c4 ); 

}
//Function to Calculate 5 Band Resistor color code.
void colors2(){
int c1,c2,c3,i;
char color1[4];
long long int c4;
float c5,c6;
char t;

		for(i=0; i<5; i++){
		scanf(" %c",&t);
		color1[i]=t;	}

if (color1[0]=='M'){
	c1=0;}
else if (color1[0]=='K'){
	c1=1;}
else if (color1[0]=='N'){
	c1=2;}
else if (color1[0]=='O'){
	c1=3;}
else if (color1[0]=='I'){
	c1=4;}
else if (color1[0]=='R'){
	c1=5;}
else if (color1[0]=='L'){
	c1=6;}
else if (color1[0]=='V'){
	c1=7;}
else if (color1[0]=='G'){
	c1=8;}
else if (color1[0]=='A'){
	c1=9;}
else if (color1[0]=='C'){
	c1=NULL;}

if (color1[1]=='M'){
	c2=0;}
else if (color1[1]=='K'){
	c2=1;}
else if (color1[1]=='N'){
	c2=2;}
else if (color1[1]=='O'){
	c2=3;}
else if (color1[1]=='I'){
	c2=4;}
else if (color1[1]=='R'){
	c2=5;}
else if (color1[1]=='L'){
	c2=6;}
else if (color1[1]=='V'){
	c2=7;}
else if (color1[1]=='G'){
	c2=8;}
else if (color1[1]=='A'){
	c2=9;}
else if (color1[1]=='C'){
	c2=NULL;}
	
if (color1[2]=='M'){
	c3=0;}
else if (color1[2]=='K'){
	c3=1;}
else if (color1[2]=='N'){
	c3=2;}
else if (color1[2]=='O'){
	c3=3;}
else if (color1[2]=='I'){
	c3=4;}
else if (color1[2]=='R'){
	c3=5;}
else if (color1[2]=='L'){
	c3=6;}
else if (color1[2]=='V'){
	c3=7;}
else if (color1[2]=='G'){
	c3=8;}
else if (color1[2]=='A'){
	c3=9;}
else if (color1[2]=='C'){
	c3=NULL;}	

if (color1[3]=='M'){
	c4=100;}
else if (color1[3]=='K'){
	c4=1000;}
else if (color1[3]=='N'){
	c4=10000;}
else if (color1[3]=='O'){
	c4=100000;}
else if (color1[3]=='I'){
	c4=1000000;}
else if (color1[3]=='R'){
	c4=10000000;}
else if (color1[3]=='L'){
	c4=100000000;}
else if (color1[3]=='V'){
	c4=1000000000;}
else if (color1[3]=='G'){
	c4=10000000000;}
else if (color1[3]=='A'){
	c4=10000000000;}
else if (color1[3]=='X'){
	c4=10;}
else if (color1[3]=='S'){
	c4=1;}
else if (color1[3]=='C'){
	c4=NULL;}
	

if (color1[4]=='K'){
	c5=5;}
else if (color1[4]=='N'){
	c5=2;}
else if (color1[4]=='R'){
	c5=0.5;}
else if (color1[4]=='L'){
	c5=0.25;}
else if (color1[4]=='V'){
	c5=0.1;}
else if (color1[4]=='G'){
	c5=0.05;}
else if (color1[4]=='X'){
	c5=5;}
else if (color1[4]=='S'){
	c5=10;}
else if (color1[4]=='C'){
	c5=20;}

char str[16];
int xl;
sprintf(str, "%d", (c1*100) + (c2*10) + c3);    //The simple way to concatenate 
xl =atoi(str);  
c6=xl*c4;
printf("%1.1fW +/-%f%% \n",c6,c5 ); 
}

