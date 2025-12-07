# This code implements the class diagram from the CA05 lab sheet
# This code only contains the definition of the one class with its attributes and operations

class WeatherData:

    def collectWeatherData(self, airTemp, windSpeeds, windDirection):
        self.airTemp = airTemp
        self.windSpeeds = windSpeeds
        self.windDirection = windDirection

    def summarise(self):
        return 'Air temperature: {}. Wind speed: {}. Wind direction: {}.'.format(self.airTemp, self.windSpeeds, self.windDirection)
    