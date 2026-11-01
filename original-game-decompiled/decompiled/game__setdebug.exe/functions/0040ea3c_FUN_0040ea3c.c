
/* ==== FUN_0040ea3c @ 0040ea3c ==== 
 * signature: undefined FUN_0040ea3c(void)
 * body: 0040ea3c-0040ea47
 */

/* WARNING: Removing unreachable block (ram,0x0040ea46) */
/* WARNING: Removing unreachable block (ram,0x0040ea4f) */
/* WARNING: Removing unreachable block (ram,0x0040ea57) */
/* WARNING: Removing unreachable block (ram,0x0040ea6a) */
/* WARNING: Removing unreachable block (ram,0x0040ea79) */

undefined4 FUN_0040ea3c(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int iVar6;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_c;
  
  puVar1 = (uint *)(param_3 * 3 + 0x6e);
  *puVar1 = *puVar1 | param_2;
  if (*puVar1 == 0) {
    uStackY_c = 0x40ea99;
    iVar5 = FUN_0040ea48((int *)FUN_0040ea3c,'\x01',param_1,unaff_EDI,param_2);
    uVar4 = FUN_0040f304(DAT_00447624,iVar5);
    return uVar4;
  }
  out(*unaff_ESI,(short)param_2);
  out(*(undefined1 *)(unaff_ESI + 1),(short)param_2);
  *(int *)(unaff_EBP + -8) = param_1;
  puVar2 = (undefined4 *)FUN_0040f38c(DAT_00447624);
  uStackY_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_c;
  iVar5 = puVar2[2];
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      iVar3 = FUN_0040f024(puVar2,iVar6);
      if (*(int *)(iVar3 + 4) == *(int *)(unaff_EBP + -4)) {
        *(undefined4 *)(unaff_EBP + -8) = *(undefined4 *)(iVar3 + 8);
        FUN_0040350c();
        return *(undefined4 *)(unaff_EBP + -8);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uStackY_c;
  uVar4 = FUN_0040f3f0(DAT_00447624);
  return uVar4;
}


