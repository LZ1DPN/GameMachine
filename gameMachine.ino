// GameMachine, v1.0/2018
// set serial port to 115200,8,n,1

//DEFINE PINOUTS
#define LED1 (2) // led
#define LED2 (3) // led
#define LED3 (4) // led 
#define LED4 (5) // led 
#define LED5 (6) // led 
#define LED6 (7) // led 
#define LED7 (8) // led 
#define LED8 (9) // led 
#define LED9 (10) // led 
#define LED10 (11) // led 

#define BTN1 (A0) // Button 
#define BTN2 (A1) // Button 
#define BTN3 (A2) // Button 
#define BTN4 (A3) // Button 
#define BTN5 (A4) // Button 
#define BTN6 (A5) // Button 
#define BTN7 (A6) // Button 
#define BTN8 (A7) // Button 
#define BTN9 (A8) // Button 
#define BTN10 (A9) // Button 
#define pulseHigh(pin) {digitalWrite(pin, HIGH); digitalWrite(pin, LOW); }

//VARIABLES
int incomingByte = 0;   // for incoming serial data
int numberByte = 20;
int data[20];
int i = 0;
int changeSend = 0;
int BTNON = 0;
//END VARIABLES

//START SETUP
void setup() {
	Serial.begin(115200);     // open serial port
	for (i = 0; i < numberByte; i = i + 1) {
		data[i] = 0;
	}
	pinMode(LED1, OUTPUT);
	digitalWrite(LED1, LOW);
	pinMode(LED2, OUTPUT);
	digitalWrite(LED2, LOW);
	pinMode(LED3, OUTPUT);
	digitalWrite(LED3, LOW);
	pinMode(LED4, OUTPUT);
	digitalWrite(LED4, LOW);
	pinMode(LED5, OUTPUT);
	digitalWrite(LED5, LOW);
	pinMode(LED6, OUTPUT);
	digitalWrite(LED6, LOW);
	pinMode(LED7, OUTPUT);
	digitalWrite(LED7, LOW);
	pinMode(LED8, OUTPUT);
	digitalWrite(LED8, LOW);
	pinMode(LED9, OUTPUT);
	digitalWrite(LED9, LOW);
	pinMode(LED10, OUTPUT);
	digitalWrite(LED10, LOW);
		
	pinMode(BTN1, INPUT);
	digitalWrite(BTN1, HIGH);
	pinMode(BTN2, INPUT);
	digitalWrite(BTN2, HIGH);
	pinMode(BTN3, INPUT);
	digitalWrite(BTN3, HIGH);
	pinMode(BTN4, INPUT);
	digitalWrite(BTN4, HIGH);
	pinMode(BTN5, INPUT);
	digitalWrite(BTN5, HIGH);
	pinMode(BTN6, INPUT);
	digitalWrite(BTN6, HIGH);
	pinMode(BTN7, INPUT);
	digitalWrite(BTN7, HIGH);
	pinMode(BTN8, INPUT);
	digitalWrite(BTN8, HIGH);
	pinMode(BTN9, INPUT);
	digitalWrite(BTN9, HIGH);
	pinMode(BTN10, INPUT);
	digitalWrite(BTN10, HIGH);
}
//END SETUP

// START LOOP
void loop() {
	BTNON = 1;
	BTNON = digitalRead(BTN1);    
    if(BTNON == LOW){
		data[10] = 1;	
	}else{
		data[10] = 0;
	}
	
	BTNON = 1;
	BTNON = digitalRead(BTN2);
	if(BTNON == LOW){
		data[11] = 1;
	}else{
		data[11] = 0;
	}	
	
	BTNON = 1;
	BTNON = digitalRead(BTN3);
	if(BTNON == LOW){
		data[12] = 1;
	}else{
		data[12] = 0;
	}	
	
	BTNON = 1;
	BTNON = digitalRead(BTN4);
	if(BTNON == LOW){
		data[13] = 1;
	}else{
		data[13] = 0;
	}	
	
	BTNON = 1;
	BTNON = digitalRead(BTN5);
	if(BTNON == LOW){
		data[14] = 1;
	}else{
		data[14] = 0;
	}	
	
	BTNON = 1;
	BTNON = digitalRead(BTN6);
	if(BTNON == LOW){
		data[15] = 1;
	}else{
		data[15] = 0;
	}	
	
	BTNON = 1;
	BTNON = digitalRead(BTN7);
	if(BTNON == LOW){
		data[16] = 1;
	}else{
		data[16] = 0;
	}	
	
	BTNON = 1;
	BTNON = digitalRead(BTN8);
	if(BTNON == LOW){
		data[17] = 1;
	}else{
		data[17] = 0;
	}	
	
	BTNON = 1;
	BTNON = digitalRead(BTN9);
	if(BTNON == LOW){
		data[18] = 1;
	}else{
		data[18] = 0;
	}	
	
	BTNON = 1;
	BTNON = digitalRead(BTN10);
	if(BTNON == LOW){
		data[19] = 1;
	}else{
		data[19] = 0;
	}	
	
//
  for (i = 0; i < (numberByte); i = i + 1) {
	    Serial.write(data[i]);
  }

//
		
	if (Serial.available() > 0) {
		for (i = 0; i < (numberByte); i = i + 1) {
			data[i] = Serial.read();
			//Serial.println(data[i], DEC);  // for test only
		}
	}
	
	if (data[0] == 1) {
		digitalWrite(LED1, HIGH);
	}else{
		digitalWrite(LED1, LOW);
	}
	
	if (data[1] == 1) {
		digitalWrite(LED2, HIGH);
	}else{
		digitalWrite(LED2, LOW);
	}
	
	if (data[2] == 1) {
		digitalWrite(LED3, HIGH);
	}else{
		digitalWrite(LED3, LOW);
	}
	
	if (data[3] == 1) {
		digitalWrite(LED4, HIGH);
	}else{
		digitalWrite(LED4, LOW);
	}
	
	if (data[4] == 1) {
		digitalWrite(LED5, HIGH);
	}else{
		digitalWrite(LED5, LOW);
	}
	
	if (data[5] == 1) {
		digitalWrite(LED6, HIGH);
	}else{
		digitalWrite(LED6, LOW);
	}
	
	if (data[6] == 1) {
		digitalWrite(LED7, HIGH);
	}else{
		digitalWrite(LED7, LOW);
	}
	
	if (data[7] == 1) {
		digitalWrite(LED8, HIGH);
	}else{
		digitalWrite(LED8, LOW);
	}
	
	if (data[8] == 1) {
		digitalWrite(LED9, HIGH);
	}else{
		digitalWrite(LED9, LOW);
	}
	
	if (data[9] == 1) {
		digitalWrite(LED10, HIGH);
	}else{
		digitalWrite(LED10, LOW);
	}
	
}
//END LOOP
//EOF
