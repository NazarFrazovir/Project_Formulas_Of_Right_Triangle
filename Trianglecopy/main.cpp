#include <iostream>
#include <cmath>
using namespace std;

class Right_Triangle{
private:
    float Catheter1;
    float Catheter2;
    float Hypotenuse;
    double AngleCatheter1;
    double AngleCatheter2;
    double AngleCatheter3;
public:
    void Find_Hypotenuse(float newCatheter1,float newCatheter2){
        float findHypotenuse;
        if(newCatheter1>0 && newCatheter2>0){
            findHypotenuse = sqrt(pow(newCatheter1,2)+ pow(newCatheter2,2));
            Hypotenuse=findHypotenuse;
            cout<<"Hypotenuse: ("<<Hypotenuse<<")"<<endl;
        }
    }
    void Find_Catheter1or2(float NewHypotenuse, float Catheter){
        float findCatheter;
        if(NewHypotenuse>0 && Catheter>0){
            if (pow(NewHypotenuse,2)- pow(Catheter,2)>0){
                findCatheter = sqrt(pow(NewHypotenuse,2)- pow(Catheter,2));
                cout<<"Catheter: ("<<findCatheter<<")"<<endl;
            }else{
                cout<<"The hypotenuse cannot be less than the catheter"<<endl;
            }
        }
    }
    void Find_CosinusOfAnAcuteAngle(float Adjacentleg, float Hypotenuse){
        float CosinusAnAcuteAngle;
        if(Hypotenuse!=0 && Adjacentleg!=0 && Hypotenuse > Adjacentleg){
            CosinusAnAcuteAngle=Adjacentleg/Hypotenuse;
            cout<<"Just acute angle: ("<<CosinusAnAcuteAngle<<")"<<endl;
            cout<<"Cos: ("<<CosinusAnAcuteAngle<<")"<<endl;
            // Прилеглий катет/гіпотенузу
        }else{
            cout<<"Adjacent leg and Hypotenuse must be != 0 and Hypotenuse > Adjacent leg"<<endl;
        }
    }

