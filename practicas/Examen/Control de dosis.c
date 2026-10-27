# include < stdio.h>

int main() {

int n, i
char c;
int v1, v3;
float v2;
int horas;
float efectividad;
int salud_general;
char estado;
 if (scanf("%d", &n) != 1) {
     return 0;
 }
for (i=0; i < n; i++) {
    scanf(" %c %d %f %d", &c, &v1, &v2, &v3);
horas =0;
while (v3 <0) {
    v3= (v3/3)-2;
    horas++;
}

if (c == 'A')  efectividad = v1*v2+15.5
else efectividad = (v1*v2)/2.0-5.0;

salud_general = v1 + horas * 5 - v1 % 5 * 2 + (int)efectividad;
if  (horas > 3) salud_general = -5;

