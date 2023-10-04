//int allpin = 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13; РЅР°РґРѕ СЃРїСЂРѕСЃРёС‚СЊ СЂР°Р±РѕС‚Р°РµС‚ Р»Рё СЌС‚Рѕ

void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}



void loop()
{
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(1000);
    for(int i = 255; i >= 0; i--){
          //  analogWrite(allpin, i); РЅР°РґРѕ СЃРїСЂРѕСЃРёС‚СЊ СЂР°Р±РѕС‚Р°РµС‚ Р»Рё СЌС‚Рѕ
          // delay(5); РёР»Рё 10
        analogWrite(2, i);
        analogWrite(3, i);
        analogWrite(4, i);
        analogWrite(5, i);
        analogWrite(6, i);
        analogWrite(7, i);
        analogWrite(8, i);
        analogWrite(9, i);
        analogWrite(10, i);
        analogWrite(11, i);
        analogWrite(12, i);
        analogWrite(13, i);
        deley(5); // РёР»Рё 10

    }
    int value;
    value = Serial.read();
    while (value < 0 || value > 4095) {
        value = Serial.read();
    }

    int bin_val = 0;
    int i = 1;
    while (value > 0) {
        bin_val += (value % 2) * i;
        value /= 2;
        i *= 10;
    }


    while (bin_val > 0) {
        int j = 2;
        if (bin_val % 10 == 1) {
            digitalWrite(j, HIGH);
        }
        bin_val /= 10;
        ++j;
    }
}