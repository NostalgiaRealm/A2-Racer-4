
/* ==== FUN_0045aba0 @ 0045aba0 ==== 
 * signature: undefined __register FUN_0045aba0(int * param_1, byte * param_2)
 * body: 0045aba0-0045ac8b
 */

void FUN_0045aba0(int *param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  byte *pbVar7;
  byte *local_8;
  
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pbVar7 = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  uVar2 = FUN_00410f08(param_1[1]);
  iVar5 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  bVar1 = false;
  while ((-1 < iVar5 && (!bVar1))) {
    piVar4 = (int *)FUN_00410f10(param_1[1],iVar5);
    uVar3 = FUN_0040312c(piVar4,(int)&PTR_TPersistent_vmt_000_0045a3a8);
    pbVar7 = local_8;
    uVar2 = FUN_0045aafc(param_1,*(byte **)(*(int *)(uVar3 + 0xc) + 4),*(undefined4 *)(uVar3 + 0x10)
                         ,local_8);
    if ((char)uVar2 != '\0') {
      bVar1 = true;
      FUN_0045ad2c(uVar3);
      uVar2 = *(uint *)(uVar3 + 0xc);
    }
    bVar6 = SBORROW4(iVar5,1);
    iVar5 = iVar5 + -1;
    if (bVar6) {
      thunk_FUN_00402808(uVar2);
    }
  }
  if ((!bVar1) && (iVar5 = FUN_0045a948(param_1,(undefined4 *)local_8), iVar5 != 0)) {
    piVar4 = TCollectionItem_vmt_018
                       ((int *)&PTR_TPersistent_vmt_000_0045a3a8,'\x01',(int *)param_1[1]);
    FUN_0045ad2c((uint)piVar4);
    piVar4[3] = iVar5;
    iVar5 = FUN_0040873c(*(undefined **)(iVar5 + 4));
    piVar4[4] = iVar5;
  }
  *in_FS_OFFSET = pbVar7;
  FUN_00403c5c((int *)&local_8);
  return;
}


