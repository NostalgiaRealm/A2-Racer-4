
/* ==== FUN_0043a200 @ 0043a200 ==== 
 * signature: int __register FUN_0043a200(int param_1)
 * body: 0043a200-0043a21d
 */

int FUN_0043a200(int param_1)

{
  if (param_1 == -0x1000000) {
    param_1 = 0x20000000;
  }
  else if (param_1 == -1) {
    return 0x1fffffff;
  }
  return param_1;
}


