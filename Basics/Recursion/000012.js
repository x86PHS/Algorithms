function setup() {
  createCanvas(400, 400);
}

function recursion(n){
  if(n == 220){
    return;
  }
  circle(0,0,n)
  return recursion(n + 20)
}

function draw() {
  background(0);
  translate(width/2, height/2)
  noFill()
  stroke(255,255,255)
  strokeWeight(1)
  recursion(20)
}
