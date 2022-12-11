HTTPClient http;
const char* url = 
	HOST_ADDRESS + HOST_PORT + HOST_DATA_ENDPOINT

void sendData()
{
	http.begin(url);
	http.addHeader("Content-Type", "application/json");

	String requestBody;
	serializeJSON(data, requestBody);

	int responseCode = http.POST(requestBody);
	http.end();

	if(httpResponseCode > 0) {
		String response = http.getString();
		Serial.println(httpResponseCode);
		Serial.println(response);          
	} else {
		Serial.print("Error on sending data: ");
		Serial.println(httpResponseCode);
	}
}

