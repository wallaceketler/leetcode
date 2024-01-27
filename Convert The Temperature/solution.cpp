class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> convertion(2);
        convertion[0] = celsius + 273.15;
        convertion[1] = celsius * 1.80 + 32.00;

        return vector<double> convertion ();
    }
};