
/* ==== FUN_004a37e8 @ 004a37e8 ==== 
 * signature: undefined __register FUN_004a37e8(int param_1)
 * body: 004a37e8-004a3833
 */

void FUN_004a37e8(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  if ((*(char *)(param_1 + 0x2c9) != '\0') && (*(char *)(param_1 + 0x2cf) != '\0')) {
    *(undefined4 *)(param_1 + 0x2d0) = 0x10002;
    local_14 = 0;
    MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x841,0x10002,(DWORD_PTR)auStack_18);
    *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  }
  return;
}


