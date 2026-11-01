
/* ==== FUN_004e1720 @ 004e1720 ==== 
 * signature: int * __thiscall FUN_004e1720(void * this, int * param_1)
 * body: 004e1720-004e17bc
 */

int * __thiscall FUN_004e1720(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  char *unaff_ESI;
  void *unaff_EDI;
  char *pcVar3;
  uint uVar4;
  uint uStack00000008;
  
  piVar1 = FUN_004d4cd0(param_1,s_Member_005b74bc);
  piVar1 = FUN_004dbf60(piVar1,unaff_EDI);
  piVar1 = FUN_004d4cd0(piVar1,unaff_ESI);
  pcVar3 = *(char **)((int)this + 0x10);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(piVar1,pcVar3);
  uStack00000008 = 0x4e1772;
  FUN_004d43a0(piVar1,10);
  uVar4 = 0;
  if ((*(byte *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) & 6) == 0) {
    iVar2 = (**(code **)(**(int **)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) + 0x2c))();
    if (iVar2 == -1) {
      uVar4 = 4;
    }
  }
  if (uVar4 != 0) {
    uStack00000008 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar4;
    if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
      uStack00000008 = uStack00000008 | 4;
    }
    FUN_0054c6db();
  }
  return piVar1;
}


