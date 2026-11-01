
/* ==== FUN_00542a70 @ 00542a70 ==== 
 * signature: undefined __cdecl FUN_00542a70(int * param_1, int param_2, int * param_3, int param_4)
 * body: 00542a70-00542bfb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00542a70(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  uint *puVar8;
  int *piVar9;
  undefined1 *unaff_EBX;
  int *unaff_EBP;
  undefined1 *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint *puVar10;
  uint uVar11;
  float *pfVar12;
  int *piVar13;
  int *in_stack_ffffffe8;
  uint *puVar14;
  undefined **in_stack_fffffffc;
  
  iVar3 = param_1[8];
  iVar1 = iVar3 + 0x18 + (*(uint *)(iVar3 + 0x14) >> 8 & 3) * 0x1c;
  piVar13 = *(int **)(iVar1 + 0x10);
  uVar11 = *(uint *)(iVar1 + 0x14);
  iVar3 = iVar3 + 0x18 + ((*(uint *)(iVar3 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c;
  puVar10 = *(uint **)(iVar3 + 0x14);
  pfVar7 = (float *)((uint *)(uVar11 & 0xfffffff0) +
                    ((*(uint *)(uVar11 & 0xfffffff0) & 0xfff) + 1) * -4);
  pfVar12 = pfVar7;
  puVar6 = (undefined8 *)FUN_00506590((int)piVar13);
  pfVar7 = (float *)((int)*pfVar7 + (int)pfVar7);
  iVar4 = *(int *)(iVar3 + 0x10);
  puVar8 = (uint *)((uint)puVar10 & 0xfffffff0) +
           ((*(uint *)((uint)puVar10 & 0xfffffff0) & 0xfff) + 1) * -4;
  puVar14 = puVar8;
  piVar9 = (int *)FUN_00506590(iVar4);
  uVar5 = *puVar8;
  param_1[0xe] = 0;
  if (*(short *)(iVar1 + 0x1a) == 0) {
    sVar2 = *(short *)(iVar3 + 0x1a);
    if (sVar2 == 0) {
      FUN_005410a0(puVar10,(double *)&stack0xffffffd8,(double)CONCAT44(unaff_EDI,&stack0xffffffec),
                   (int)unaff_ESI,unaff_EBP,(double)CONCAT44(puVar10,unaff_EBX),uVar11,pfVar7,
                   pfVar12,(undefined4 *)puVar6,piVar13,in_stack_ffffffe8,
                   (uint *)(uVar5 + (int)puVar8),puVar14,piVar9,iVar4,in_stack_fffffffc,
                   unaff_retaddr,(double)CONCAT44(param_2,param_1),(double)CONCAT44(param_4,param_3)
                  );
    }
    else if (sVar2 == 1) {
      FUN_00541bd0((double)CONCAT44(puVar10,uVar11),CONCAT44(&stack0xffffffec,&stack0xffffffd8));
    }
    else if (sVar2 == 2) {
      FUN_005402f0((double)CONCAT44(&stack0xffffffd8,puVar10),(int *)&stack0xffffffec);
    }
    else {
      _DAT_00000000 = 0;
    }
  }
  else if (*(short *)(iVar1 + 0x1a) == 1) {
    if (*(short *)(iVar3 + 0x1a) == 1) {
      FUN_00540a40(uVar11,CONCAT44(&stack0xffffffd8,puVar10),&stack0xffffffec,unaff_EDI,unaff_ESI,
                   (undefined1 *)unaff_EBP,unaff_EBX,(undefined1 *)puVar10,(undefined8 *)uVar11,
                   (undefined8 *)pfVar7,(undefined8 *)pfVar12,puVar6,piVar13,in_stack_ffffffe8,
                   (uint *)(uVar5 + (int)puVar8),puVar14,(double)CONCAT44(iVar4,piVar9),
                   in_stack_fffffffc,unaff_retaddr,param_1,param_2,param_3,param_4);
    }
    else {
      _DAT_00000000 = 0;
    }
  }
  else {
    _DAT_00000000 = 0;
  }
  *(int *)((int)puVar6 + 4) = *(int *)((int)puVar6 + 4) + -1;
  piVar9[1] = piVar9[1] + -1;
  return;
}


