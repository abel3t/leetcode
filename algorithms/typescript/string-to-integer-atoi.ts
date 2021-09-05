function myAtoi(s: string): number {
  let temp: number = 0;
  let len: number = s.length;
  let pn: number = 1;
  let flag: boolean = false;
  for (let i = 0; i < len; i++) {
    if (flag == false && (s[i] == '-' || s[i] == '+')) {
      flag = true;
      if (s[i] == '-') pn = -1;
    } else if (s[i] == ' ' && flag == false) {
      //Do nothing
    } else if (s[i] >= '0' && s[i] <= '9') {
      temp = temp * 10 + +s[i];
      flag = true;
      if (temp >= 2147483647 && pn > 0) return 2147483647;
      if (temp >= 2147483648 && pn < 0) return -2147483648;
    } else {
      break;
    }
  }
  return Math.round(pn * temp);
}

console.log(myAtoi('   -0000042'));
