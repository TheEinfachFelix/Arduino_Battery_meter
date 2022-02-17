int Lampen[10] = {12,11,10,9,8,7,6,5,4,3};
char input = A0;
int out;
string debug = "";

void setup() {  
  Serial.begin(9600);
//pins Definieren
  pinMode(input, INPUT);
// output pins klug Definieren
  int a = 0;
  while(a<sizeof(Lampen)){
    pinMode(Lampen[a], OUTPUT);
    a++;
  };
  Serial.println("OK Lets go!")
}

void loop() {
  int g = analogRead(input);
  debug = debug + "v: " + g;  
  out = map(g,0,1000,0,10);
  debug = debug + ",map: " + out + ",LEDs: "
    
//leds an machen
  int f = 0;
  while(f<out){
    debug = debug + "1|"
    digitalWrite(Lampen[f], HIGH);
    f++;
  };
//rest aus machen 
  while(f<10){
    debug = debug + "0|"
    digitalWrite(Lampen[f], LOW);
    f++;
  }; 
  Serial.println(debug)
}
