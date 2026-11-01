
/* ==== TBitmap.vmt_008 @ 0041da54 ==== 
 * signature: undefined __register TBitmap.vmt_008(int * param_1, int * param_2)
 * body: 0041da54-0041db0b;0041db33-0041db42
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBitmap_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff84;
  undefined4 uStack_70;
  code *pcStack_6c;
  undefined4 local_5c [21];
  int *local_8;
  
  local_8 = param_1;
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00403114(param_2,(int)FUN_004173a4);
    if ((char)uVar1 == '\0') {
      TPersistent_vmt_008(local_8,param_2);
      return;
    }
  }
  pcStack_6c = (code *)0x41da84;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac66c);
  pcStack_6c = thunk_FUN_004036bc;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  if (param_2 == (int *)0x0) {
    FUN_00402c30(local_5c,0x54,0);
    in_stack_ffffff84 = 0;
    FUN_0041e3e4((int)local_8,0,0,(int *)0x0,0,local_5c);
  }
  else {
    FUN_0041cf10(param_2[8]);
    FUN_0041cf14((int *)local_8[8]);
    local_8[8] = param_2[8];
    *(undefined1 *)((int)local_8 + 0x19) = *(undefined1 *)((int)param_2 + 0x19);
    local_8[0xb] = param_2[0xb];
    *(char *)(local_8 + 0xc) = (char)param_2[0xc];
  }
  *in_FS_OFFSET = in_stack_ffffff84;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac66c);
  return;
}


