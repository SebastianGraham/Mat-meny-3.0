#include <conio.h>/*jeg bruker denne får få "getch" funskjoene*/
#include <iostream> 
#include <windows.h>
using namespace std;
/*______FUNCSONS END gotoXY_________________*/
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // used for gotoXY
COORD CursorPosition; // used for gotoXY
void gotoXY(int, int);//definer gotoXY funksjonen

void PressEnterToContinue() { //enter to continu funsksonen
	bool EnterToStopWhile = true;
	printf( "Press ENTER to continue... " );
	fflush( stdin); //dette tømer allt in
	while(EnterToStopWhile) { //veneter på enter tryk
		if(GetAsyncKeyState(VK_RETURN)) {
			EnterToStopWhile=false;
		};
	}
	fflush( stdin);
}
void NyKunde() {
	gotoXY(44,8);
	cout << "Velkomen til kuben kantine";
	gotoXY(49,10);
	cout << "egen bestiling";
	gotoXY(44,15);
	cout << "_____________________________";
	gotoXY(44,16);
	cout << " ";
	gotoXY(46,17);
	cout << "tryk en knap for å forsete";
	gotoXY(48,18);
	cout << "";
	gotoXY(42,23);
	cout << "";
	gotoXY(43,24);
	cout << "";
	system("pause>nul");// or Sleep (5000);
	system("cls");
}
void ProgramStart() {
	system("color f4"); //start scren
	gotoXY(44,8);
	cout << "mat meny program vare starter";
	gotoXY(44,10);
	cout << "laget av Sebastian S.G.Hegna";
	gotoXY(44,15);
	cout << "_____________________________";
	gotoXY(44,16);
	cout << " ";
	gotoXY(46,17);
	cout << "tryk en knap for å forsete";
	gotoXY(48,18);
	cout << "";
	gotoXY(42,23);
	cout << "";
	gotoXY(43,24);
	cout << "";
	system("pause>nul");// or Sleep (5000);
	system("cls");
	system("color 0f"); //dene coden byter farge
}
//================= cros velu
int NrIskaffe = 0, NrSlush = 0, NrJuse = 0, NrMelk = 0,
    PrisIskaffe=18, PrisSlush=25, PrisJuse=20, PrisMelk=15,
    NrPizza = 0, NrKebab = 0, NrRunstyke = 0, NrJugurt = 0,
    PrisPizza=45, PrisKebab=45, PrisRunstyke=25, PrisJugurt=20;
int PrisTottalt = 0;

