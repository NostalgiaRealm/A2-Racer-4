
/* ==== FUN_004d4610 @ 004d4610 ==== 
 * signature: uint __fastcall FUN_004d4610(int * param_1)
 * body: 004d4610-004d4686
 */

/* WARNING: Removing unreachable block (ram,0x004d46c8) */
/* WARNING: Removing unreachable block (ram,0x004d46d4) */
/* WARNING: Removing unreachable block (ram,0x004d46d6) */

uint __fastcall FUN_004d4610(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056ff50;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  param_1[1] = 0;
  uVar3 = FUN_004d4770(param_1,'\x01');
  if ((char)uVar3 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
    pbVar2 = *(byte **)piVar1[7];
    if ((pbVar2 == (byte *)0x0) || (pbVar2 + *(int *)piVar1[0xb] <= pbVar2)) {
      uVar3 = (**(code **)(*piVar1 + 0x10))();
    }
    else {
      uVar3 = (uint)*pbVar2;
    }
    if (uVar3 == 0xffffffff) {
      uVar3 = FUN_004d46b6();
      return uVar3;
    }
  }
  ExceptionList = pvStack_10;
  return uVar3;
}


