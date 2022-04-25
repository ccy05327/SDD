const assert = require("assert");

describe("Set of tests", () => {
  describe("One test", () => {
    let s = "Hello mocha";
    let parts = s.split(" ");
    /* Has to add done as parameter & done(); for the first test to pass */
    it("should have two elements", (done) => {
      assert.equal(parts.length, 2);
      done();
    });

    it("should have three elements", (done) => {
      assert.equal(parts.length, 3);
      done();
    });
  });
});
