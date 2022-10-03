// Question Details : https://www.codewars.com/kata/514b92a657cdc65150000006/javascript

function solution(number){
    let sum = 0;
    for(let i=0; i < number; i++){
      let cont = 0;
      if (i%3 == 0){
        sum += i;
        cont = 1;
      }
      if(i%5 == 0 && cont == 0){
        sum += i;
      }
    }
    return sum;
  }
  // Another Soluction : 

  function solution(number){
    var sum = 0;
    
    for(var i = 1;i< number; i++){
      if(i % 3 == 0 || i % 5 == 0){
        sum += i
      }
    }
    return sum;
  }