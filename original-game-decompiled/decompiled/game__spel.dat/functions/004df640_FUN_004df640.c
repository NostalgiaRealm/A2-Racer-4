
/* ==== FUN_004df640 @ 004df640 ==== 
 * signature: int * __thiscall FUN_004df640(void * this, int * param_1)
 * body: 004df640-004df6e8
 */

int * __thiscall FUN_004df640(void *this,int *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  uint uStack00000008;
  
  piVar1 = FUN_004d4cd0(param_1,s_External_005b7408);
  piVar1 = FUN_004dbf60(piVar1,unaff_EDI);
  piVar1 = FUN_004d4cd0(piVar1,unaff_ESI);
  pcVar2 = *(char **)((int)this + 0x10);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004d4cd0(piVar1,pcVar2);
  piVar1 = FUN_004e5c20(piVar1,(int)this + 0x3c);
  uStack00000008 = 0x4df69e;
  FUN_004d43a0(piVar1,10);
  uVar4 = 0;
  if ((*(byte *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
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


