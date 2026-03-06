void setup()
{
pinMode(13, OUTPUT);
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(12, OUTPUT);
pinMode(2, OUTPUT);
pinMode(7, OUTPUT);
pinMode(4, OUTPUT);
pinMode(6, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
}

void loop()
{
    digitalWrite(13, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    delay(2000); // Wait for 2000 milliseconds
}