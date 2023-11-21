
function oddEven(arr){
  for (let i in arr){
    arr[i] % 2 === 1 ? 
      console.log(arr[i] + " is a odd number") :
      console.log(arr[i] + " is a even number");
  }
}

let randomNumbers = Array.from({ length: 100}, () => (Math.floor(Math.random() * 100)));
oddEven(randomNumbers);
