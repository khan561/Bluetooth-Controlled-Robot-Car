char t;

void setup() {
	pinMode(13,OUTPUT);
	pinMode(12,OUTPUT);
	pinMode(11,OUTPUT);
	pinMode(10,OUTPUT);

	Serial.begin(9600);
}

void loop() {
	if(Serial.available()) {
		t = Serial.read();
		Serial.println(t);
	}
}

 switch(t)
 {
 	case '1':
 	digitalWrite(13,HIGH);
 	digitalWrite(12,LOW);
 	digitalWrite(11,HIGH);
 	digitalWrite(10,LOW);
 	break;

 	case '2':
 	digitalWrite(13,LOW);
 	digitalWrite(12,HIGH);
 	digitalWrite(11,LOW);
 	digitalWrite(0,HIGH);
 	break;

 	case '3':
 	digitalWrite(13,LOW);
 	digitalWrite(12,LOW);
 	digitalWrite(11,HIGH);
 	digitalWrite(10,LOW);
 	break;

 	case '4':
 	digitalWrite(13,HIGH);
 	digitalWrite(12,LOW);
 	digitalWrite(11,LOW);
 	digitalWrite(10,LOW);
 	break;

 	default:
 	digitalWrite(13,LOW);
 	digitalWrite(12,LOW);
 	digitalWrite(11,LOW);
 	digitalWrite(10,LOW);
 	break;
 }
delay(100);







/*
