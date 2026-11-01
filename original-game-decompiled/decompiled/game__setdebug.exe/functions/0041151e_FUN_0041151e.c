
/* ==== FUN_0041151e @ 0041151e ==== 
 * signature: undefined FUN_0041151e(void)
 * body: 0041151e-00411568
 */

void FUN_0041151e(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  
  iVar3 = *(int *)(*(int *)(unaff_EBP + -4) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar1 = (int *)FUN_0040f024(*(undefined4 **)(unaff_EBP + -4),iVar4);
      uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_vmt_000_0040e30c);
      if ((char)uVar2 != '\0') {
        *(ushort *)(piVar1 + 8) = *(ushort *)(piVar1 + 8) & 0xff7f;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = in_stack_00000000;
  FUN_00402d14(*(int **)(unaff_EBP + -4));
  return;
}


