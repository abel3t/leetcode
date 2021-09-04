function reverse(x: number): number {
  let k = x > 0 ? 1 : -1;
  let number = Math.abs(x);
  if (isOutOfRange(number, k)) {
    return 0;
  }

  let reverse = 0;

  while (number > 0) {
    reverse = reverse * 10 + (number % 10);
    if (isOutOfRange(reverse, k)) {
      return 0;
    }
    number = Math.floor(number / 10);
  }

  if (number > 0) {
    reverse = reverse * 10 + (number % 10);
    if (isOutOfRange(reverse, k)) {
      return 0;
    }
  }
  return reverse * k;
}

function isOutOfRange(x: number, k: number) {
  if (k > 0) {
    return x >= 2147483647;
  }
  return -x <= -2147483648;
}

console.log(reverse(-9));
