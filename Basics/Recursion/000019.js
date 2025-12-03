let x = 150, y = 150, len = 300;
let profundidade = 1;


function RecursiveSquare(x, y, len, prof) {

  if (prof > 1) {
    RecursiveSquare(x - len / 4, y - len / 4, len / 2, prof - 1);
    RecursiveSquare(x + len - len / 4, y - len / 4, len / 2, prof - 1);
  }
  
  fill(200,200,200);
  strokeWeight(2)
  square(x, y, len);
  
  if (prof > 1) {
    RecursiveSquare(x - len / 4, y + len - len / 4, len / 2, prof - 1);
    RecursiveSquare(x + len - len / 4, y + len - len / 4, len / 2, prof - 1);
  }
}

function setup() {
  createCanvas(600, 600);
  profundidade = prompt("Coloca um número ai patrão")
}

function draw() {
  background(255);
  RecursiveSquare(x, y, len, profundidade);
}