void Kvitering() {
	int bx=7, SumPizza=0, SumKebab=0, SumRunstyke=0, SumJugurt=0, SumIskaffe=0, SumSlush=0, SumJuse=0, SumMelk=0;
	gotoXY(68,bx);
	printf("du valgte:\n");
	bx=bx+1;
	if (NrPizza >0) {
		SumPizza = NrPizza * PrisPizza;
		gotoXY(70,bx);
		printf("Pizza.......%d...........%dkr\n", NrPizza, SumPizza);
		bx=bx+1;
	}
	if (NrKebab >0) {
		SumKebab = NrKebab * PrisKebab;
		gotoXY(70,bx);
		printf("kebab.......%d...........%dkr\n", NrKebab, SumKebab);
		bx=bx+1;
	}
	if (NrRunstyke >0) {
		SumRunstyke = NrRunstyke * PrisRunstyke;
		gotoXY(70,bx);
		printf("runstyke....%d...........%dkr\n", NrRunstyke, SumRunstyke);
		bx=bx+1;
	}
	if (NrJugurt >0) {
		SumJugurt = NrJugurt * PrisJugurt;
		gotoXY(70,bx);
		printf("jugurt......%d...........%dkr\n", NrJugurt, SumJugurt);
		bx=bx+1;
	}
	if (NrIskaffe >0) {
		SumIskaffe = NrIskaffe * PrisIskaffe;
		gotoXY(70,bx);
		printf("iakaffe.....%d...........%dkr\n", NrIskaffe, SumIskaffe);
		bx=bx+1;
	}
	if (NrSlush >0) {
		SumSlush = NrSlush * PrisSlush;
		gotoXY(70,bx);
		printf("slush.......%d...........%dkr\n", NrSlush, SumSlush);
		bx=bx+1;
	}
	if (NrJuse >0) {
		SumJuse = NrJuse * PrisJuse;
		gotoXY(70,bx);
		printf("juse........%d...........%dkr\n", NrJuse, SumJuse);
		bx=bx+1;
	}
	if (NrMelk >0) {
		SumMelk = NrMelk * PrisMelk;
		gotoXY(70,bx);
		printf("melk........%d...........%dkr\n", NrMelk, SumMelk);
		bx=bx+1;
	}
	PrisTottalt=SumPizza+SumKebab+SumRunstyke+SumJugurt+SumIskaffe+SumSlush+SumJuse+SumMelk;
	gotoXY(68,bx);
	if (PrisTottalt >0){
		printf("sum......................%dkr\n", PrisTottalt);
	}
}
void MatMeny() {
	system("cls");
	bool while2 = true;
	int fx=7,fy=15, food_menu_item=0;
	while(while2) {
		Kvitering();
		fflush( stdin); // meny idikatorer
		gotoXY(15,4);
		cout << "velg hav du skla ha"<< endl;
		gotoXY(19,7);
		cout << "+pizza" << endl;
		gotoXY(19,8);
		cout << "+kebab" << endl;
		gotoXY(19,9);
		cout << "+runstyke" << endl;
		gotoXY(19,10);
		cout << "+youghurt" << endl;
		gotoXY(19,11);
		cout << "tilbake" << endl;

		gotoXY(33,7);
		cout << "-pizza" << endl;
		gotoXY(33,8);
		cout << "-kebab" << endl;
		gotoXY(33,9);
		cout << "-runstyke" << endl;
		gotoXY(33,10);
		cout << "-youghurt" << endl;
		gotoXY(33,11);
		cout << "fjern alt" << endl;

		gotoXY(fy,fx); cout << "->";
		/*_______________BILL*/
		system("pause>nul");
		if(GetAsyncKeyState(VK_DOWN) && fx !=11) { //down buten press
			gotoXY(fy,fx); cout << "  "; fx++;
			gotoXY(fy,fx); cout << "->"; food_menu_item++;
			continue;
		}
		if(GetAsyncKeyState(VK_UP) && fx !=7) { //up buten press
			gotoXY(fy,fx); cout << "  "; fx--;
			gotoXY(fy,fx); cout << "->"; food_menu_item--;
			continue;
		}
		if(GetAsyncKeyState(VK_RIGHT) && fy !=29){//up buten press
			gotoXY(fy,fx); cout << "  "; fy+=14;
			gotoXY(fy,fx); cout << "->"; food_menu_item+=5;
			continue;
		}
		if(GetAsyncKeyState(VK_LEFT) && fy !=15){//up buten press
			gotoXY(fy,fx); cout << "  "; fy-=14;
			gotoXY(fy,fx); cout << "->"; food_menu_item-=5;
			continue;
		}
		if(GetAsyncKeyState(VK_RETURN)) {
			switch(food_menu_item) {
				case 0: { //_______+pizza
					NrPizza++;
					system("cls");
					break;
				}//case 0
				case 1: { //_______+kebab
					NrKebab++;
					system("cls");
					break;
				}//case 1
				case 2: { //_______+runnstyk
					NrRunstyke++;
					system("cls");
					break;
				}//case 2
				case 3: { //______+jugurt
					NrJugurt++;
					system("cls");
					break;
				};
				case 4: { //______tilbake
					system("cls");
					while2=false;
					break;
				}//case 3
				case 5: { //_______-pizza
					if(NrPizza !=0){
						NrPizza--;
						system("cls");
						}
					break;
				}//case 0
				case 6: { //_______-kebab
					if(NrKebab !=0){
						NrKebab--;
						system("cls");
					}
					break;
				}//case 1
				case 7: { //_______-runstyke
					if(NrRunstyke !=0){
						NrRunstyke--;
						system("cls");
					}
					break;
				}//case 2
				case 8: { //_______-jugurt
					if(NrJugurt !=0){
						NrJugurt--;
						system("cls");
					}
					break;
				};
				case 9: { //_______set allt mat til 0
					NrPizza=0;
					NrKebab=0;
					NrRunstyke=0;
					NrJugurt=0;
					system("cls");
					break;
				}//case 2
				system("cls");
			}//swhitc
		}//if enter ky
	}//While 2 food
}
void DrikeMeny() {
	system("cls");
	bool while2 = true;
	int dx=7,dy=15, drink_menu_item=0;
	while(while2) {
		Kvitering();
		fflush( stdin); // meny idikatorer
		gotoXY(15,4);
		cout << "velg hav du skla ha"<< endl;
		gotoXY(19,7); cout << "+iskaffe" << endl;
		gotoXY(19,8); cout << "+slush" << endl;
		gotoXY(19,9); cout << "+juice" << endl;
		gotoXY(19,10); cout << "+melk" << endl;
		gotoXY(19,11); cout << "tilbake" << endl;

		gotoXY(33,7); cout << "-iskaffe" << endl;
		gotoXY(33,8); cout << "-slush" << endl;
		gotoXY(33,9); cout << "-juice" << endl;
		gotoXY(33,10); cout << "-melk" << endl;
		gotoXY(33,11); cout << "fjern alt" << endl;

		gotoXY(dy,dx); cout << "->";
		system("pause>nul");
		if(GetAsyncKeyState(VK_DOWN) && dx !=11) { //down buten press
			gotoXY(dy,dx); cout << "  "; dx++;
			gotoXY(dy,dx); cout << "->"; drink_menu_item++;
			continue;
		}
		if(GetAsyncKeyState(VK_UP) && dx !=7) { //up buten press
			gotoXY(dy,dx); cout << "  "; dx--;
			gotoXY(dy,dx); cout << "->"; drink_menu_item--;
			continue;
		}
		if(GetAsyncKeyState(VK_RIGHT) && dy !=29){//up buten press
			gotoXY(dy,dx); cout << "  "; dy+=14;
			gotoXY(dy,dx); cout << "->"; drink_menu_item+=5;
			continue;
		}
		if(GetAsyncKeyState(VK_LEFT) && dy !=15){//up buten press
			gotoXY(dy,dx); cout << "  "; dy-=14;
			gotoXY(dy,dx); cout << "->"; drink_menu_item-=5;
			continue;
		}
		if(GetAsyncKeyState(VK_RETURN)) {
			switch(drink_menu_item) {
				case 0: { //_______+iskaffe
					NrIskaffe++;
					break;
				}//case 0
				case 1: { //_______+slush
					NrSlush++;
					break;
				}//case 1
				case 2: { //_______+juse
					NrJuse++;
					break;
				}//case 2
				case 3: { //_______+milk
					NrMelk++;
					break;
				};
				case 4: { //______tilbake
					system("cls");
					while2=false;
					break;
				}//case 3
				case 5: { //_______-iskaffe
					if(NrIskaffe !=0){
						NrIskaffe--;
					}
						break;
				}//case 0
				case 6: { //_______-slush
					if(NrSlush !=0){
						NrSlush--;
					}
					break;
				}//case 1
				case 7: { //_______-juse
					if(NrJuse !=0){
						NrJuse--;
					}
					break;
				}//case 2
				case 8: { //_______-melk
					if(NrMelk !=0){
						NrMelk--;
					}
					break;
				};
				case 9: { //_______fjern allt
					NrIskaffe=0;
					NrSlush=0;
					NrJuse=0;
					NrMelk=0;
					break;
				}//case 2
				system("cls");
			}//swhitc
			system("cls");//ryder etter meny valg
		}//if enter ky
	}//While 2 food
}
void PrintUt(){
	int bx=7, SumPizza=0, SumKebab=0, SumRunstyke=0, SumJugurt=0, SumIskaffe=0, SumSlush=0, SumJuse=0, SumMelk=0;
	gotoXY(68,bx);
	FILE *fptr;
	fptr = fopen("Kvitering.txt", "w+");
	if(fptr == NULL){
		printf("no file\n");
		return;
	}
	fprintf(fptr, "du valgte:\n");
	bx=bx+1;
	if (NrPizza >0) {
		SumPizza = NrPizza * PrisPizza;
		fprintf(fptr, "	Pizza.......%d...........%dkr\n", NrPizza, SumPizza);
		bx=bx+1;
	}
	if (NrKebab >0) {
		SumKebab = NrKebab * PrisKebab;
		fprintf(fptr, "	kebab.......%d...........%dkr\n", NrKebab, SumKebab);
		bx=bx+1;
	}
	if (NrRunstyke >0) {
		SumRunstyke = NrRunstyke * PrisRunstyke;
		fprintf(fptr, "	runstyke....%d...........%dkr\n", NrRunstyke, SumRunstyke);
		bx=bx+1;
	}
	if (NrJugurt >0) {
		SumJugurt = NrJugurt * PrisJugurt;
		fprintf(fptr, "	jugurt......%d...........%dkr\n", NrJugurt, SumJugurt);
		bx=bx+1;
	}
	if (NrIskaffe >0) {
		SumIskaffe = NrIskaffe * PrisIskaffe;
		fprintf(fptr, "	iakaffe.....%d...........%dkr\n", NrIskaffe, SumIskaffe);
		bx=bx+1;
	}
	if (NrSlush >0) {
		SumSlush = NrSlush * PrisSlush;
		fprintf(fptr, "	slush.......%d...........%dkr\n", NrSlush, SumSlush);
		bx=bx+1;
	}
	if (NrJuse >0) {
		SumJuse = NrJuse * PrisJuse;
		fprintf(fptr, "	juse........%d...........%dkr\n", NrJuse, SumJuse);
		bx=bx+1;
	}
	if (NrMelk >0) {
		SumMelk = NrMelk * PrisMelk;
		fprintf(fptr, "	melk........%d...........%dkr\n", NrMelk, SumMelk);
		bx=bx+1;
	}
	PrisTottalt=SumPizza+SumKebab+SumRunstyke+SumJugurt+SumIskaffe+SumSlush+SumJuse+SumMelk;
	if (PrisTottalt >0){
		fprintf(fptr, "sum......................%dkr\n", PrisTottalt);
		fclose(fptr);
		system("notepad /p Kvitering.txt");
		/*med å ha /p så printer den ut dokumente. uten åpner den de bare.*/	
		gotoXY(25,14); printf("\nSkriver ut kvitering");
		gotoXY(10,15);
		getch();//venter på 1 innput
	}
//seter allt tilbake til nul og gjør kalr til neste kunde
	
}
int main() {
	system("color 0f");
	ProgramStart();
	int menu_item=0, x=7,y=15, bx=5;
	bool while_1=true, Bestiling;
	while(while_1) {
		system("cls");
		if(Bestiling==true) {
			NyKunde();
			Bestiling=false;
		}
		Kvitering();
		fflush( stdin); // meny idikatorer
		gotoXY(15,4);
		cout << "velg hav du skla ha"<< endl;
		gotoXY(19,7);
		cout << "Mat" << endl;
		gotoXY(19,8);
		cout << "Drike" << endl;
		gotoXY(19,9);
		cout << "--------------------" << endl;
		gotoXY(19,10);
		cout << "code til toalete" << endl;
		gotoXY(19,11);
		cout << "peint ut kvitering" << endl;
		gotoXY(y,x);
		cout << "->";
		/*_______________BILL*/ 

		system("pause>nul");

		if(GetAsyncKeyState(VK_DOWN) && x !=11) { //down buten press
			bool FMI2=true; while(FMI2){
				gotoXY(15,x); cout << "  ";	x++;
				gotoXY(15,x); cout << "->"; menu_item++;
				if(menu_item !=2){
					FMI2=false;
				}
			}
			continue;
		}
		if(GetAsyncKeyState(VK_UP) && x !=7) { //up buten press
			bool FMI2=true; while(FMI2){
				gotoXY(15,x); cout << "  "; x--;
				gotoXY(15,x); cout << "->"; menu_item--;
				if(menu_item !=2){
					FMI2=false;
				}
			}
			continue;
		}
		if(GetAsyncKeyState(VK_RIGHT)||(VK_RETURN)){
			switch(menu_item) {
				case 0: {
					MatMeny();
					break;
				}
				case 1: {
					DrikeMeny();
					break;
				}//case 1
				case 2: { //er ikke i bruke
					break;
				}//case 2
				case 3: { //_______code til bake
					int TamRN;
					TamRN = rand()%8999 + 1000;
					system("cls");
					system("color 4f");
					gotoXY(20,4); cout << "Code til Toalett er " << TamRN;
					gotoXY(18,20);
					PressEnterToContinue();
					gotoXY(18,20);
					PressEnterToContinue();
					system("color 0f");
					break;
				};
				case 4: { //________print ut kvitering
					bool HeppyCustemer = false, IsThatIt = true;
					int IMenu=0,Iy= 25; 
					system("cls");
					Kvitering();
					gotoXY(20,7); cout << "Er dette alt du skla ha??";
					gotoXY(25,10); cout << "ja";
					gotoXY(36,10); cout << "nei";
					gotoXY(25,11); cout << "---";
					while (IsThatIt){
					system("pause>nul");//pauser programe sån at du kan velge.
						if(GetAsyncKeyState(VK_RIGHT) && Iy !=36 && IMenu !=1){//up buten press
							gotoXY(Iy,11); cout << "   "; Iy+=11;
							gotoXY(Iy,11); cout << "---"; IMenu++;
							continue;
							}
						if(GetAsyncKeyState(VK_LEFT) && Iy !=25 && IMenu !=0){//up buten press
							gotoXY(Iy,11); cout << "   "; Iy-=11;
							gotoXY(Iy,11); cout << "---"; IMenu--;
							continue;
							}
						if(GetAsyncKeyState(VK_RETURN)) {
							switch(IMenu) {
								case 0: { //_______ja
									HeppyCustemer=true;
									IsThatIt=false;
									break;
									}//case 0
								case 1: { //_______nei
									HeppyCustemer=false;
									IsThatIt=false;
									break;
								}//case 1
							}//switch
						}//if vk return
					}//is thet it wheel
					if (HeppyCustemer == true){
						PrintUt();
						system("cls");
						NrIskaffe=0;
						NrSlush=0;
						NrJuse=0;
						NrMelk=0;
						NrPizza=0;
						NrKebab=0;
						NrRunstyke=0;
						NrJugurt=0;
						menu_item =0;
						x=7;
						Bestiling=true;
						}
					if	(HeppyCustemer == false){
						
					}
					break;
				}//case 3
				system("cls");
			}//swhitc
			system("cls");//ryder etter meny valg
		}//if enter ky
	}//While 1

	return PrisTottalt;
}//int main________________

void gotoXY(int x, int y) { //dette gir gotoXY som brukes til
	CursorPosition.X=x;	  //flyte skriver curseren
	CursorPosition.Y=y;
	SetConsoleCursorPosition(console,CursorPosition);
};