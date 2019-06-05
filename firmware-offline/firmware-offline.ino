int pins[] = {2, 3, 4, 5, 6};
int seq[][20] = {
  {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0}
};

int tempo = 1000;
void setup()
{
  Serial.begin(115200);
  for (int i = 0; i < 5; i++) {
    pinMode(pins[i], OUTPUT);
  }
}



void loop()
{

  for (int y = 0; y < 20; y++) {
    for (int i = 0; i < 5; i++) {
      //Serial.print(pins[i]);
      //Serial.print("=");

      digitalWrite(pins[i], seq[i][y]);
      Serial.print(seq[i][y]);
      Serial.print(" ");

    }
    delay(tempo);
    Serial.println(";");
  }

  Serial.println();
}
