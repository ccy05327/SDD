const chai = require("chai");
const chaiHttp = require("chai-http");
const assert = require("assert");

chai.use(chaiHttp);

describe("Test top level / route", () => {
  it("it should have a 200 status code", (done) => {
    chai
      .request("http://localhost:3000")
      .get("/")
      .end((err, res) => {
        assert.equal(res.status, 200);
        done();
      });
  });
});

describe("Test top /spells route", () => {
  it("it should have a 200 status code", (done) => {
    chai
      .request("http://localhost:3000")
      .get("/spools")
      .end((err, res) => {
        assert.equal(res.status, 200);
        done();
      });
  });
});
