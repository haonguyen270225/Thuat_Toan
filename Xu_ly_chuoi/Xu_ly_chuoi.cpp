//Thu vien <cctype>
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
//Ham int isalpha(int ch) trong C/C++;
// int isalpha(int ch) tra ve so khac 0 => ch la chu cai , nguoc lai tra ve 0;

//Ham int isblank(int ch) trong C/C++;
//int isblank(int ch) tra ve khac 0 => ch la ki tu trong , nguoc lai bang 0;

//Ham int isdigit(int ch) trong C/C++; 
// int isdigit(int ch) tra ve khac 0 => ch la chu so , nguoc lai bang 0;

//Ham int islower(int char) trong C/C++;
//int islower(int char ) tra ve khac 0 => ch la chu thuong , nguoc lai bang 0;

//Ham int ispunct(int ch) trong C/C++;
//int ispunct(int ch) tra ve khac 0 => ch la ki tu dau cau , nguoc lai bang 0;


//Ham int tolower(int ch) trong C/C++;
//int tolower(int ch) tra ve phien ban chu thuong cua ch neu co .Neu khong , no se tra ve chinh ch;

// Ham char * strtok(char * str , char * delimiters);
//Trong do str : Xau ky tu can tach
// delimiters : Mot hoac nhieu ki tu can tach

int main(){
	char str[] = "abcd+_%; aeef";
	
	//Ham int isalpha(int ch);
	int count = 0;
	for( int i = 0 ; i < strlen(str); i++ ){
		if(isalpha(str[i]) != 0){
			count += 1;
		}
	}
	cout << "So ki tu thuoc bang alpha : "  << count << endl;
	cout << "So ki ty khong thuoc bang alpha : " << strlen(str) - count << endl;
	
	// int isblank(int char);
	int count1 = 0;
	for(int i = 0 ;i < strlen(str) ; i++ ){
		if(isblank(str[i]) != 0 ){
			count1 += 1;
		}
	}
	cout <<"So ki tu la dau cach la : " << count1 << endl;
	cout << "So ki tu khong phai la dau cach la : " << strlen(str) - count1 << endl;
	
	//Ham int isdigit(int ch);
	char str_isdigit[] = "1234567abc";
	int count_isdigit= 0;
	for(int i = 0 ; i < strlen(str_isdigit) ; i++ ){
		if(isdigit(str_isdigit[i]) != 0 ){
			count_isdigit += 1;
		}
	}
	cout << "So ki tu la chu so la :" << count_isdigit << endl;
	cout << "So ki tu khong la chu so la : " << strlen(str_isdigit) - count_isdigit << endl;
	
	//Ham int islower(int ch);
	char str_islower[] = "abc ABC";
	int count_islower = 0;
	cout <<"Cac ki tu viet  thuong la : ";
	for( int i = 0 ; i < strlen(str_islower) ; i++){
		if(islower(str_islower[i]) != 0 ){
			count_islower += 1;
			cout <<" "<<str_islower[i];
		}
	}
	cout <<"\nSo ki tu viet thuong la : " << count_islower << endl;
	
	//Ham int ispunct(int ch);
	char str_ispunct[] = "abg<?/\&*$!_~` ";
	int count_ispunct = 0;
	cout << "Cac ki tu la dau cau :";
	for( int i = 0 ; i < strlen(str_ispunct) ; i++){
		if(ispunct(str_ispunct[i]) != 0 ){
			cout << " " << str_ispunct[i];
			count_ispunct += 1;
		}
	}
	cout <<"\nSo luong dau cau la : " << count_ispunct << endl;
	
	//Ham int tolower(int ch)
	char str_tolower[] = "ABCabc 342424*+";
	cout << "Chuoi sau khi viet thuong la : ";
	for(int i = 0 ; i < strlen(str_tolower) ; i++ ){
		cout <<(char)tolower(str_tolower[i]); // putchar(tolower(str_tolower[i]));
	}
	
	// Ham char * strtok( char *str , char * delimiters);
	cout << "\n\nTach theo 1 ki tu : ";
	char str_strtok[] = "Nguyen Van A La HOC SInh cap 2!";
	cout << "\n\nXau ki tu ban dau : "<< str_strtok << endl;
	char *token = strtok(str_strtok , " ");
	while( token != NULL ){
		cout << token << endl;
		token = strtok(NULL , " ");
	}
	cout << "\n Tach theo nhieu ki tu :  ";
	char str_strtok2[] = "Nguyen-Van A&La Hoc ^ Sinh Cap + 2!";
	cout << "\n\n Xau ki tu ban dau : " << str_strtok2 << endl;
	token = strtok(str_strtok2, " -&^+");
	while(token != NULL ){
		cout << token << endl;
		token = strtok(NULL," -&^+");
	}
}
