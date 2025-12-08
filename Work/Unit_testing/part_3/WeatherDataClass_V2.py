# This code adds extra functionality to the WeatherDataClass code

class WeatherData:
    #initializes default values to attributes
    def __init__(self, airTemp=None, windSpeeds=None, windDirection=None):
        self.airTemp = airTemp
        self.windSpeeds = windSpeeds
        self.windDirection = windDirection

    #sets the values of each attribute and validates data input
    def collectWeatherData(self, airTemp, windSpeeds, windDirection):
        if(type(airTemp) is int and -60 <= airTemp <= 60):
            self.airTemp = airTemp
        else:
            print("Error: air temperature must be between -60 and 60 degrees\n")
        
        if(type(windSpeeds) is int and 0 <= windSpeeds <= 150):
            self.windSpeeds = windSpeeds
        else:
            print("Error: wind speed must be between 0 and 150 m/s\n")
        
        if(windDirection.isalpha()):
            match windDirection.lower():
                case 'west' | 'east' | 'north' | 'south':
                    self.windDirection = windDirection
                case _:
                    print("Error: incorrect direction specified!\n")

    #produces a summary of the collected data
    def summarise(self):
        return 'Air temperature: {}. Wind speed: {}. Wind direction: {}.'.format(self.airTemp, self.windSpeeds, self.windDirection)
    