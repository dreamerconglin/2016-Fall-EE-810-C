#include <iostream>
#include <fstream>
using namespace std;

class Postscript {
private:
    ofstream out;
public:
    Postscript(string f):out(f,ofstream::app){}
    void setColor(double red,double green,double blue){
        out<<red<<" "<<green<<" "<<blue<<" setrgbcolor\n";
    }
    void line(int x1,int y1,int x2,int y2){
        out<<x1<<" "<<y1<<" moveto "<<x2<<" "<<y2<<" lineto stroke\n";
    }
    void drawRect(int x,int y,int width,int height){
        out<<x<<" "<<y<<" moveto "<<x+width<<" "<<y<<" lineto "<<x+width<<" "<<y+height<<" lineto "<<x<<" "<<y+height<<" lineto closepath stroke\n";
    }
    void fillRect(int x,int y,int width,int height){
        out<<x<<" "<<y<<" moveto "<<x+width<<" "<<y<<" lineto "<<x+width<<" "<<y+height<<" lineto "<<x<<" "<<y+height<<" lineto closepath fill\n";
    }
    void drawCircle(int x,int y,int radius){
        out<<x<<" "<<y<<" "<<radius<<" 0 360 arc stroke\n";
    }
    void fillCircle(int x,int y,int radius){
        out<<x<<" "<<y<<" "<<radius<<" 0 360 arc fill\n";
    }
};

int main() {
    Postscript p("test.ps");
    p.line(0,0, 100,100); // default color? black // 0 0 moveto 100 100 lineto stroke
    p.setColor(0.5, 0.0, 0.0); // [red=0.5 green=0 blue=0]  0.5 0 0 setrgbcolor

    // 200 300 moveto 250 300 lineto 250 650 lineto 200 650 lineto closepath stroke
    p.drawRect(200, 300, 50, 350); // x,y,width,height

    // 200 300 moveto 250 300 lineto 250 650 lineto 200 650 lineto closepath fill
    p.fillRect(200, 300, 50, 350); // x,y,width,height

    p.drawCircle(300, 300, 100); // x,y, radius      300 300 100 0 360 arc  stroke
    p.fillCircle(300, 300, 100); // x,y, radius      300 300 100 0 360 arc  fill
    return 0;
}
