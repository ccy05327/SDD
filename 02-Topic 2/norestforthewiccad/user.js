const express = require('express');
const router = express.Router();

// login
router.post('/login', function(req, res){
    res.json({
        message:"Login successful"
    });
});

// get current user
router.get('/', function(req, res){
    res.json({
        username:"admin", 
        password:"notsogood"
    });
});


module.exports = router;
