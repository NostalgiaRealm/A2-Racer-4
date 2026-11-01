
/* ==== FUN_0050f9a0 @ 0050f9a0 ==== 
 * signature: undefined __fastcall FUN_0050f9a0(uint * param_1)
 * body: 0050f9a0-0050f9ff
 */

void __fastcall FUN_0050f9a0(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    do {
      puVar2 = *(undefined4 **)(param_1[3] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar2;
        FUN_0054b339(puVar2);
        puVar2 = puVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_1);
  }
  if ((LPVOID)param_1[3] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[3]);
    param_1[3] = 0;
  }
  if ((LPVOID)param_1[1] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


