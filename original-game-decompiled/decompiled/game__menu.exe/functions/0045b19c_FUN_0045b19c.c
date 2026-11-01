
/* ==== FUN_0045b19c @ 0045b19c ==== 
 * signature: uint __register FUN_0045b19c(int param_1)
 * body: 0045b19c-0045b1fd
 */

uint FUN_0045b19c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_0041ff40(*(undefined4 **)(param_1 + 8),0);
  iVar2 = FUN_0040312c(piVar1,(int)&PTR_TPersistent_vmt_000_0045adf4);
  uVar3 = *(uint *)(iVar2 + 0x28);
  iVar2 = *(int *)(*(uint *)(param_1 + 8) + 8);
  iVar4 = iVar2 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 8));
  }
  if (0 < iVar4) {
    do {
      piVar1 = (int *)FUN_0041ff40(*(undefined4 **)(param_1 + 8),iVar4);
      iVar2 = FUN_0040312c(piVar1,(int)&PTR_TPersistent_vmt_000_0045adf4);
      uVar3 = FUN_0045af28(*(uint *)(iVar2 + 0x28),uVar3);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar3;
}


