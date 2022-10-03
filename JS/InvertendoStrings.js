function spinWords(string) {
    let s = string.split(" ");
    let string_spinned = "";
    for(let i=0; i < s.length ;i++){
      string_spinned += myFunction(s[i]);
    }
    return string_spinned.trim();
  }
  
  function myFunction(value) {
    if (value.length >= 5) return spin(value) + " ";
    else return  value + " ";
  }
  
  function spin(string) {
    let s = "";
    let tam = string.length;
    for (let i = 0; i < tam; i++) {
      s += string[tam - i - 1];
    }
    return s;
  }
  console.log(spinWords("Hey fellow warriors"));

  // Outras Solucoes : 

  function spinWords(words){
    return words.split(' ').map(function (word) {
      return (word.length > 4) ? word.split('').reverse().join('') : word;
    }).join(' ');
  }

  // Ou : 
  function spinWords(str){
    return str.split(' ').map( w => w.length<5 ? w : w.split('').reverse().join('') ).join(' ');
  }