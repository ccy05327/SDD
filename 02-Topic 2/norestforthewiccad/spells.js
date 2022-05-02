const express = require('express');
const router = express.Router();

let spells = 
   [
      {
         id: 1001, 
         name: "Rabbit foot positivity", 
         ingredients: [
            {name:"Foot of rabbit"}, 
            {name:"Juice of beetle"}], 
         result: "Good luck"
      },
      {
         id:1002,
         name: "Fox exeunta", 
         ingredients: [
            {name:"Foul of lion"}, 
            {name:"Spirit of hobo"}], 
         result: "Fox removed",
      }, 
      {
         id:1003, 
         name: "Hackus maximum", 
         ingredients: [
            {name:"Oxygenated hydrogen juice"}, 
            {name:"Effluent of bean"},
            {name:"Heat of joy"}], 
         result: "Fast coding"
      }
   ];

// get all spells
router.get('/', function(req, res){
    res.json({"message":"no spells here"});
});
// get a specific spell
router.get('/:id', function(req, res){
   const spellId = req.params['id'];
   res.json(spells[0]);
});
// update a specific spell
router.put('/:id', function(req, res){
   const spellId = req.params['id'];
   spell = {}
});
// add a new spell
router.post('/', function(req, res){
   res.json(spells);
   let spell = 
   {
      id:req.body.id, 
      name: "Is this the right name for your spell and does it have any ingredients?", 
   };
   spells.push(spell);
});

module.exports = router;
