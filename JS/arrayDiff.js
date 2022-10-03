// https://www.codewars.com/kata/523f5d21c841566fde000009/javascript

function arrayDiff(a, b) {
    let num = [];
    for(let i=0; i < a.length ; i++){
      let isInAorB = 0;
      for(let j=0; j < b.length ; j++){
        if(a[i] == b[j]) {
          isInAorB = 1;
          break;
        }
      }
      if(!isInAorB) num.push(a[i]);
    }
    return num; 
  }

  // Another Soluction :
  function array_diff(a, b) {
    return a.filter(e => !b.includes(e));
  }

  function array_diff(a, b) {
    return a.filter(function(x) { return b.indexOf(x) == -1; });
  }