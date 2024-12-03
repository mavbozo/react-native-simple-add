const SimpleAdd = require('./NativeSimpleAdd').default;

export function multiply(a: number, b: number): number {
  return SimpleAdd.multiply(a, b);
}
