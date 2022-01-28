const tekkenCharacter = {
  player: 'Hwoarang',
  fightingStyle: 'Tae Kwon Doe',
  human: true
};

//para criar uma nova proprierade, basta assimilar ela ao objeto
tekkenCharacter.origin = 'Brazil';
console.log(tekkenCharacter);
//além do . para criar uma propriedade nova, podemos usar []
tekkenCharacter['hair color'] = 'laranja';
console.log(tekkenCharacter);