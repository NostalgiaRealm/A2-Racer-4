
/* ==== FUN_004a366c @ 004a366c ==== 
 * signature: undefined4 __register FUN_004a366c(int param_1, undefined4 param_2)
 * body: 004a366c-004a36a3
 */

undefined4 FUN_004a366c(int param_1,undefined4 param_2)

{
  undefined1 auStack_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x112;
  local_8 = 2;
  local_4 = param_2;
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x112,(DWORD_PTR)auStack_10);
  return local_c;
}


