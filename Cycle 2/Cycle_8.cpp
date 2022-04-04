# include <iostream>
using namespace std;

class shape
{
protected:
    float area;
public:
   virtual void input()=0;
   virtual void cal_area()=0;
   virtual void show()=0;
};
class circle: public shape{
    float radius;
    public:
    void input(void){
        cout<<"Enter the radius of the circle : ";
        cin>>radius;
    }

    void cal_area(void){ 
        area=(3.14)*(radius*radius);
    }
    void show(void){
        cout<<">>> Area of the circle = "<<area<<endl;
    }
};
class rectangle: public shape
{
  float length;
  float breadth;
public:
void input(void){
    cout<<"Enter the length of the rectangle : ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle : ";
    cin>>breadth;
    }
void cal_area(void){ 
    area=length*breadth;
    }
void show(void){
    cout<<">>> Area of the rectangle = "<<area<<endl;
    }
};
class ellipse: public shape{
  float maj_axis;
  float min_axis;
public:
   void input(void){
        cout<<"Enter the major axis of the rectangle : ";
        cin>>maj_axis;
        cout<<"Enter the minor axis of the rectangle : ";
        cin>>min_axis;
    }
   void cal_area(void){
        area=3.14*(maj_axis*min_axis);
    }
   void show(void){
        cout<<">>> Area of the ellipse = "<<area<<endl;
    }
};
class square: public shape{
  float length;
public:
void input(void){
    cout<<"Enter the length of the square : ";
    cin>>length;
}
void cal_area(void){ 
    area=length*length;
}
void show(void){
    cout<<">>> Area of the square = "<<area<<endl;
    }
};
int main(){
int x=1;
shape* shp;
while(x!=5){
    cout<<"++++++++++Calculate area of shapes++++++++++"<<endl;
    cout<<"Choose any of the following options to continue : "<<endl;
    cout<<"Area of a circle    : 1"<<endl;
    cout<<"Area of a rectangle : 2"<<endl;
    cout<<"Area of a square    : 3"<<endl;
    cout<<"Area of a ellipse   : 4"<<endl;
    cout<<"Exit                : Any other"<<endl;
    cin>>x;
    cout<<" "<<endl;
    if(x==1){
        shp=new circle;
        shp->input();
        cout<<" "<<endl;
        shp->cal_area();
        shp->show();
        cout<<" "<<endl;
    }else if(x==2){
        shp=new rectangle;
        shp->input();
        cout<<" "<<endl;
        shp->cal_area();
        shp->show();
        cout<<" "<<endl;
    }else if(x==4){
        shp=new ellipse;
        shp->input();
        cout<<" "<<endl;
        shp->cal_area();
        shp->show();
        cout<<" "<<endl;
    }else if(x==3){
        shp=new square;
        shp->input();
        cout<<" "<<endl;
        shp->cal_area();
        shp->show();
        cout<<" "<<endl;
    }else{
        break;
    }
    cout<<"*********DO YOU WANT TO CONTINUE*********"<<endl;
    cout<<"PRESS 1 TO CONTINUE OR ANY OTHER TO EXIT"<<endl<<">>> ";
    int y;
    cin>>y;
    if(y==1){
    }else{
        break;
    }
}
cout<<"++++++++++++++| THANK YOU |++++++++++++++ "<<endl;
return 0;
}