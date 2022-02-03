int Lampen[10] ={12,11,10,9,8,7,6,5,4,3};
char input = A0;


void setup() {
  pinMode(input, INPUT);
  Serial.begin(9600);

    // def alle
    int a = 0;
    while(a<sizeof(Lampen)){
      //Serial.println("def pin:",a);
      pinMode(Lampen[a], OUTPUT);
      a++;
    };

      //alle an
    int i = 0;
    while(i<sizeof(Lampen)){
      //Serial.println(i);
      digitalWrite(Lampen[i], HIGH);
      i++;
    }; 
}
void loop() {
   int g = analogRead(input);
   Serial.println("volt jetzt:",g);  
   
   //mappen des puts                         to do here 
   //int out map(a,1264,0) 
   
    //an machen
   int i = 0;
    while(i<out){
      //Serial.println(i);
      digitalWrite(Lampen[i], HIGH);
      i++;
    };
    
    //die aus machen
    while(out<sizeof(Lampen)){
      //Serial.println(i);
      digitalWrite(Lampen[i], LOW);
      i++;
    }; 
}
