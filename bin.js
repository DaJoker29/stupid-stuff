var MAX_LIMIT = 20;
var BYTE_SIZE = 8;
var lim = process.argv[2] || MAX_LIMIT;
var bits = [];
var binary = [];
var output = [];

for(i = 0; i < lim; i++) {
    for(j = 0; j < BYTE_SIZE; j++) {
        var rand = Math.floor((Math.random() * 1000) + 1);
        bits.push((+(0 == (rand % 2))));
    }
    binary.push(bits.join(''));
    bits = [];
}

binary.forEach(function(data) {
    output.push(String.fromCharCode(parseInt(data, 2)));
});

console.log(output.join(''));
