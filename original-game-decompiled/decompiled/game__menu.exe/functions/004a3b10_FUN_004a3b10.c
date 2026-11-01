
/* ==== FUN_004a3b10 @ 004a3b10 ==== 
 * signature: undefined4 __register FUN_004a3b10(int param_1)
 * body: 004a3b10-004a3b56
 */

undefined4 FUN_004a3b10(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_004a2864(param_1);
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 3;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14;
}


