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
