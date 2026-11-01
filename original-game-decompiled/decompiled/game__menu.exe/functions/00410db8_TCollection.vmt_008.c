
/* ==== TCollection.vmt_008 @ 00410db8 ==== 
 * signature: undefined __register TCollection.vmt_008(int * param_1, int * param_2)
 * body: 00410db8-00410e35;00410e3d-00410e4c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCollection_vmt_008(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x410dd1;
  uVar2 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0040eccc);
  if ((char)uVar2 != '\0') {
    puStack_18 = (undefined1 *)0x410ddd;
    (**(code **)(*param_1 + 0x14))();
    pcStack_1c = thunk_FUN_004036bc;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00410e64(param_1);
    iVar3 = FUN_00410f08((int)param_2);
    if (-1 < iVar3 + -1) {
      iVar5 = 0;
      do {
        uVar2 = FUN_00410f10((int)param_2,iVar5);
        piVar4 = (int *)FUN_00410dac((int)param_1);
        (**(code **)(*piVar4 + 8))(piVar4,uVar2);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar1 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x410e47;
    pcStack_1c = (code *)0x410e35;
    (**(code **)(*param_1 + 0x18))(param_1,*param_1,puVar1);
    return;
  }
  puStack_18 = (undefined1 *)0x410e47;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


