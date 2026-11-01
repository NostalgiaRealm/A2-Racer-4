
/* ==== FUN_0050c720 @ 0050c720 ==== 
 * signature: bool __stdcall FUN_0050c720(int param_1, int param_2)
 * body: 0050c720-0050c73f
 */

bool FUN_0050c720(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00501090(*(byte **)(param_1 + 4),*(byte **)(param_2 + 4));
  return (bool)('\x01' - (uVar1 != 0));
}


