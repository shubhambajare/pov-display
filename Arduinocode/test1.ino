int delayTime = 1; 
int charBreak = 2;

int timeperiod=5;

int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int LED8 = 9;
int LED9 = 10;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT); 
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);

  digitalWrite(LED9,1);
  Serial.begin(9600);
}

int a[] = {0,254, 9, 9, 254, 0};
int b[] = {0,255,153,153,102};
int c2[] = {0,126,129,129,66};
int d[] = {129,255,129,129,126};
int e[] = {0,255,137,137,0};
int f[] = {0,255,9,9,0};
int g[] = {0,126,129,161,226};
int h[] = {0,255,8,8,255};
int i[] = {0,129,255,129,0};
int j[] = {0,64,129,127,1};
int k[] = {0,255,24,102,129};
int l[] = {0,255,128,128,0};
int m[] = {255,3,12,3,255};
int n[] = {255,3,60,192,255};
int o[] = {0,126,129,129,126};
int p[] = {0,255,9,9,6};
int q[] = {126,129,161,126,128};
int r[] = {0,255,25,105,134};
int s[] = {0,198,137,145,99};
int t[] = {0,1,255,1,0};
int u[] = {0,127,128,128,127};
int v[] = {31,96,128,96,31};
int w[] = {255,192,48,192,255};
int x[] = {195,36,24,36,195};
int y[] = {3,4,248,4,3};
int z[] = {0,193,177,141,131};

int one[]={0,130,255,128,0};
int two[]={0,198,161,145,142};
int three[]={0,66,129,153,102};
int four[]={0,15,15,255,0};
int five[]={0,71,133,133,121};
int six[]={0,126,137,137,84};
int seven[]={0,193,49,13,3};
int eight[]={0,102,153,153,102};
int nine[]={0,14,145,145,126};

int dash[]={0,8,8,8,0};

void displayLine(int line)
{
  int myline;
  myline = line;
 
  if (myline>=128)  {digitalWrite(LED8, HIGH); myline-=128;}  else {digitalWrite(LED8, LOW);}
  if (myline>=64)  {digitalWrite(LED7, HIGH); myline-=64;}  else {digitalWrite(LED7, LOW);}
  if (myline>=32)  {digitalWrite(LED6, HIGH); myline-=32;}  else {digitalWrite(LED6, LOW);} 
  if (myline>=16) {digitalWrite(LED5, HIGH); myline-=16;} else {digitalWrite(LED5, LOW);}
  if (myline>=8)  {digitalWrite(LED4, HIGH); myline-=8;}  else {digitalWrite(LED4, LOW);}
  if (myline>=4)  {digitalWrite(LED3, HIGH); myline-=4;}  else {digitalWrite(LED3, LOW);}
  if (myline>=2)  {digitalWrite(LED2, HIGH); myline-=2;}  else {digitalWrite(LED2, LOW);}
  if (myline>=1)  {digitalWrite(LED1, HIGH); myline-=1;}  else {digitalWrite(LED1, LOW);} 
}

