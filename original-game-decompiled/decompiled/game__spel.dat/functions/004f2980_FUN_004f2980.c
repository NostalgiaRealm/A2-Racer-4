
/* ==== FUN_004f2980 @ 004f2980 ==== 
 * signature: undefined __fastcall FUN_004f2980(void * param_1)
 * body: 004f2980-004f29cf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f2980(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  while (iVar1 = *(int *)((int)param_1 + 0x88), iVar1 != 0) {
    FUN_004fbe30(iVar1);
    bVar4 = iVar1 == iVar3;
    iVar3 = iVar1;
    if (bVar4) {
      _DAT_00000000 = 0;
    }
  }
  FUN_004f2910(param_1,1);
  while (iVar3 = *(int *)((int)param_1 + 0x20), iVar3 != 0) {
    piVar2 = (int *)(*(short *)(iVar3 + 0x18) + iVar3);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(1);
    }
  }
  return;
}


