function setup() {
  createCanvas(400, 400);
}

function recursion(x,y,len){
  if(len == 10){
    return;
  }
  circle(x,y,len)
  recursion(x-20,y+40,len-10);
  return recursion(x+20,y+40,len-10);
}

function draw() {
  background(0);
  noFill()
  stroke(255,255,255)
  strokeWeight(1)
  recursion(200,60,100)
}
