
/* ==== FUN_0042ff98 @ 0042ff98 ==== 
 * signature: int __register FUN_0042ff98(int param_1)
 * body: 0042ff98-0042ffb5
 */

int FUN_0042ff98(int param_1)

{
  if (param_1 == -0x1000000) {
    param_1 = 0x20000000;
  }
  else if (param_1 == -1) {
    return 0x1fffffff;
  }
  return param_1;
}


