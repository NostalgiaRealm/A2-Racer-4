
/* ==== FUN_004a3640 @ 004a3640 ==== 
 * signature: undefined __register FUN_004a3640(int param_1)
 * body: 004a3640-004a366b
 */

void FUN_004a3640(int param_1)

{
  undefined1 auStack_c [8];
  
  FUN_004a2864(param_1);
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x807,0x102,(DWORD_PTR)auStack_c);
  return;
}


