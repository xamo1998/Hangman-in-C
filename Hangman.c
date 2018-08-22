#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#define ESPWORDS 80383
typedef char * String;
typedef struct Language{
	int id;
	String play,info,config,gameOver,win,exit, stats; 
	char words[ESPWORDS][25];
}Language;


void drawHead();
void drawTorso();
void drawLeftArm();
void drawLeftFoot();
void drawRightArm();
void drawRightFoot();
void drawRope();
void drawTitle(Language *);
void drawMenu();
void initialize(Language *);
void loadEnglishWords(Language *);
void loadSpanishWords(Language *);


int main(int argc, char *argvs[]){
	Language ENG;
	ENG.id=1;//English
	initialize(&ENG);
	drawTitle(&ENG);
		system("pause");

	drawHead();
		system("pause");

	drawTorso();
		system("pause");

	drawLeftArm();
		system("pause");

	drawLeftFoot();
		system("pause");

	drawRightFoot();
		system("pause");

	drawRope();
	system("pause");
	drawRightFoot();
	return 0;
}

void drawTitle(Language *lang){

 printf("			 _   _    _    _   _  ____ __  __    _    _   _ 	         \n");
 printf("			| | | |  / \\  | \\ | |/ ___|  \\/  |  / \\  | \\ | |	     \n");
 printf("			| |_| | / _ \\ |  \\| | |  _| |\\/| | / _ \\ |  \\| |	     \n");
 printf("			|  _  |/ ___ \\| |\\  | |_| | |  | |/ ___ \\| |\\  |	     \n");
 printf("			|_| |_/_/   \\_\\_| \\_|\\____|_|  |_/_/   \\_\\_| \\_|	     \n");
 printf("\n\n\n");
 printf("%55s\n",lang->play);
 printf("%55s\n",lang->config);
 printf("%55s\n",lang->stats);
 printf("%55s\n",lang->info);
 printf("%55s\n",lang->exit);
 printf("\n\n\n\nIntroduzca una opcion: ");
}

void drawMenu(){

}

void drawLeftArm(){
	system("cls");
	printf(" +===================+\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  O\n");
	printf("| |                 /|\n");
	printf("| |                   \n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");

}
void drawRightArm(){
	system("cls");
	printf(" +===================+\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  O\n");
	printf("| |                 /|\\\n");
	printf("| |                   \n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
}
void drawLeftFoot(){
	system("cls");
	printf(" +===================+\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  O\n");
	printf("| |                 /|\\\n");
	printf("| |                 / \n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
}
void drawRightFoot(){
	system("cls");
	printf(" +===================+\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  O\n");
	printf("| |                 /|\\\n");
	printf("| |                 / \\\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
}
void drawRope(){
	system("cls");
	printf(" +===================+\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  O\n");
	printf("| |                 /|\\\n");
	printf("| |                 / \\\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
}
void drawTorso(){
	system("cls");
	printf(" +===================+\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  O\n");
	printf("| |                  |\n");
	printf("| |                   \n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
}
void drawHead(){
	printf("\n\n\n\n\n");
	system("cls");
	printf(" +===================+\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  |\n");
	printf("| |                  O\n");
	printf("| |                   \n");
	printf("| |                   \n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
	printf("| |\n");
}

void initialize(Language *lang){
	setlocale(LC_ALL,"");
	if(lang->id==0)
		loadEnglishWords(lang);
	else
		loadSpanishWords(lang);
}

void loadSpanishWords(Language *lang){
	FILE *fp;
	int i=0;
	fp=fopen("listaEsp.txt", "r");
	if(fp==NULL){
		fprintf(stderr, "%s\n", "No se encuentra el archivo listaEsp.txt.\n");
		exit(1);
	}
	lang->play="1. Jugar";
	lang->config="2. Configuracion";
	lang->stats="3. Estadisticas";
	lang->info="4. Informacion";
	lang->exit="5. Salir";
	lang->gameOver="¡Has perdido!";
	lang->win="¡Has ganado!";
	/*lang->words=malloc(sizeof(char *)*ESPWORDS);
	if(lang->words==NULL){
		fprintf(stderr, "%s\n", "Ha habido un error, vuelve a abrir el juego. \n");
		exit(1);
	}*/

	while(i<ESPWORDS){
		fscanf(fp, "%s", &(lang->words[i]));
		//printf("%s\n",lang->words[i] );
		i++;
	}
}

void loadEnglishWords(Language *lang){

}
