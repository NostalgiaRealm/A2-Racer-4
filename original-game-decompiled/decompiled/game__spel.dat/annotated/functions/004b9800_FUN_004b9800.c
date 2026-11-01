
/* ==== FUN_004b9800 @ 004b9800 ==== 
 * signature: int __cdecl FUN_004b9800(int param_1, int param_2, int param_3)
 * body: 004b9800-004b9831
 */

int __cdecl FUN_004b9800(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (param_2 >> 1) + param_2) {
    for (; param_2 != DAT_0073b4f4; param_2 = param_2 >> 1) {
      if (param_2 <= param_3) {
        iVar1 = iVar1 + 1;
      }
    }
    return iVar1;
  }
  return iVar1;
}


