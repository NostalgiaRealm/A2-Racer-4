
/* ==== FUN_004a3b9c @ 004a3b9c ==== 
 * signature: undefined4 __register FUN_004a3b9c(int param_1)
 * body: 004a3b9c-004a3bdb
 */

undefined4 FUN_004a3b9c(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 2;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14;
}


