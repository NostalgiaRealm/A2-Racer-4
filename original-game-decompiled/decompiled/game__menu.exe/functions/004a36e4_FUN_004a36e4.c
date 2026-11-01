
/* ==== FUN_004a36e4 @ 004a36e4 ==== 
 * signature: undefined __register FUN_004a36e4(int param_1, byte param_2)
 * body: 004a36e4-004a371f
 */

void FUN_004a36e4(int param_1,byte param_2)

{
  MCIERROR MVar1;
  undefined1 auStack_14 [4];
  uint local_10;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x401;
  local_10 = (uint)param_2;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x80d,0x401,(DWORD_PTR)auStack_14);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return;
}


