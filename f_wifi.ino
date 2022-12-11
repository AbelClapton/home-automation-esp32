void initWifi() {
	WiFi.mode(WIFI_STA);
	WiFi.begin(NETWORK_SSID, NETWORK_PASSWORD);

	Serial.printf("Connecting to %s", NETWORK_SSID);
	while (WiFi.status() != WL_CONNECTED) {
		delay(1000); print(".");
	}

	Serial.printf("Connected to %s, ", NETWORK_SSID);
}

unsigned long previousMillis = 0;

void checkWifi() {
	unsigned long currentMillis = millis();
	if ((WiFi.status() != WL_CONNECTED) && (currentMillis - previousMillis >= CHECK_WIFI_INTERVAL)) {
		Serial.println("Reconnecting to WiFi...");
		WiFi.disconnect();
		WiFi.reconnect();
		previousMillis = currentMillis;
	}
}
