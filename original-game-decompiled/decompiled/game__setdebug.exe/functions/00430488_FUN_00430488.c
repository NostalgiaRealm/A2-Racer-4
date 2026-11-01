
/* ==== FUN_00430488 @ 00430488 ==== 
 * signature: undefined __register FUN_00430488(int * param_1, int param_2)
 * body: 00430488-00430506
 */

void FUN_00430488(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined4 *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_00430464(param_1);
  if (iVar2 <= param_2) {
    FUN_00405298((undefined4 *)PTR_PTR_00446b38,(int *)&local_8);
    piVar3 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar3);
  }
  bVar1 = FUN_00430128((int)param_1);
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (bVar1) {
    himl = (HIMAGELIST)FUN_00430264(param_1);
    ImageList_Remove(himl,param_2);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  FUN_00402ef0(param_1,uVar5,uVar4);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0043050e;
  pcStack_18 = (code *)0x430506;
  FUN_004039b8((int *)&local_8);
  return;
}


