//Pseudokod i udowodnienie że jest częściowo poprawny

NWD(a, b){
  
 while(a!=b){
   
  if (a > b){
    a -= b
  }
  else{
    b -= a
  }
   
 }
 return a  
}


NWD(a, b){
c
  while(b != 0){
    c = a % b
    a = b
    b = c
  }
  return a
}
