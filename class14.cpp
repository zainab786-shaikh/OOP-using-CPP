#include<iostream>
using namespace std;
class Box{
    int height;
    int width;
    int length;

    public:
    void getdata(){
        cout <<"Enter Height: ";
        cin >> height;
        cout << "Enter Widht: ";
        cin >> width;
        cout << "Enter Length: ";
        cin >> length;
    }
    int area(){
        return((2*length*width)+(2*width*height)+(2*height*length));
    }
    int volume(){
        return(length * width * height);
    }
    void display(){
        cout << "Area : "<<area() << endl<<"Volume : "<<volume();
    }
};
int main(){
    Box b,*bk;
    b.getdata();
    bk = &b;
    bk->display();
}