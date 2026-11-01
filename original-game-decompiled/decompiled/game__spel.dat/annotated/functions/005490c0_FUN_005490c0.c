
/* ==== FUN_005490c0 @ 005490c0 ==== 
 * signature: undefined FUN_005490c0(void)
 * body: 005490c0-005490d7
 */

int __fastcall FUN_005490c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x20);
      (puVar1 != (undefined4 *)0x0 && ((int)puVar1[0x19] < 0)); puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


