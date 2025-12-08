import unittest

#importing WeatherData class from WeatherDataClass_V2 module
from WeatherDataClass_V2 import WeatherData

#create test case that inherits from 'unittest.TestCase'
class TestWeatherData(unittest.TestCase):
    
    # test that all attributes are set to none when initialized
    def test_default_initialisation(self):
        print("test initialiser")
        weather = WeatherData()
        self.assertIsNone(weather.airTemp)
        self.assertIsNone(weather.windSpeeds)
        self.assertIsNone(weather.windDirection)

    # test that inputed parameter are saved to variables
    def test_data(self):
        print("test weather data")
        weather = WeatherData()
        weather.collectWeatherData(-51, 6, 'eat')
        self.assertTrue(type(weather.airTemp) is int)
        self.assertEqual(weather.airTemp, -51)

        self.assertTrue(type(weather.windSpeeds) is int)
        self.assertEqual(weather.windSpeeds, 6)

        self.assertTrue(weather.windDirection.isalpha())
        self.assertEqual(weather.windDirection, 'east')

    # test the summary function outputs all collected data correctly
    def test_summary(self):
        print("test weather summary")
        weather1 = WeatherData()
        weather1.collectWeatherData(52, 5, 'west')
        self.assertTrue(type(weather1.summarise()) is str)
        self.assertEqual(weather1.summarise(), 'Air temperature: 52. Wind speed: 5. Wind direction: west.')

if __name__ == '__main__':
    unittest.main()
