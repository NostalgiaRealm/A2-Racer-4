
/* ==== FUN_004e13e0 @ 004e13e0 ==== 
 * signature: int * __thiscall FUN_004e13e0(void * this, int * param_1)
 * body: 004e13e0-004e1499
 */

int * __thiscall FUN_004e13e0(void *this,int *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  int iStack0000000c;
  int in_stack_00000014;
  uint uStack00000018;
  
  piVar1 = FUN_004d4cd0(param_1,s_Const_005b74a4);
  piVar1 = FUN_004dbf60(piVar1,unaff_EDI);
  piVar1 = FUN_004d4cd0(piVar1,unaff_ESI);
  pcVar2 = *(char **)((int)this + 0x10);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004d4cd0(piVar1,pcVar2);
  iStack0000000c = (int)this + 0x30;
  piVar1 = FUN_004d4cd0(piVar1,&DAT_005b74a0);
  iStack0000000c = 0x4e1441;
  piVar1 = (int *)FUN_004e76a0(piVar1,in_stack_00000014);
  uStack00000018 = 0x4e144f;
  FUN_004d43a0(piVar1,10);
  uVar4 = 0;
  if ((*(byte *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar4 = 4;
    }
  }
  if (uVar4 != 0) {
    uStack00000018 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar4;
    if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
      uStack00000018 = uStack00000018 | 4;
    }
    FUN_0054c6db();
  }
  return piVar1;
}


