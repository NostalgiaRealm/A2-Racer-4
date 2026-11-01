
/* ==== FUN_0045b838 @ 0045b838 ==== 
 * signature: undefined FUN_0045b838(void)
 * body: 0045b838-0045b85f;0045b8cf-0045b8fc
 */

/* WARNING: Instruction at (ram,0x0045b8d3) overlaps instruction at (ram,0x0045b8d2)
    */
/* WARNING: Unable to track spacebase fully for stack */

int * FUN_0045b838(undefined4 param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SIZE_T SVar5;
  LPVOID pvVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int extraout_ECX;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 extraout_EDX;
  byte *unaff_EBX;
  undefined4 uVar12;
  undefined4 *puVar13;
  int unaff_EBP;
  undefined4 uVar14;
  undefined4 *unaff_ESI;
  undefined4 uVar15;
  int unaff_EDI;
  undefined4 *puVar16;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000000;
  
  puVar4 = (undefined4 *)CONCAT31((int3)((uint)param_1 >> 8),(char)param_1 - (char)*param_3);
  *param_3 = *param_3 - in_stack_00000000;
  piVar8 = (int *)((int)param_3 + 1);
  *piVar8 = *piVar8 - (CONCAT22((short)((uint)in_stack_00000000 >> 0x10),
                                CONCAT11((char)((uint)in_stack_00000000 >> 8) + (char)piVar8,
                                         (char)in_stack_00000000)) | 0x2b);
  *param_2 = (char)((uint)piVar8 >> 8);
  iVar9 = (int)param_3 + 2;
  bVar1 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + (byte)param_2;
  puVar4[-1] = puVar4;
  uVar10 = SUB42(param_2,0);
  uVar2 = in(uVar10);
  *(undefined1 *)(unaff_EDI + 1) = uVar2;
  out(*unaff_ESI,uVar10);
  uVar3 = in(uVar10);
  *(undefined4 *)(unaff_EDI + 2) = uVar3;
  piVar8 = unaff_ESI + 2;
  out(unaff_ESI[1],uVar10);
  if (CARRY1(bVar1,(byte)param_2)) {
    *(uint *)(unaff_EDI + -0x36cc0000) = *(uint *)(unaff_EDI + -0x36cc0000) | unaff_EBP - 1U;
  }
  else {
    puVar4[-2] = unaff_EBX;
    if (unaff_EBP - 1U != 0) {
      puVar16 = (undefined4 *)puVar4[-2];
      uVar15 = puVar4[-1];
      uVar14 = *puVar4;
      uVar12 = puVar4[2];
      uVar11 = puVar4[3];
      iVar9 = puVar4[4];
      piVar8 = (int *)puVar4[5];
      uVar3 = in((short)uVar11);
      *puVar16 = uVar3;
      puVar4[5] = uVar14;
      puVar4[4] = uVar12;
      puVar4[3] = uVar15;
      puVar13 = puVar4 + 2;
      puVar4[2] = puVar16 + 1;
      if ((char)uVar11 != '\0') {
        puVar13 = puVar4 + -2;
        puVar4[-3] = 0x45b872;
        piVar8 = (int *)FUN_0040329c((int)piVar8,(char)uVar11,iVar9,puVar4[-2],puVar4[-1]);
        iVar9 = extraout_ECX;
        uVar11 = extraout_EDX;
      }
      puVar13[-1] = 0x45b881;
      FUN_00402f6c(piVar8,'\0',iVar9);
      piVar8[5] = iVar9;
      puVar13[-1] = iVar9;
      puVar13[-2] = 0x45b88a;
      SVar5 = GlobalSize((HGLOBAL)puVar13[-1]);
      if ((int)SVar5 < 0) {
        puVar13[-1] = 0x45b893;
        SVar5 = thunk_FUN_00402808(SVar5);
      }
      puVar13[-1] = SVar5;
      puVar13[-2] = iVar9;
      puVar13[-3] = 0x45b89a;
      pvVar6 = GlobalLock((HGLOBAL)puVar13[-2]);
      uVar3 = puVar13[-1];
      puVar13[-1] = 0x45b8a4;
      FUN_0041298c((int)piVar8,pvVar6,uVar3);
      if ((char)uVar11 != '\0') {
        puVar13[-1] = 0x45b8af;
        FUN_004032f4(piVar8);
        *in_FS_OFFSET = *puVar13;
      }
      return piVar8;
    }
    piVar8 = (int *)((int)unaff_ESI + 9);
    puVar4[-3] = 0x45b8d7;
    GlobalUnlock((HGLOBAL)puVar4[-2]);
    iVar9 = 0;
  }
  puVar4[-2] = 0x45b8e2;
  FUN_0041298c((int)piVar8,0,iVar9);
  puVar4[-2] = 0x45b8ee;
  piVar7 = (int *)TMemoryStream_Destroy(piVar8,(byte)unaff_EBX & 0xfc);
  if ('\0' < (char)(byte)unaff_EBX) {
    puVar4[-2] = 0x45b8f9;
    piVar7 = (int *)FUN_004032ec(piVar8);
  }
  return piVar7;
}


