function myAtoi(s: string): number {
  return norm(parseInt(s) || 0);
}

function norm(x: number) {
  if (x >= 2147483647) {
    return 2147483647;
  }
  if (x <= -2147483648) {
    return -2147483648;
  }
  return x;
}
