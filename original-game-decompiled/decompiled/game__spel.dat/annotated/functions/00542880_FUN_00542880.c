
/* ==== FUN_00542880 @ 00542880 ==== 
 * signature: undefined __cdecl FUN_00542880(int param_1, undefined4 param_2, double param_3, undefined * * param_4, undefined4 param_5, double param_6, double param_7)
 * body: 00542880-0054299d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00542880(int param_1,undefined4 param_2,double param_3,undefined **param_4,undefined4 param_5,
            double param_6,double param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int *unaff_EBX;
  int *unaff_EBP;
  undefined4 unaff_ESI;
  undefined **unaff_EDI;
  undefined4 unaff_retaddr;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 in_stack_fffffffc;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(iVar2 + 0x28);
  uVar4 = *(uint *)(iVar2 + 0x48);
  uVar10 = uVar4;
  if (*(int *)(iVar3 + 0x40) == 0) {
    puVar6 = FUN_004fe470(*(void **)(*(int *)(iVar3 + 0x18) + 0xa4),iVar3);
    *(undefined4 **)(iVar3 + 0x40) = puVar6;
  }
  *(int *)(*(int *)(iVar3 + 0x40) + 4) = *(int *)(*(int *)(iVar3 + 0x40) + 4) + 1;
  if ((*(int *)(iVar3 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(iVar3 + 0x40) < *(int *)(*(int *)(iVar3 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(iVar3 + 0x40));
  }
  iVar9 = *(int *)(iVar3 + 0x40);
  iVar5 = *(int *)(iVar2 + 0x44);
  puVar7 = (uint *)(uVar4 & 0xfffffff0) + ((*(uint *)(uVar4 & 0xfffffff0) & 0xfff) + 1) * -4;
  puVar11 = puVar7;
  iVar8 = FUN_00506590(iVar5);
  uVar4 = *puVar7;
  *(undefined4 *)(param_1 + 0x38) = 0;
  sVar1 = *(short *)(iVar2 + 0x4e);
  if (sVar1 == 0) {
    FUN_00541610(iVar3,CONCAT44(iVar9,uVar10),(undefined **)&stack0xffffffec,unaff_EDI,
                 (double)CONCAT44(unaff_EBP,unaff_ESI),(double)CONCAT44(iVar9,unaff_EBX));
  }
  else if (sVar1 == 1) {
    FUN_005423b0(CONCAT44(uVar10,iVar3),CONCAT44(&stack0xffffffec,iVar9),unaff_EDI,unaff_ESI,
                 unaff_EBP,unaff_EBX,(double)CONCAT44(uVar10,iVar9),
                 (double)CONCAT44(puVar11,uVar4 + (int)puVar7),(double)CONCAT44(iVar5,iVar8),
                 in_stack_fffffffc,unaff_retaddr,param_1,param_2,param_3,param_4,param_5,param_6,
                 param_7);
  }
  else if (sVar1 == 2) {
    FUN_00540720((double)CONCAT44(&stack0xffffffec,iVar9),unaff_EDI,unaff_ESI,
                 (double)CONCAT44(unaff_EBX,unaff_EBP),(double)CONCAT44(uVar10,iVar9));
  }
  else {
    _DAT_00000000 = 0;
  }
  *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + -1;
  *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + -1;
  return;
}


