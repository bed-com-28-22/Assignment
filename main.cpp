//main function for the program
int main(){
    Box Box1; //declare box 3 of type  box
    Box Box2; //declare box 3 of type  box
    Box Box3; //declare box 3 of type  box
    double volume = 0.0; // Store the volume of a box here

    //box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    //box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    //volume of box 1
    volume = Box1.GetVolume();
    cout<<"Volume of Box1: " <<volume<<endl;

    //volume of Box 2
    volume = Box2.GetVolume();
    cout<<"Volume of Box2: " <<volume<<endl;

    //Add two object as follows
    Box3 = Box1 + Box2;

    //volume of Box3
    volume = Box3.GetVolume();
    cout<<"Volume of Box3: "<<volume<<endl;
    
    return 0;
    
}