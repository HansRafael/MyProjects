let bird = {
  name: "Donald",
  numLegs: 2
};

let boat = {
  name: "Warrior",
  type: "race-boat"
};

//aqui criamos uma propriedade mínima que ambos podem ter
let glideMixin = function(obj){
  obj.glide = function(){
    console.log('im gliding!')
  }
}
glideMixin(bird);
glideMixin(boat);

bird.glide();
boat.glide();