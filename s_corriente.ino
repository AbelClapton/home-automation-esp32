EnergyMonitor energyMonitor;
 
#define HOME_VOLTAGE 230.0;
#define VOLTAGE_CALIBRATION 1.6;
 
void initEnergyMonitor()
{
  energyMonitor.current(HC-SR501_PIN, VOLTAGE_CALIBRATION);
}
 
void loop()
{
  // Obtenemos el valor de la corriente eficaz
  // Pasamos el número de muestras que queremos tomar
  double Irms = energyMonitor.calcIrms(1484);
 
  // Calculamos la potencia aparente
  double potencia =  Irms * voltajeRed;
 
  // Mostramos la información por el monitor serie
  Serial.print("Potencia = ");
  Serial.print(potencia);
  Serial.print("    Irms = ");
  Serial.println(Irms);
}
