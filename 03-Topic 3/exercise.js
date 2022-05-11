class Test {
  constructor() {
    x = 100;
    y = 200;
    let size = x * y;
  }
}

const test = new Test();
console.log(test.size);
// ReferenceError: x is not defined
