
/* ==== FUN_0044fd22 @ 0044fd22 ==== 
 * signature: undefined __cdecl FUN_0044fd22(char param_1)
 * body: 0044fd22-0044fdea
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0044fd22(char param_1)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  void *this;
  longlong lVar4;
  int iVar5;
  
  lVar4 = __ftol();
  iVar1 = (int)lVar4;
  DVar2 = GetTickCount();
  if (DVar2 - _DAT_006fba48 < 300) {
    if ((17999 < iVar1) || (iVar1 = DAT_006fba24, param_1 == '\0')) goto LAB_0044fde1;
  }
  else if (iVar1 < 18000) {
    uVar3 = FUN_00558625();
    uVar3 = uVar3 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    iVar1 = (&DAT_006fb9a0)[uVar3];
  }
  else if (iVar1 < 25000) {
    uVar3 = FUN_00558625();
    uVar3 = uVar3 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    iVar1 = *(int *)(&DAT_006fb9a8 + uVar3 * 4);
  }
  else {
    uVar3 = FUN_00558625();
    uVar3 = uVar3 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    iVar1 = *(int *)(&DAT_006fb9b0 + uVar3 * 4);
  }
  iVar5 = 0;
  this = (void *)FUN_0049eb50(&DAT_006fbb5c,iVar1);
  FUN_0049e550(this,iVar5);
LAB_0044fde1:
  _DAT_006fba48 = GetTickCount();
  return;
}