    void Find_SinusOfAnAcuteAngle (float Oppositeleg, float Hypotenuse){
        float SinusAnAcuteAngle;
        if(Hypotenuse!=0 && Oppositeleg !=0 && Hypotenuse > Oppositeleg){
            SinusAnAcuteAngle = Oppositeleg/Hypotenuse;
            cout<<"Just acute angle: ("<<SinusAnAcuteAngle<<")"<<endl;
            cout<<"Sin: ("<<sin(SinusAnAcuteAngle)<<")"<<endl;
            //Протилежний катет/гіпотенузу
        }else{
            cout<<"Opposite leg and Hypotenuse must be != 0 and Hypotenuse > Opposite leg"<<endl;
        }
    }
    void Find_TangensOfAnAcuteAngle (float Adjacentleg, float Oppositeleg){
        float TangensAnAcuteAngle;
        if(Adjacentleg!=0){
            TangensAnAcuteAngle = Oppositeleg/Adjacentleg;
            cout<<"Just acute angle: ("<<TangensAnAcuteAngle<<")"<<endl;
            cout<<"Tangens: ("<<tan(TangensAnAcuteAngle)<<")"<<endl;
        }else{
            cout<<"Adjacentleg must be !=0"<<endl;
        }
    }
    void Find_Area_By_Catheter1inCatheter2(double Catheter1, double Catheter2){
        double Area;
        if(Catheter1 > 0 && Catheter2 > 0){
           Area = 0.5 * Catheter1 * Catheter2;
            cout<<"Area Right Triangle = ("<<Area<<")"<<endl;
        }else{
            cout<<"Catheter1 and Catheter2 must be >0"<<endl;
        }

    }
    void Find_Area_By_BisectorinHypotenuse(double Bisector, double Hypotenuse){
        double Area;
        if(Bisector > 0 && Hypotenuse > 0){
            Area = 0.5 * Hypotenuse*Bisector;
            cout<<"Area Right Triangle = ("<<Area<<")"<<endl;
        }else {
            cout<<"Bisector and Hypotenuse must be > 0"<<endl;
        }
    }
    void Find_LenghtBisector_By_Catheter(double Catheter1 , double Catheter2){
        double LenghtBisector;
        if(Catheter1 + Catheter1 !=0 && Catheter1>0 && Catheter2>0){
            LenghtBisector = sqrt(2)*((Catheter1*Catheter2)/(Catheter1+Catheter2));
            cout<<"Lenght bisector: ("<<LenghtBisector<<")"<<endl;
        }else{
            cout<<"Catheter1 + Catheter1 !=0 and Catheter1>0 and Catheter2>0"<<endl;
        }
    }
    void Find_RadiusInscribedCircle(double Catheter1, double Catheter2, double Hypotenuse){
        double RadiusInscribedCircle;
        if(Hypotenuse !=0 && Catheter1 !=0 && Catheter2 !=0){
            RadiusInscribedCircle = (Catheter1 + Catheter2 -Hypotenuse)/2;
            cout<<"Radius Inscribed Circle: ("<<RadiusInscribedCircle<<")"<<endl;
        }else{
            cout<<"Catheter1 !=0 and Catheter2 !=0 and Hypotenuse !=0"<<endl;
        }
    }
    void Find_Diametr(double Radius){
        double Diametr;
        if (Radius > 0){
            Diametr = 2*Radius;
            cout<<"Diametr: ("<<Diametr<<")"<<endl;
        }else{
            cout<<"Radius > 0"<<endl;
        }
    }
    void Find_Height(double Catheter1, double Catheter2, double Hypotenuse ){
        double Height;
        if (Hypotenuse !=0 &&Catheter1 != 0 && Catheter1 !=0){
            Height = (Catheter1*Catheter2)/Hypotenuse;
            cout<<"Height: ("<<Height<<")"<<endl;
        }else{
            cout<<"Hypotenuse, Catheter1, Catheter2 !=0"<<endl;
        }
    }
};
class IsoscelesTriangle{
private:
    float LateralParties1;
    float LateralParties2;
    float Hypotenuse;
    double AngleCatheter1;
    double AngleCatheter2;
    double AngleCatheter3;
public:
    void Find_LateralParties(double Hypotenuse, double cosangleA){
        double LateralParties;
        if(2*cosangleA != 0){
        LateralParties = Hypotenuse / 2*cosangleA;
        cout<<"Lateral Partie: ("<<LateralParties<<")"<<endl;
        }else{
            cout<<"2*cos(angleA)!=0"<<endl;
        }
    }
    void Find_Hypotenuse(double LateralPartie, double cosB){
        double Hypotenuse;
        if(cosB > 0){
            Hypotenuse = LateralPartie*(sqrt(2*(1 - cosB)));
            cout<<"Hypotenuse: ("<<Hypotenuse<<")"<<endl;
        }else{
            cout<<"Cos(B) > 0"<<endl;
        }
    }
    void Find_RadiusOfAnInscribedCircle(double LateralPartie, double Hypotenuse){
        double Radius;
        if((2*LateralPartie+Hypotenuse)!=0){
            Radius = (Hypotenuse/2)*(sqrt((2*LateralPartie-Hypotenuse)/(2*LateralPartie+Hypotenuse)));
            cout<<"Radius: ("<<Radius<<")"<<endl;
            cout<<"Diametr: ("<<Radius*2<<")"<<endl;
        }else{
            cout<<"2*LateralPartie+Hypotenuse != 0"<<endl;
        }
    }
    void Find_Area_ByOsnovaAndHigh(double Osnova, double high){
        double Area;
        if(Osnova > 0 && high > 0){
            Area = (Osnova*high)/2;
            cout<<"Area: ("<<Area<<") "<<endl;
        }else{
            cout<<"The Osnova and High must be greater than 0"<<endl;
        }
    }
    void Find_Area_ByLateralPartieandOsnova(double LateralPartie, double Osnova){
        double Area;
        if(Osnova > 0 && LateralPartie > 0){
            Area = 0.5*Osnova*(sqrt((LateralPartie+0.5*Osnova)*(LateralPartie-0.5*Osnova)));
            cout<<"Area: ("<<Area<<")"<<endl;
        }cout<<"The Osnova and LateralPartie must be greater than 0"<<endl;
    }
};
class EquilateralTriangle{
private:
    double Side;
    double Angle;
    double Mediana;
    double High;
public:
    void Find_Area(double Side){
        double Area;
        if(Side > 0){
            Area = (pow(Side,2)* sqrt(3))/4;
            cout<<"Area: ("<<Area<<")"<<endl;
        }cout<<"Side must be greater than 0"<<endl;
    }
    void Find_RadiusІnscribedСircle(double Side){
        double Radius;
        if(Side > 0){
            Radius = (Side * sqrt(3))/6;
            cout<<"Radius Inscribed Circle: ("<<Radius<<")"<<endl;
        }else{
            cout<<"Side must be greater than 0"<<endl;
        }
    }
    void Find_RadiusOfTheCircle(double Side){
        double Radius;
        if (Side > 0){
            Radius = (Side* sqrt(3))/3;
            cout<<"Radius of the circle: ("<<Radius<<")"<<endl;
        }else{
            cout<<"Side must be greater than 0"<<endl;
        }
    }
    void Find_Perimetr(double Side){
        double Perimetr;
        if(Side > 0){
            Perimetr = 3*Side;
            cout<<"Perimetr: ("<<Perimetr<<")"<<endl;
        }else{
            cout<<"Side must be greater than 0"<<endl;
        }
    }
    void Find_High(double Side){
        double High;
        if(Side>0){
            High = (sqrt(3)/2)*Side;
            cout<<"High: ("<<High<<")"<<endl;
        }else{
            cout<<"Side must be greater than 0"<<endl;
        }
    }
};

int main() {

    return 0;
}
