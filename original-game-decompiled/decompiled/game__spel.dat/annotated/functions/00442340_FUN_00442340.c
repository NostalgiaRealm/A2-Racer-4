
/* ==== FUN_00442340 @ 00442340 ==== 
 * signature: undefined __fastcall FUN_00442340(void * param_1)
 * body: 00442340-004423a1
 */

void __fastcall FUN_00442340(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint local_4;
  
  local_4 = CONCAT31((int3)((uint)param_1 >> 8),1);
  if ((*(int *)((int)param_1 + 0xe8) != 0) && (iVar1 = 0, 0 < DAT_005d2ab0)) {
    piVar2 = &DAT_005ce9e8;
    do {
      FUN_004423b0(param_1,*piVar2,1,local_4);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xa5;
      local_4 = local_4 & 0xffffff00;
    } while (iVar1 < DAT_005d2ab0);
  }
  FUN_004423b0(param_1,DAT_006fba58,0,1);
  return;
}


