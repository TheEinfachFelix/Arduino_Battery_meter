int Lampen[10] = {12,11,10,9,8,7,6,5,4,3};
char input = A0;
int out;
String debug = "";

#define ELEMENTCOUNT(x)  (sizeof(x) / sizeof(x[0]))

void setup() {
  Serial.begin(9600);
//pins Definieren
  pinMode(input, INPUT);
// output pins klug Definieren
  int a = 0;
for(int index = 0; index < ELEMENTCOUNT(Lampen); index++){
    pinMode(Lampen[index], OUTPUT);
    a++;
  };
  Serial.println("OK Lets go!");
}

void loop() {
  int input = analogRead(input);
  debug = debug + "v: " + input;
  out = map(input,0,1000,0,10);
  debug = debug + ",map: " + out + ",LEDs: ";

//leds an machen
  int f = 0;
  while(f<out){
    debug = debug + "1|";
    digitalWrite(Lampen[f], HIGH);
    f++;
  };
//rest aus machen
  while(f<10){
    debug = debug + "0|";
    digitalWrite(Lampen[f], LOW);
    f++;
  };
  delay(50);
  Serial.println(debug);
  debug = "";
}