void displayChar(char c)
{
  if (c == 'a'){for (int i = 0; i <timeperiod; i++){displayLine(a[i]);delay(delayTime);}displayLine(0);}
  if (c == 'b'){for (int i = 0; i <timeperiod; i++){displayLine(b[i]);delay(delayTime);}displayLine(0);}
  if (c == 'c'){for (int i = 0; i <timeperiod; i++){displayLine(c2[i]);delay(delayTime);}displayLine(0);}
  if (c == 'd'){for (int i = 0; i <timeperiod; i++){displayLine(d[i]);delay(delayTime);}displayLine(0);}
  if (c == 'e'){for (int i = 0; i <timeperiod; i++){displayLine(e[i]);delay(delayTime);}displayLine(0);}
  if (c == 'f'){for (int i = 0; i <timeperiod; i++){displayLine(f[i]);delay(delayTime);}displayLine(0);}
  if (c == 'g'){for (int i = 0; i <timeperiod; i++){displayLine(g[i]);delay(delayTime);}displayLine(0);}
  if (c == 'h'){for (int i = 0; i <timeperiod; i++){displayLine(h[i]);delay(delayTime);}displayLine(0);} 
  if (c == 'i'){for (int it = 0; it <timeperiod; it++){displayLine(i[it]);delay(delayTime);}displayLine(0);}
  if (c == 'j'){for (int i = 0; i <timeperiod; i++){displayLine(j[i]);delay(delayTime);}displayLine(0);}
  if (c == 'k'){for (int i = 0; i <timeperiod; i++){displayLine(k[i]);delay(delayTime);}displayLine(0);}
  if (c == 'l'){for (int i = 0; i <timeperiod; i++){displayLine(l[i]);delay(delayTime);}displayLine(0);}
  if (c == 'm'){for (int i = 0; i <timeperiod; i++){displayLine(m[i]);delay(delayTime);}displayLine(0);}
  if (c == 'n'){for (int i = 0; i <timeperiod; i++){displayLine(n[i]);delay(delayTime);}displayLine(0);}
  if (c == 'o' || c=='0'){for (int i = 0; i <timeperiod; i++){displayLine(o[i]);delay(delayTime);}displayLine(0);}
  if (c == 'p'){for (int i = 0; i <timeperiod; i++){displayLine(p[i]);delay(delayTime);}displayLine(0);}
  if (c == 'q'){for (int i = 0; i <timeperiod; i++){displayLine(q[i]);delay(delayTime);}displayLine(0);}
  if (c == 'r'){for (int i = 0; i <timeperiod; i++){displayLine(r[i]);delay(delayTime);}displayLine(0);}
  if (c == 's'){for (int i = 0; i <timeperiod; i++){displayLine(s[i]);delay(delayTime);}displayLine(0);}
  if (c == 't'){for (int i = 0; i <timeperiod; i++){displayLine(t[i]);delay(delayTime);}displayLine(0);}
  if (c == 'u'){for (int i = 0; i <timeperiod; i++){displayLine(u[i]);delay(delayTime);}displayLine(0);}
  if (c == 'v'){for (int i = 0; i <timeperiod; i++){displayLine(v[i]);delay(delayTime);}displayLine(0);}
  if (c == 'w'){for (int i = 0; i <timeperiod; i++){displayLine(w[i]);delay(delayTime);}displayLine(0);}
  if (c == 'x'){for (int i = 0; i <timeperiod; i++){displayLine(x[i]);delay(delayTime);}displayLine(0);}
  if (c == 'y'){for (int i = 0; i <timeperiod; i++){displayLine(y[i]);delay(delayTime);}displayLine(0);}
  if (c == 'z'){for (int i = 0; i <timeperiod; i++){displayLine(z[i]);delay(delayTime);}displayLine(0);}
  
  if (c == '1'){for (int i = 0; i <timeperiod; i++){displayLine(one[i]);delay(delayTime);}displayLine(0);}
  if (c == '2'){for (int i = 0; i <timeperiod; i++){displayLine(two[i]);delay(delayTime);}displayLine(0);}
  if (c == '3'){for (int i = 0; i <timeperiod; i++){displayLine(three[i]);delay(delayTime);}displayLine(0);}
  if (c == '4'){for (int i = 0; i <timeperiod; i++){displayLine(four[i]);delay(delayTime);}displayLine(0);}
  if (c == '5'){for (int i = 0; i <timeperiod; i++){displayLine(five[i]);delay(delayTime);}displayLine(0);}
  if (c == '6'){for (int i = 0; i <timeperiod; i++){displayLine(six[i]);delay(delayTime);}displayLine(0);}
  if (c == '7'){for (int i = 0; i <timeperiod; i++){displayLine(seven[i]);delay(delayTime);}displayLine(0);}
  if (c == '8'){for (int i = 0; i <timeperiod; i++){displayLine(eight[i]);delay(delayTime);}displayLine(0);}
  if (c == '9'){for (int i = 0; i <timeperiod; i++){displayLine(nine[i]);delay(delayTime);}displayLine(0);}

  if (c == '-'){for (int i = 0; i <timeperiod; i++){displayLine(dash[i]);delay(delayTime);}displayLine(0);}
   
  delay(charBreak);
}

void displayString(char* s)
{
  for (int i = 0; i<=strlen(s); i++)
  {
    displayChar(s[i]);
  }
}

void loop()
{   
  displayString("convene-2019");
  //displayString("shubham");
  delay(50);
}

void loop1()
{
  digitalWrite(LED1, 1);
  delay(500);
  digitalWrite(LED1, 0);
  delay(500);
  digitalWrite(LED2, 1);
  delay(500);
  digitalWrite(LED2, 0);
  delay(500);  
  digitalWrite(LED3, 1);
  delay(500);
  digitalWrite(LED3, 0);
  delay(500);
  digitalWrite(LED4, 1);
  delay(500);
  digitalWrite(LED4, 0);
  delay(500);
  digitalWrite(LED5, 1);
  delay(500);
  digitalWrite(LED5, 0);
  delay(500);
  digitalWrite(LED6, 1);
  delay(500);
  digitalWrite(LED6, 0);
  delay(500);
  digitalWrite(LED7, 1);
  delay(500);
  digitalWrite(LED7, 0);
  delay(500);
  digitalWrite(LED8, 1);
  delay(500);
  digitalWrite(LED8, 0);
  delay(500);
  digitalWrite(LED9, 1);
  delay(500);
  digitalWrite(LED9, 0);
  delay(500);
}
