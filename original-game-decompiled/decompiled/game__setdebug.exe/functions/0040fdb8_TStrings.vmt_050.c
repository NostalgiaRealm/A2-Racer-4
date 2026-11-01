
/* ==== TStrings.vmt_050 @ 0040fdb8 ==== 
 * signature: undefined __register TStrings.vmt_050(int * param_1, undefined * param_2)
 * body: 0040fdb8-0040fe24
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_050(int *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined *local_10;
  undefined *local_c;
  int *local_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  local_10 = (undefined *)0x0;
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,iVar3,&local_10);
      iVar2 = FUN_00407b28(local_10,local_c);
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_0040fe2c;
  pcStack_24 = (code *)0x40fe24;
  FUN_004039b8((int *)&local_10);
  return;
}


