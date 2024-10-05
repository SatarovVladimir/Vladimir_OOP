#include <cassert>
#include <iostream>
using namespace std;

class ValueCell{
private:
    double NumericValue;
    string TextValue;
public:
    ValueCell(): NumericValue(0), TextValue("") {}

    ValueCell(double Numeric): ValueCell(){
        NumericValue = Numeric;
    }

    ValueCell(string Text): ValueCell(){
        TextValue = Text;
    }
    
    ValueCell(double Numeric, string Text): NumericValue(Numeric), TextValue(Text) {}

    ValueCell(const ValueCell& Number): NumericValue(Number.NumericValue), TextValue(Number.TextValue) {}

    double getNumericValue() const{
        return NumericValue;
    }

    string getTextValue() const{
        return TextValue;
    }

    void setNumericValue( double Numeric){
        NumericValue = Numeric;
    }
    
    void setTextValue( string Text){
        TextValue = Text;
    }
};

int main(){
    ValueCell A1;
    assert(A1.getNumericValue() == 0);
    assert(A1.getTextValue() == "");

    ValueCell A2{1425, "Ландыши"};
    assert(A2.getNumericValue() == 1425);
    assert(A2.getTextValue() == "Ландыши");

    ValueCell A3{"Кукла"};
    assert(A3.getNumericValue() == 0);
    assert(A3.getTextValue() == "Кукла");

    ValueCell A4{123};
    assert(A4.getNumericValue() == 123);
    assert(A4.getTextValue() == "");

    ValueCell A5{A2};
    assert(A5.getNumericValue() == A2.getNumericValue());
    assert(A5.getTextValue() == A2.getTextValue());

    A2.setNumericValue(321);
    A2.setTextValue("Ромашки");
    assert(A2.getNumericValue() == 321);
    assert(A2.getTextValue() == "Ромашки");

    cout<<"Все тесты прошли проверку!"<<endl;

    return 0;
}