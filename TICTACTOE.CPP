#include<stdio.h>
#include<conio.h>
void main(void){
clrscr();
char num[3][3];
int i, p1, p2, x=25, y=2;
printf("1 | 2 | 3\n");
printf("__|___|__\n");
printf("4 | 5 | 6\n");
printf("__|___|__\n");
printf("7 | 8 | 9\n");
printf("  |   |  \n");
for(i=1; i<=5; i++){ 					//for 9 turns

gotoxy(x,y);{  //for location of print eg: player 1 select
printf("player 1 select=");	scanf("%d", &p1);  	//player 1 input
if(p1<=9&&p1!=0){					//check user type valid number  with in 1 to 9

if(p1==1){  if(num[0][0]!='X'&&num[0][0]!='0'){	gotoxy(1,1);	printf("X"); 	num[0][0]='X';} else {printf("\t\t\terror"); break;}}

if(p1==2){  if(num[0][1]!='X'&&num[0][1]!='0'){	gotoxy(5,1);	printf("X");  	num[0][1]='X';} else {printf("\t\t\terror"); break;}}

if(p1==3){  if(num[0][2]!='X'&&num[0][2]!='0'){	gotoxy(9,1);	printf("X");	num[0][2]='X';} else {printf("\t\t\terror"); break;}}

if(p1==4){  if(num[1][0]!='X'&&num[1][0]!='0'){	gotoxy(1,3);	printf("X");	num[1][0]='X';} else {printf("\t\t\terror"); break;}}

if(p1==5){  if(num[1][1]!='X'&&num[1][1]!='0'){ gotoxy(5,3);	printf("X");	num[1][1]='X';} else {printf("\t\t\terror"); break;}}

if(p1==6){  if(num[1][2]!='X'&&num[1][2]!='0'){	gotoxy(9,3);	printf("X");	num[1][2]='X';} else {printf("\t\t\terror"); break;}}

if(p1==7){  if(num[2][0]!='X'&&num[2][0]!='0'){	gotoxy(1,5);	printf("X");	num[2][0]='X';} else {printf("\t\t\terror"); break;}}

if(p1==8){  if(num[2][1]!='X'&&num[2][1]!='0'){	gotoxy(5,5);	printf("X");	num[2][1]='X';} else {printf("\t\t\terror"); break;}}

if(p1==9){  if(num[2][2]!='X'&&num[2][2]!='0'){	gotoxy(9,5);	printf("X");	num[2][2]='X';} else {printf("\t\t\terror"); break;}}
}

else { printf("\n\n\n\n\n\n\t\t Error\n\t\t You type invalid no\n\t\t Game End");	break;}}

if(((num[0][0]==num[0][1]) && (num[0][0]==num[0][2])) || ((num[1][0]==num[1][1]) && (num[1][0]==num[1][2])) || ((num[2][0]==num[2][1]) && (num[2][0]==num[2][2]))  || ((num[0][0]==num[1][0]) && (num[0][0]==num[2][0])) || ((num[0][1]==num[1][1]) && (num[0][1]==num[2][1])) || ((num[0][2]==num[1][2]) && (num[0][2]==num[2][2])) || ((num[0][0]==num[1][1]) && (num[0][0]==num[2][2])) || ((num[0][2]==num[1][1]) && (num[0][2]==num[2][0])) )
{gotoxy(29,13);{ //if condition true player 1 is win and game end using break
printf("player 1 is win");
break;}}
//end of 1st player turn if above condition is not true

else if(i==5&&y==10){ gotoxy(29,13);{
							//this else use to stop loop to run 10th time or for game end no win
printf("NO ONE WIN");}}

else { ++y; 						//++y is use for changing the location of print eg: ply 2 select
gotoxy(x,y);{						//for location of print eg: player 2 select
printf("player 2 select=");	scanf("%d",&p2);	//player 2 input
if(p2<=9&&p2!=0){					//check user type valid number  with in 1 to 9

if(p2==1){  if(num[0][0]!='X'&&num[0][0]!='0'){	gotoxy(1,1);	printf("0"); 	num[0][0]='O';} else {printf("\t\t\terror"); break;}}

if(p2==2){  if(num[0][1]!='X'&&num[0][1]!='0'){	gotoxy(5,1);	printf("0");  	num[0][1]='O';} else {printf("\t\t\terror"); break;}}

if(p2==3){  if(num[0][2]!='X'&&num[0][2]!='0'){	gotoxy(9,1);	printf("0");	num[0][2]='O';} else {printf("\t\t\terror"); break;}}

if(p2==4){  if(num[1][0]!='X'&&num[1][0]!='0'){	gotoxy(1,3);	printf("0");	num[1][0]='O';} else {printf("\t\t\terror"); break;}}

if(p2==5){  if(num[1][1]!='X'&&num[1][1]!='0'){	gotoxy(5,3);	printf("0");	num[1][1]='O';} else {printf("\t\t\terror"); break;}}

if(p2==6){  if(num[1][2]!='X'&&num[1][2]!='0'){	gotoxy(9,3);	printf("0");	num[1][2]='O';} else {printf("\t\t\terror"); break;}}

if(p2==7){  if(num[2][0]!='X'&&num[2][0]!='0'){	gotoxy(1,5);	printf("0");	num[2][0]='O';} else {printf("\t\t\terror"); break;}}

if(p2==8){  if(num[2][1]!='X'&&num[2][1]!='0'){	gotoxy(5,5);	printf("0");	num[2][1]='O';} else {printf("\t\t\terror"); break;}}

if(p2==9){  if(num[2][2]!='X'&&num[2][2]!='0'){	gotoxy(9,5);	printf("0");	num[2][2]='O';} else {printf("\t\t\terror"); break;}}
}
else { printf("\n\n\n\n\n\n\t\t Error\n\t\t You type invalid no\n\t\t Game End");	break;}}

if(((num[0][0]==num[0][1]) && (num[0][0]==num[0][2])) || ((num[1][0]==num[1][1]) && (num[1][0]==num[1][2])) || ((num[2][0]==num[2][1]) && (num[2][0]==num[2][2]))  || ((num[0][0]==num[1][0]) && (num[0][0]==num[2][0])) || ((num[0][1]==num[1][1]) && (num[0][1]==num[2][1])) || ((num[0][2]==num[1][2]) && (num[0][2]==num[2][2])) || ((num[0][0]==num[1][1]) && (num[0][0]==num[2][2])) || ((num[0][2]==num[1][1]) && (num[0][2]==num[2][0])) )
{
	gotoxy(29,13);{					//if condition true player 2 is win and game end using break
	
printf("player 2 is win");
break;}}
} 							//this is else bracket for 2nd palyer
y++;} 							//this is loop closing bracket

getch();
}
