/**
 * @param {string} date
 * @return {number}
 */
const month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
var dayOfYear = function(date) {
  var days = 0;
  var splitDate = date.split('-');
  if (splitDate[1] == 1) return splitDate[2];
  else {
    for (let i = 0; i < 12; i++) {
      if (i < splitDate[1] - 1) {
        days += month[i];
      }
      else {
        break;
      }
    }
  }
    if(splitDate[1] > 2){
       if((parseInt(splitDate[0]) % 4 == 0 && parseInt(splitDate[0]) % 100 != 0) || parseInt(splitDate[0]) % 400 == 0) {
           days++;
       }
    }
  
  return days += parseInt(splitDate[2]);
};