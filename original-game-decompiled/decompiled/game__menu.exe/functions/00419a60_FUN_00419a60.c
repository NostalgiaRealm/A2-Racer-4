
/* ==== FUN_00419a60 @ 00419a60 ==== 
 * signature: int __register FUN_00419a60(int param_1, int param_2, int param_3)
 * body: 00419a60-00419a73
 */

int FUN_00419a60(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 * param_2 + (param_3 - 1U) & ~(param_3 - 1U);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 7;
  }
  return (int)uVar1 >> 3;
}


