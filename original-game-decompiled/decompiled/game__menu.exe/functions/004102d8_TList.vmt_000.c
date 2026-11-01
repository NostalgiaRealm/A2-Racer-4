
/* ==== TList.vmt_000 @ 004102d8 ==== 
 * signature: undefined TList.vmt_000(void)
 * body: 004102d8-00410308
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TList_vmt_000(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  if (iVar1 < 0x41) {
    if (iVar1 < 9) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0x10;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = iVar1 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  FUN_00410468(param_1,iVar2 + iVar1);
  return;
}


