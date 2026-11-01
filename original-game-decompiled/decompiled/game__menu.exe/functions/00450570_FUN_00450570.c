
/* ==== FUN_00450570 @ 00450570 ==== 
 * signature: undefined __register FUN_00450570(int param_1)
 * body: 00450570-004505ee
 */

void FUN_00450570(int param_1)

{
  UINT_PTR UVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined4 *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  KillTimer(*(HWND *)(param_1 + 0x28),1);
  if (((*(UINT *)(param_1 + 0x24) != 0) && (*(char *)(param_1 + 0x38) != '\0')) &&
     (*(short *)(param_1 + 0x32) != 0)) {
    UVar1 = SetTimer(*(HWND *)(param_1 + 0x28),1,*(UINT *)(param_1 + 0x24),(TIMERPROC)0x0);
    if (UVar1 == 0) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab9f4,(int *)&local_8);
      piVar2 = FUN_0040b5d8((int *)&DAT_0040e9b0,'\x01',local_8);
      FUN_004036f4(piVar2);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004505f6;
  pcStack_18 = (code *)0x4505ee;
  FUN_00403c5c((int *)&local_8);
  return;
}


