
/* ==== FUN_004016dc @ 004016dc ==== 
 * signature: undefined __register FUN_004016dc(LPVOID param_1, int param_2, undefined4 * param_3)
 * body: 004016dc-00401793
 */

void FUN_004016dc(LPVOID param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  LPVOID lpAddress;
  BOOL BVar2;
  int *piVar3;
  LPVOID local_1c;
  uint local_18;
  
  local_1c = (LPVOID)0xffffffff;
  local_18 = 0;
  piVar1 = DAT_004ac458;
  while (piVar3 = piVar1, (int **)piVar3 != &DAT_004ac458) {
    piVar1 = (int *)*piVar3;
    lpAddress = (LPVOID)piVar3[2];
    if ((param_1 <= lpAddress) &&
       ((uint)((int)lpAddress + piVar3[3]) <= (uint)(param_2 + (int)param_1))) {
      if (lpAddress < local_1c) {
        local_1c = lpAddress;
      }
      if (local_18 < (uint)((int)lpAddress + piVar3[3])) {
        local_18 = (int)lpAddress + piVar3[3];
      }
      BVar2 = VirtualFree(lpAddress,0,0x8000);
      if (BVar2 == 0) {
        DAT_004ac434 = 1;
      }
      FUN_004014e4(piVar3);
    }
  }
  *param_3 = 0;
  if (local_18 != 0) {
    *param_3 = local_1c;
    param_3[1] = local_18 - (int)local_1c;
  }
  return;
}


