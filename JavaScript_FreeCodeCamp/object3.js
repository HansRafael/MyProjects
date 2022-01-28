// JSON => JavaScript Object Notation
var myMusic = [
    {
      "artist": "Billy Joel",
      "title": "Piano Man",
      "release_year": 1973,
      "formats": [
        "CD",
        "8T",
        "LP"
      ],
      "gold": true
    }
];

console.log(myMusic);
myMusic.push({artist:"Green Day",title:"Jesus Of Suburbia",release_year:2008,formats:["CD","1T","LP"]});
console.log(myMusic[1].formats[1]);