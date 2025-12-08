import unittest

#importing WeatherData class from WeatherDataClass module
from WeatherDataClass import WeatherData

#create test case that inherits from 'unittest.TestCase'
class TestWeatherData(unittest.TestCase):

    #1st test
    def test_data(self):
        print("test weather data")
        weather = WeatherData()
        weather.collectWeatherData(51, 2.6, 'right')
        self.assertEqual(weather.airTemp, 51)
        self.assertEqual(weather.windSpeeds, 2.6)
        self.assertEqual(weather.windDirection, 'right')

    #2nd test
    def test_summary(self):
        print("test weather summary")
        weather1 = WeatherData()
        weatherReport = weather1.collectWeatherData(52, 2.5, 'west')
        self.assertEqual(weather1.summarise(), 'Air temperature: 52. Wind speed: 2.5. Wind direction: west.')

if __name__ == '__main__':
    unittest.main()