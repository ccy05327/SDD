function verifyUser(username, password) {
  /*  
        code that tries the database
    */
  throw {
    name: "DatabaseError",
    message: "Could not connect to database",
  };
  // return "Alls well";
}

try {
  verifyUser("abc123", "pwd123");
  console.log("After verifyUser");
} catch (ex) {
  console.log("Exception caught");
  console.log("Name: " + ex.name);
  console.log("Message: " + ex.message);
}
console.log("I am still running...");
