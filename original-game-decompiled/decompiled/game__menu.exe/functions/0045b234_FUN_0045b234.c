
/* ==== FUN_0045b234 @ 0045b234 ==== 
 * signature: undefined __register FUN_0045b234(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0045b234-0045b2cf
 */

void FUN_0045b234(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  puVar1 = *(undefined4 **)(*(uint *)(param_4 + -4) + 8);
  iVar3 = puVar1[2];
  iVar5 = iVar3 + -1;
  if (SBORROW4(iVar3,1)) {
    thunk_FUN_00402808(*(uint *)(param_4 + -4));
  }
  if (0 < iVar5) {
    piVar2 = (int *)FUN_0041ff40(puVar1,param_1);
    iVar3 = FUN_0040312c(piVar2,(int)&PTR_TPersistent_vmt_000_0045adf4);
    piVar2 = (int *)FUN_0041ff40(*(undefined4 **)(*(int *)(param_4 + -4) + 8),iVar5);
    uVar4 = FUN_0040312c(piVar2,(int)&PTR_TPersistent_vmt_000_0045adf4);
    while (*(uint *)(iVar3 + 0x30) < *(uint *)(uVar4 + 0x30)) {
      bVar6 = SBORROW4(iVar5,1);
      iVar5 = iVar5 + -1;
      if (bVar6) {
        thunk_FUN_00402808(uVar4);
      }
      piVar2 = (int *)FUN_0041ff40(*(undefined4 **)(*(int *)(param_4 + -4) + 8),iVar5);
      uVar4 = FUN_0040312c(piVar2,(int)&PTR_TPersistent_vmt_000_0045adf4);
    }
    FUN_004103a4(*(int **)(*(int *)(param_4 + -4) + 8),param_1,iVar5);
  }
  return;
}


