DHT dht(DHT_PIN, DHT_TYPE);

void initHumiditySensor()
{
	dht.begin();
}

float readHumidity() {
	return dht.readHumidity();
}

float readTemperatureCelsius() {
	return dht.readTemperature();
}

float readTemperatureFarenheit() {
	return dht.readTemperature(true);
}
