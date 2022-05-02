function getHighest(input) {

    let max = input[0];
    for (let i = 0; i < input.length; i++) {
        if (input[i] > max) max = input[i];
    }
    return max;
}

function testCorrectResult() {
  let input = [1, 2, 3];
  let result = getHighest(input);

  return result == 3;
}

function testResultInArray() {
  let input = [1, 2, 3];
  let result = getHighest(input);

  return result == 1 || result == 2 || result == 3;
}

function testReturnVal() {
  let input = [1, 2, 4, 5, 6];
  let result = getHighest(input);

  return !(result == undefined);
}

let result1 = testReturnVal();
if (result1) console.log("testReturnVal passed");
else console.log("testReturnVal failed");

let result2 = testResultInArray();
if (result2) console.log("testResultInArray passed");
else console.log("testResultInArray failed");

let result3 = testCorrectResult();
if (result3) console.log("testCorrectResult passed");
else console.log("testCorrectResult failed");
