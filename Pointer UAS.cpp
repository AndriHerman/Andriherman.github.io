#include <stdio.h>
#include <string.h>

// Fungsi keft : mengambil n karakter dari kiri string 
void left(char *string, int n) {
	
// jika n lebih kecil dari panjang string
// maka hanya mengambil sebanyak n karakter 
if (strlen(string) > n) {
string[n]= '\0';
}
} 

int main() {
char str[] = "pancasakti";

// Mengambil 5 karakter dari kiri string 
left(str, 5);

printf("Hasil:  %s\n", str);

return 0;
}