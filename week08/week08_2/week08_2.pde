//week08-2
void setup(){
  size(500,500);
  img = loadImage("balloon.png");
}
PImage img;
int x,y;
void draw(){
  background(255);
  x = mouseX-96/2;
  y = mouseY-132;
  image(img, x, y, 96, 132);
}
