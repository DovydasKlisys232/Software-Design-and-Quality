# This code adds extra functionality to the WeatherDataClass code

class WeatherData:

    def collectWeatherData(self, airTemp, windSpeeds, windDirection):
        self.airTemp = airTemp
        self.windSpeeds = windSpeeds
        self.windDirection = windDirection

    def summarise(self):
        return 'Air temperature: {}. Wind speed: {}. Wind direction: {}.'.format(self.airTemp, self.windSpeeds, self.windDirection)
    