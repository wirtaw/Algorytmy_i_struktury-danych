// Pseudokod i udowodnienie ze jest częściowo poprawny


max(array, len) {
  max = array[0]
  i = 0

  while(i < len) {
    if (array[i] > max) {
    	max = array[i]
    }
    i++
  }
  return max
}


min(array, len) {
  min = array[0]
  i = 0
  
  while(i < len) {
    if (array[i] < min) {
      min = array[i]
    }
    i++
  }
  return min
}
