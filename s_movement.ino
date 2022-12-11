pinMode(HC_SR501_PIN, INPUT);

void readMovement() {
  return digitalRead(PIN_TO_SENSOR) == HIGH;
}

