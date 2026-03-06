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

    digitalWrite(8, HIGH);
    digitalWrite(12, HIGH);
    delay(5000); // Wait for 5000 milliseconds
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);
    delay(2000); // Wait for 2000 milliseconds
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    delay(3000); // Wait for 3000 milliseconds
    digitalWrite(2, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(7, HIGH);

    delay(2000); // Wait for 2000 milliseconds
    digitalWrite(4, HIGH);
    digitalWrite(12, HIGH);
    delay(5000); // Wait for 5000 milliseconds
    digitalWrite(4, LOW);
    digitalWrite(12, LOW);
    delay(2000); // Wait for 2000 milliseconds
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    delay(3000); // Wait for 3000 milliseconds
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(9, LOW);
    delay(2000); // Wait for 2000 milliseconds
    digitalWrite(8, HIGH);
    digitalWrite(4, HIGH);
    delay(5000); // Wait for 5000 milliseconds
    digitalWrite(8, LOW);
    digitalWrite(4, LOW);
}