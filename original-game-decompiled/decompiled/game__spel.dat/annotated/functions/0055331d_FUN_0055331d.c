
/* ==== FUN_0055331d @ 0055331d ==== 
 * signature: undefined __fastcall FUN_0055331d(undefined4 * param_1)
 * body: 0055331d-0055333f
 */

void __fastcall FUN_0055331d(undefined4 *param_1)

{
  short sVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    sVar1 = FUN_00553340((int *)*param_1);
    if (sVar1 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


