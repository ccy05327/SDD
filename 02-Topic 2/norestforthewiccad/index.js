// the norestforthewiccad API

var express = require('express');
var app = express();
var bodyParser = require('body-parser');

// config body parser to deal with JSON post bodies
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());

var spell_routes = require('./spells.js');
var user_routes = require('./user.js');

// mount the routes in spells
// off of /spells
app.use('/spools', spell_routes);
app.use('/user', user_routes);

// default route
app.get('/', function (req, res) {
  console.log("Request to /");
  res.json({"message":"This is not the norestforthewiccad API"});
})


console.log("Starting app on port 3000");
console.log("Point your web browser at http://localhost:3000");
app.listen(3000);
